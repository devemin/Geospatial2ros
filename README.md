# Geospatial2ros

スマホアプリ (Unity) で Geospatial API を用い、 ROS または UDP 送信できます。

![gif](https://github.com/devemin/Geospatial2ros/blob/main/images/top.gif)

## Overview

スマホが自己位置推定の単体デバイスになります。

Geospatial API により、ストリートビューデータがあるエリアでの 0.5m 精度の位置・向きの情報を取得できます。

それを ROS の sensor_msgs/NavSatFix と geometry_msgs/Pose で Publish、

または、UDP にて緯度・経度・高度・向き・それらの精度の値を指定 IP アドレスに送れます。

## Requirement

私は下記の環境で試しました。

Environment

Win 10 64bit
Unity 2021.3.2f1
Android 10 (Xperia 1)
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

API を入力

## Features

iOS でも設定すれば出来ると思いますが試していません。

下記リンク参考に。

## Reference

ARCore Geospatial APIをUnityで使ってみる (Takeshi Kada)
https://zenn.dev/tkada/articles/04b44474149130

Tutorial
https://github.com/Unity-Technologies/Unity-Robotics-Hub/blob/main/tutorials/ros_unity_integration/README.md


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
