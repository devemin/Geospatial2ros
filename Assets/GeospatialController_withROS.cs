
// Origin copyright.

// <copyright file="GeospatialController.cs" company="Google LLC">
//
// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// </copyright>
//-----------------------------------------------------------------------



// "GeospatialController_withROS.cs"
// 
// Edit by devemin (2022/5/31)
// Apache License 2.0
// 


namespace Google.XR.ARCoreExtensions.Samples.Geospatial
{
    using System;
    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.XR.ARFoundation;
    using UnityEngine.XR.ARSubsystems;

    using Google.XR.ARCoreExtensions;
    
    using Unity.Robotics.ROSTCPConnector;
    using NavSatFixMsg = RosMessageTypes.Sensor.NavSatFixMsg;
    using PoseMsg = RosMessageTypes.Geometry.PoseMsg;

    using System.Text.RegularExpressions;
    using System.Net.Sockets;
    using System.Linq;

    public class GeospatialController_withROS : MonoBehaviour
    {
        private string myIPaddress = "192.168.0.58";
        private int myPort = 10000;
        private float myRate = 1.0f;    //(Hz)
        private int myCommtype = 1;     // 1: ROS,  2 or Other: UDP

        private const string _myKey_IP = "myKey_IP";
        private const string _myKey_Port = "myKey_Port";
        private const string _myKey_Rate = "myKey_Rate";
        private const string _myKey_Commtype = "myKey_Commtype";

        private float timeleft;

        static UdpClient udp_send;


        [SerializeField] string topicName_fix = "fix";
        [SerializeField] string topicName_quat = "quat";

        private ROSConnection ros;
        private NavSatFixMsg NavSatFixMessage = new NavSatFixMsg();
        private PoseMsg PoseMessage = new PoseMsg();


        [Header("AR Components")]

        public ARSessionOrigin SessionOrigin;
        public ARSession Session;
        public AREarthManager EarthManager;
        public ARCoreExtensions ARCoreExtensions;


        [Header("UI Elements")]

        //public GameObject GeospatialPrefab;
        //public GameObject PrivacyPromptCanvas;
        //public GameObject ARViewCanvas;
        //public Button ClearAllButton;
        //public Button SetAnchorButton;


        public Text text_status;
        public Button but_Enable;
        public Button but_ApplySettings;
        public InputField if_ip;
        public InputField if_port;
        public InputField if_rate;
        public InputField if_log;
        public Toggle tg_ros;
        public Toggle tg_udp;



        public GameObject InfoPanel;
        public Text InfoText;
        public Text SnackBarText;
        public Text DebugText;

        private const string _localizingMessage =                   "Localizing your device to set anchor.";
        private const string _localizationInstructionMessage =      "Point your camera at buildings, stores, and signs near you.";
        private const string _localizationFailureMessage =          "Localization not possible.\n" + "Close and open the app to restart the session.";
        private const string _localizationSuccessMessage =          "Localization completed.";

        private const float _timeoutSeconds = 180;
        private const float _errorDisplaySeconds = 3;


        private const double _headingAccuracyThreshold = 25;
        private const double _horizontalAccuracyThreshold = 20;


        private bool _isInARView = false;
        private bool _isReturning = false;
        private bool _isLocalizing = false;
        private bool _enablingGeospatial = false;
        private float _localizationPassedTime = 0f;
        private float _configurePrepareTime = 3f;



        public void onChangeSettings()
        {
            but_ApplySettings.interactable = true;
        }




        void Start()
        {

            if (PlayerPrefs.HasKey(_myKey_IP)) { myIPaddress = PlayerPrefs.GetString(_myKey_IP); }
            if_ip.text = myIPaddress;

            if (PlayerPrefs.HasKey(_myKey_Port)) { myPort = PlayerPrefs.GetInt(_myKey_Port); }
            if_port.text = myPort.ToString();

            if (PlayerPrefs.HasKey(_myKey_Rate)) { myRate = PlayerPrefs.GetFloat(_myKey_Rate); }
            if_rate.text = myRate.ToString("f1");

            if (PlayerPrefs.HasKey(_myKey_Commtype)) {
                myCommtype = PlayerPrefs.GetInt(_myKey_Commtype);

                if (myCommtype == 1)
                {
                    tg_ros.isOn = true;
                }
                else
                {
                    tg_udp.isOn = true;
                }
            }

            but_ApplySettings.interactable = false;


        }



        public void ConnectComm()
        {
            Debug.Log("ConnectComm");

            if (myCommtype == 1)
            {
                Debug.Log("ROS Object ON");

                if (ros == null)
                {
                    // Get ROS connection static instance
                    //ROSConnection.instance.ConnectOnStart = false;
                    //ros = ROSConnection.instance;


                    ros = ROSConnection.GetOrCreateInstance();
                    ros.ConnectOnStart = false;
                    ros.RegisterPublisher<NavSatFixMsg>(topicName_fix);
                    ros.RegisterPublisher<PoseMsg>(topicName_quat);

                }
                ros.RosIPAddress = PlayerPrefs.GetString(_myKey_IP);
                ros.RosPort = PlayerPrefs.GetInt(_myKey_Port);

                if (ros != null)
                {

                    Debug.Log("ros.Connect()");

                    ros.ShowHud = true;
                    ros.Connect();
                    //ros.enabled = true;
                    ros.gameObject.SetActive(true);
                }

                if_log.text = "ROS Connection.\n" + if_log.text;
            }
            else
            {
                Debug.Log("UDP ON");

                if (udp_send == null)
                {
                    udp_send = new UdpClient();
                }
                udp_send.Connect(myIPaddress, myPort);

                if_log.text = "UDP Connection.\n" + if_log.text;
            }


        }



        public void DisconnectComm()
        {
            Debug.Log("DisconnectComm");


            Debug.Log("ROS Object OFF");

            if (ros != null)
            {
                ros.ShowHud = false;
                ros.Disconnect();
                //ros.enabled = false;
                ros.gameObject.SetActive(false);
            }


            Debug.Log("UDP OFF");

            if (udp_send != null)
            {
                udp_send.Close();
            }

            if_log.text = "Disconnection.\n" + if_log.text;

        }



        public void onApplySetting()
        {
            SwitchToARView(false);
            DisconnectComm();


            if (isIPstr(if_ip.text))
            {
                //IP address string OK.
                PlayerPrefs.SetString(_myKey_IP, if_ip.text);
                myIPaddress = if_ip.text;
            }
            else
            {
                //IP address string Error.
                PlayerPrefs.SetString(_myKey_IP, "192.168.0.58");
                myIPaddress = "192.168.0.58";

                if_ip.text = myIPaddress;
            }


            PlayerPrefs.SetInt(_myKey_Port, int.Parse(if_port.text));
            myPort = int.Parse(if_port.text);
            PlayerPrefs.SetFloat(_myKey_Rate, float.Parse(if_rate.text));
            myRate = float.Parse(if_rate.text);

            if (tg_ros.isOn)
            {
                PlayerPrefs.SetInt(_myKey_Commtype, 1);
                myCommtype = 1;
            }
            else
            {
                PlayerPrefs.SetInt(_myKey_Commtype, 2);
                myCommtype = 2;
            }

            if_log.text = "Applied Settings.\n" + if_log.text;
            but_ApplySettings.interactable = false;
        }


        public void onChangeVPSstate()
        {
            SwitchToARView(!_isInARView);

            if (_isInARView)
            {
                ConnectComm();
            }
            else
            {
                DisconnectComm();
            }
        }


        public bool isIPstr(string orgstr)
        {
            Regex regex = new Regex("^\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}$");


            if (regex.IsMatch(orgstr))
            {
                return true;
            }
            else
            {
                return false;
            }
        }



        public void Awake()
        {
            // Lock screen to portrait.
            Screen.autorotateToLandscapeLeft = false;
            Screen.autorotateToLandscapeRight = false;
            Screen.autorotateToPortraitUpsideDown = false;
            Screen.orientation = ScreenOrientation.Portrait;

            // Enable geospatial sample to target 60fps camera capture frame rate on supported devices.
            // Note, Application.targetFrameRate is ignored when QualitySettings.vSyncCount != 0.
            Application.targetFrameRate = 60;

            if (SessionOrigin == null)
            {
                Debug.LogError("Cannot find ARSessionOrigin.");
            }

            if (Session == null)
            {
                Debug.LogError("Cannot find ARSession.");
            }

            if (ARCoreExtensions == null)
            {
                Debug.LogError("Cannot find ARCoreExtensions.");
            }

            but_ApplySettings.interactable = false;
        }


        public void OnEnable()
        {
            _isReturning = false;
            _enablingGeospatial = false;
            InfoPanel.SetActive(false);
            DebugText.gameObject.SetActive(Debug.isDebugBuild && EarthManager != null);

            _localizationPassedTime = 0f;
            _isLocalizing = true;
            SnackBarText.text = _localizingMessage;

#if UNITY_IOS
            Debug.Log("Start location services.");
            Input.location.Start();
#endif

            but_ApplySettings.interactable = false;

            //セルフィーカメラ設定？エラーなったのでダメだった。
            //ARCoreExtensions.CameraManager.requestedFacingDirection = CameraFacingDirection.User;
        }


        public void Update()
        {
            timeleft -= Time.deltaTime;


            if (!_isInARView)
            {
                //Debug.Log("!_isInARView");
                but_Enable.GetComponent<Image>().color = Color.red;
                but_Enable.GetComponentInChildren<Text>().text = "START";

                text_status.text = "All stop.";

                return;
            }
            but_Enable.GetComponent<Image>().color = Color.green;
            but_Enable.GetComponentInChildren<Text>().text = "STOP";

            UpdateDebugInfo();

            // Check session error status.
            LifecycleUpdate();
            if (_isReturning)
            {

                text_status.text = "_isReturning error.";

                return;
            }

            if (ARSession.state != ARSessionState.SessionInitializing &&
                ARSession.state != ARSessionState.SessionTracking)
            {
                text_status.text = "ARSession error.";

                return;
            }

            // Check feature support and enable Geospatial API when it's supported.
            var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
            switch (featureSupport)
            {
                case FeatureSupported.Unknown:
                    text_status.text = "FeatureSupported.Unknown.";
                    return;
                case FeatureSupported.Unsupported:
                    ReturnWithReason("Geospatial API is not supported by this devices.");
                    text_status.text = "Geospatial not supported.";
                    return;
                case FeatureSupported.Supported:
                    if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
                        GeospatialMode.Disabled)
                    {
                        Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
                        ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
                            GeospatialMode.Enabled;
                        _configurePrepareTime = 3.0f;
                        _enablingGeospatial = true;

                        text_status.text = "GeospatialMode.Disabled.";

                        return;
                    }
                    
                    break;
            }

            // Waiting for new configuration taking effect.
            if (_enablingGeospatial)
            {
                _configurePrepareTime -= Time.deltaTime;
                if (_configurePrepareTime < 0)
                {
                    _enablingGeospatial = false;
                }
                else
                {
                    text_status.text = "_configurePrepareTime > 0.";

                    return;
                }
            }

            // Check earth state.
            var earthState = EarthManager.EarthState;
            if (earthState != EarthState.Enabled)
            {
                ReturnWithReason(
                    "Geospatial sample encountered an EarthState error: " + earthState);

                text_status.text = "EarthState error.";

                return;
            }

            // Check earth localization.
#if UNITY_IOS
            bool isSessionReady = ARSession.state == ARSessionState.SessionTracking &&
                Input.location.status == LocationServiceStatus.Running;
#else
            bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
#endif
            var earthTrackingState = EarthManager.EarthTrackingState;
            var pose = earthTrackingState == TrackingState.Tracking ?
                EarthManager.CameraGeospatialPose : new GeospatialPose();
            if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
                pose.HeadingAccuracy > _headingAccuracyThreshold ||
                pose.HorizontalAccuracy > _horizontalAccuracyThreshold)
            {
                // Lost localization during the session.
                if (!_isLocalizing)
                {
                    _isLocalizing = true;
                    _localizationPassedTime = 0f;
                }

                if (_localizationPassedTime > _timeoutSeconds)
                {
                    Debug.LogError("Geospatial sample localization passed timeout.");

                    text_status.text = "localization passed timeout.";

                    ReturnWithReason(_localizationFailureMessage);
                }
                else
                {
                    _localizationPassedTime += Time.deltaTime;
                    SnackBarText.text = _localizationInstructionMessage;
                }
            }
            else if (_isLocalizing)
            {
                // Finished localization.
                _isLocalizing = false;
                _localizationPassedTime = 0f;
                SnackBarText.text = _localizationSuccessMessage;

                text_status.text = "_isLocalizing.";

            }

            InfoPanel.SetActive(true);
            if (earthTrackingState == TrackingState.Tracking)
            {
                InfoText.text = string.Format(
                "LAT/LNG: \t\t\t\t{1}°, {2}°{0}" +
                "ALT:     \t\t\t\t\t{4}m{0}" +
                "HEADING: \t\t\t\t{6}°{0}" +
                "Horizontal Accuracy: \t\t{3}m{0}" +
                "Vertical Accuracy:   \t\t{5}m{0}" +
                "Heading Accuracy:    \t\t{7}°",
                Environment.NewLine,
                pose.Latitude.ToString("F6"),
                pose.Longitude.ToString("F6"),
                pose.HorizontalAccuracy.ToString("F6"),
                pose.Altitude.ToString("F2"),
                pose.VerticalAccuracy.ToString("F2"),
                pose.Heading.ToString("F1"),
                pose.HeadingAccuracy.ToString("F1"));
            }
            else
            {
                InfoText.text = "GEOSPATIAL POSE: not tracking";

            }


            if (timeleft <= 0.0)
            {
                timeleft = (float) (1.0d / myRate);
                //定期処理

                if (myCommtype == 1)
                {
                    //ROS communication
                    Debug.Log("ROS sending");

                    text_status.text = "ROS sending.";

                    NavSatFixMessage.latitude = pose.Latitude;
                    NavSatFixMessage.longitude = pose.Longitude;
                    NavSatFixMessage.altitude = pose.Altitude;
                    NavSatFixMessage.header.frame_id = "gps";

                    Quaternion tmppose = Quaternion.Euler(0.0f, (float)pose.Heading, 0.0f);
                    PoseMessage.orientation.x = tmppose.x;
                    PoseMessage.orientation.y = tmppose.y;
                    PoseMessage.orientation.z = tmppose.z;
                    PoseMessage.orientation.w = tmppose.w;

                    //ros.Send(topicName_fix, NavSatFixMessage);
                    //ros.Send(topicName_quat, PoseMessage);


                    ros.Publish(topicName_fix, NavSatFixMessage);
                    ros.Publish(topicName_quat, PoseMessage);

                    if_log.text = "ROS pub: " + pose.Latitude.ToString("f5") + ", " + pose.Longitude.ToString("f5") + ", " + pose.Altitude.ToString("f5") + ", " + pose.Heading.ToString("f5") + "\n" + if_log.text;
                }
                else
                {
                    //UDP communication
                    Debug.Log("UDP sending");

                    text_status.text = "UDP sending.";


                    byte[] bytes = BitConverter.GetBytes(pose.Latitude);
                    bytes = bytes.Concat(BitConverter.GetBytes(pose.Longitude)).ToArray();
                    bytes = bytes.Concat(BitConverter.GetBytes(pose.Altitude)).ToArray();
                    bytes = bytes.Concat(BitConverter.GetBytes(pose.Heading)).ToArray();
                    bytes = bytes.Concat(BitConverter.GetBytes(pose.HorizontalAccuracy)).ToArray();
                    bytes = bytes.Concat(BitConverter.GetBytes(pose.VerticalAccuracy)).ToArray();
                    bytes = bytes.Concat(BitConverter.GetBytes(pose.HeadingAccuracy)).ToArray();

                    udp_send.Send(bytes, 8*7);

                    if_log.text = "UDP sent: " + pose.Latitude.ToString("f5") + ", " + pose.Longitude.ToString("f5") + ", " + pose.Altitude.ToString("f5") + ", " + pose.Heading.ToString("f5") + ", " + pose.HorizontalAccuracy.ToString("f5") + 
                        ", " + pose.VerticalAccuracy.ToString("f5") + ", " + pose.HeadingAccuracy.ToString("f5") + "\n" + if_log.text;
                }

            }




        }


        private void LifecycleUpdate()
        {
            // Pressing 'back' button quits the app.
            if (Input.GetKeyUp(KeyCode.Escape))
            {
                Application.Quit();
            }

            if (_isReturning)
            {
                return;
            }

            // Only allow the screen to sleep when not tracking.
            var sleepTimeout = SleepTimeout.NeverSleep;
            if (ARSession.state != ARSessionState.SessionTracking)
            {
                sleepTimeout = SleepTimeout.SystemSetting;
            }

            Screen.sleepTimeout = sleepTimeout;

            // Quit the app if ARSession is in an error status.
            string returningReason = string.Empty;
            if (ARSession.state != ARSessionState.CheckingAvailability &&
                ARSession.state != ARSessionState.Ready &&
                ARSession.state != ARSessionState.SessionInitializing &&
                ARSession.state != ARSessionState.SessionTracking)
            {
                returningReason = string.Format(
                    "Geospatial sample encountered an ARSession error state {0}.\n" +
                    "Please start the app again.",
                    ARSession.state);
            }
#if UNITY_IOS
            else if (Input.location.status == LocationServiceStatus.Failed)
            {
                returningReason =
                    "Geospatial sample failed to start location service.\n" +
                    "Please start the app again and grant precise location permission.";
            }
#endif
            else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
            {
                returningReason = string.Format(
                    "Geospatial sample failed with missing AR Components.");
            }

            ReturnWithReason(returningReason);
        }

        private void ReturnWithReason(string reason)
        {
            if (string.IsNullOrEmpty(reason))
            {
                return;
            }

            InfoPanel.SetActive(false);

            Debug.LogError(reason);
            SnackBarText.text = reason;

            //from zenn kiji (disable 2 lines)
            //_isReturning = true;
            //Invoke(nameof(QuitApplication), _errorDisplaySeconds);
        }

        private void QuitApplication()
        {
            udp_send.Dispose();

            Application.Quit();
        }

        private void UpdateDebugInfo()
        {
            if (!Debug.isDebugBuild || EarthManager == null)
            {
                return;
            }
            
            var pose = EarthManager.EarthState == EarthState.Enabled &&
                EarthManager.EarthTrackingState == TrackingState.Tracking ?
                EarthManager.CameraGeospatialPose : new GeospatialPose();
            var supported = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
            DebugText.text =
                $"IsInARView: {_isInARView}\n" +
                $"IsReturning: {_isReturning}\n" +
                $"IsLocalizing: {_isLocalizing}\n" +
                $"SessionState: {ARSession.state}\n" +
                $"LocationServiceStatus: {Input.location.status}\n" +
                $"FeatureSupported: {supported}\n" +
                $"EarthState: {EarthManager.EarthState}\n" +
                $"EarthTrackingState: {EarthManager.EarthTrackingState}\n" +
                $"  LAT/LNG: {pose.Latitude:F6}, {pose.Longitude:F6}\n" +
                $"  HorizontalAcc: {pose.HorizontalAccuracy:F6}\n" +
                $"  ALT: {pose.Altitude:F2}\n" +
                $"  VerticalAcc: {pose.VerticalAccuracy:F2}\n" +
                $"  Heading: {pose.Heading:F2}\n" +
                $"  HeadingAcc: {pose.HeadingAccuracy:F2}";
        }


        private void SwitchToARView(bool enable)
        {
            _isInARView = enable;
            SessionOrigin.gameObject.SetActive(enable);
            Session.gameObject.SetActive(enable);
            ARCoreExtensions.gameObject.SetActive(enable);
        }


    }
}
