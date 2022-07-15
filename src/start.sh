#!/usr/bin/env bash

# setup env
echo "Sourcing"
source /opt/ros/eloquent/setup.bash
source $HOME/dev_ws/install/setup.sh 

echo "Launching"
ros2 launch rosbridge_server rosbridge_websocket_launch.xml &
PID1=$!
ros2 launch $HOME/dev_ws/src/launch/activate_base.py &
PID2=$!
echo "Running"

# catch SIGINT
# Function that will get executed when the user presses Ctrl+C
function handler(){
  echo "Exiting"
  kill -2 $PID1 $PID2
}

# Assign the handler function to the SIGINT signal
trap handler SIGINT

