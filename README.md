# Geospatial2ros

スマホアプリ (Unity) で Geospatial API を用い、 ROS または UDP 送信できます。
その Unity プロジェクトのファイルです。

![gif](https://github.com/devemin/Geospatial2ros/blob/main/images/top.gif)

## Overview

スマホが自己位置推定の単体デバイス (ROS ノード) になります。

Geospatial API により、ストリートビューデータがあるエリアでの 0.5m 精度の位置・向きの情報を取得できます。

それを ROS の sensor_msgs/NavSatFix と geometry_msgs/Pose で Publish、

または、UDP にて緯度・経度・高度・向き・それらの精度の値を指定 IP アドレスに送れます。

(エラー処理等は、適宜追加してください)



## Requirement

私は下記の環境で試しました。

Environment

Win 10 64bit
Unity 2021.3.2f1
Android 10 (Xperia 1) -> ARCore 対応端末が必要
(https://developers.google.com/ar/devices)

ROS (PC, Ubuntu 20.04, Noetic)


Unity Packages

ARCore Extensions SDK (v1.31.0)
https://github.com/google-ar/arcore-unity-extensions
(Package Link: https://github.com/google-ar/arcore-unity-extensions.git)

Unity-Technologies/ROS-TCP-Connector (0.7.0)
https://github.com/Unity-Technologies/ROS-TCP-Connector
(Package Link: https://github.com/Unity-Technologies/ROS-TCP-Connector.git?path=/com.unity.robotics.ros-tcp-connector)


ROS-TCP-Endpoint
https://github.com/Unity-Technologies/ROS-TCP-Endpoint


## Usage

当リポジトリをダウンロードし、Unity で開いてください。

●ROS で送る(pub)場合

■Unity 側(Androidスマホ)
API key を作成 (Google Cloud Platform, 下部リンクを参照)
Unity -> Project Settings -> XR Plug-in Management -> ARCore Extensions -> API keyを入力

Unity -> Rototics -> ROS Settings で IPアドレス、ROS-TCP-Endpoint 用のポート番号を設定してください。（私はROSの入ったPC が 192.168.0.58 でした。 10000はデフォルトでOK）

Unity -> File -> Build Settings -> Build
apk ファイルが出来ますので、Android 実機に転送して開き、インストールして下さい。
ARCore 対応端末でないと実行できません。
(https://developers.google.com/ar/devices)


■ROS 側
ROS 側は ROS-TCP-Endpoint ノードを実行してください。 (Unity 内で ROS-TCP-Connector を利用しています。)

```
roslaunch ros_tcp_endpoint endpoint.launch
```

●UDP で送る場合

double (8 byte ) x 7 種類の値を送ります。
適宜、他のIP にて受信してください（笑）


## Features

iOS でも設定すれば出来ると思いますが試していません。

下記リンク参考に。

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
