# intel-realsense

This repo contains simple ROS Node that prints the accelerometer data of Intel realsense T265 camera. If I implement any ROS nodes related to the  Intel Realsense camera, I will upload it here.


## Intel Realsense Cameras with ROS on Jetson Nano


### Installation

https://github.com/IntelRealSense/realsense-ros contains detailed instruction on how to install necessary packages. I will briefly summarize it here.

The instruction that I wrote here is for ROS Melodic, but it can be installed similarly in other ROS distributions.
realsense2_camera is available as a debian package of ROS distribution. It can be installed by typing:

```
export ROS_VER=melodic
```

```
sudo apt-get install ros-$ROS_VER-realsense2-camera
```

This will install both realsense2_camera and its dependents, including librealsense2 library.
When I did these steps in Jetson Nano, it did not detect the Intel t265 tracking camera. Installing realsense SDK separately using https://github.com/jetsonhacks/installRealSenseSDK solved the problem for me.


### Usage Instrucions

You can start the Node by typing
```
roslaunch realsense2_camera rs_camera.launch
```


To start the camera node and make it publish the point cloud using the pointcloud option
```
roslaunch realsense2_camera rs_camera.launch filters:=pointcloud
```

To visualize point cloud in RViz
```
roslaunch realsense2_camera demo_pointcloud.launch
```

To launch Intel T265 node
```
roslaunch realsense2_camera rs_t265.launch
```

To visualize it in RViz
```
roslaunch realsense2_camera demo_t265.launch
```

### Visualize Realsense Cameras Without ROS
```
realsense-viewer
```
