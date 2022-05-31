# Geospatial2ros

スマホアプリ (Unity) で Geospatial API を用い、 ROS または UDP 送信できます。  
その Unity プロジェクトのファイルです。

![gif](https://github.com/devemin/Geospatial2ros/blob/main/images/top.gif)

## Overview

スマホが自己位置推定の単体デバイス (ROS ノード) になります。

Geospatial API により、ストリートビューデータがあるエリアでは 0.5m 精度の緯度・経度・高度・向きの情報を取得できます。

それを ROS の sensor_msgs/NavSatFix と geometry_msgs/Pose で Publish、

または、UDP にて緯度・経度・高度・向き・それらの精度の値を指定 IP アドレスに送れます。

送る頻度はアプリ内で設定できます。

(エラー処理等は、適宜追加してください)

なお、ARCore 対応端末でないと実行できません。  
(https://developers.google.com/ar/devices)


## Requirement

私は下記の環境で試しました。

●Environment

Win 10 64bit  
Unity 2021.3.2f1  
Android 10 (Xperia 1) -> ARCore 対応端末

ROS (PC, Ubuntu 20.04, Noetic)


●Unity Packages

ARCore Extensions SDK (v1.31.0)  
https://github.com/google-ar/arcore-unity-extensions  
(Package Link: https://github.com/google-ar/arcore-unity-extensions.git)  

Unity-Technologies/ROS-TCP-Connector (0.7.0)  
https://github.com/Unity-Technologies/ROS-TCP-Connector  
(Package Link: https://github.com/Unity-Technologies/ROS-TCP-Connector.git?path=/com.unity.robotics.ros-tcp-connector)  


●ROS

ROS-TCP-Endpoint  
https://github.com/Unity-Technologies/ROS-TCP-Endpoint


## Usage

当リポジトリをダウンロードし、Unity で開いてください。  
(初回は各種パッケージが自動ダウンロードされるため、やや時間がかかります。)


●ROS で送る(pub)場合

■Unity 側(Androidスマホ)  
①API key を作成 (Google Cloud Platform (GCP), リンクを参照)  
https://zenn.dev/tkada/articles/04b44474149130

(ARCore API の料金は、2022/5 現在無料らしいですが、多量のアクセスがある場合は不明です。どなたかコメント等でお教え頂けると幸いです)

![png1](https://github.com/devemin/Geospatial2ros/blob/main/images/apikey.png)

②Unity -> Project Settings -> XR Plug-in Management -> ARCore Extensions -> API keyを入力  
![png2](https://github.com/devemin/Geospatial2ros/blob/main/images/apikey2.png)

③Unity -> Rototics -> ROS Settings で IPアドレス、ROS-TCP-Endpoint 用のポート番号を設定してください。  
(私はROSの入ったPC が 192.168.0.58 でした。 10000はデフォルトでOK)  
(スマホアプリ内で設定してもOKです)  
![png3](https://github.com/devemin/Geospatial2ros/blob/main/images/rossetting.png)

④Unity -> File -> Build Settings -> Build  
apk ファイルが出来ますので、Android 実機に転送して開き、インストールして下さい。  


■ROS 側  
ROS 側は ROS-TCP-Endpoint ノードを実行してください。 (Unity 内で ROS-TCP-Connector を利用しています。)


```
# 動作確認

roscore

(別ターミナルで)roslaunch ros_tcp_endpoint endpoint.launch

(別ターミナルで) rostopic echo /fix
(別ターミナルで) rostopic echo /quat
(sensor_msgs/NavSatFix と geometry_msgs/Pose が受信されるはず)

```


![png5](https://github.com/devemin/Geospatial2ros/blob/main/images/ss2.png)

![png4](https://github.com/devemin/Geospatial2ros/blob/main/images/ss1.png)



●UDP で送る場合

double (8 byte ) x 7 種類の値を送ります。  
適宜、他のIP にて受信してください。


## Features

Android で試しましたが、iOS でも設定すれば出来ると思いますが試していません。

下記リンク参考にお試しください。

## Reference

ARCore Geospatial APIをUnityで使ってみる (Takeshi Kada)  
https://zenn.dev/tkada/articles/04b44474149130

ROS-TCP-Connector (0.7.0) Tutorial  
https://github.com/Unity-Technologies/Unity-Robotics-Hub/blob/main/tutorials/ros_unity_integration/README.md


## Note





## Author

[twitter](https://twitter.com/devemin)


## Licence

Apache Licence 2.0

ARCore Extensions SDK v1.31.0 は 一部を除いて Apache Licence 2.0 です。  
ROS-TCP-Connector も Apache Licence 2.0 です。

当リポジトリでは、ARCore Extensions SDK より、下記ファイルを引用しています。

Assets/GeospatialConfig.asset (そのまま引用)  
Assets/SafeAreaScaler.cs (そのまま引用)  
Assets/GeospatialController_withROS.cs (<- GeospatialController.cs を改変)  
Assets/Geospatial2ros.unity (<- Geospatial.unity を改変)  

結果的に、私が自ら作ったファイルは下2個のファイルだけです。
