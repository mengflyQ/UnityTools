#!/bin/bash
BUILD_ID=dontKillMe /Applications/Unity/2019.3.6f1/Unity.app/Contents/MacOS/Unity
UNITY_PATH=/Applications/Unity/2019.3.6f1/Unity.app/Contents/MacOS/Unity
PROJECT_PATH=/Users/xlcw/Work/tw/PerformanceOptimization/BuildAnyPlatform
killall Unity
${UNITY_PATH} -quit -projectPath ${PROJECT_PATH} -executeMethod ProjectBuild.AutomationBuild sign_Platform-apk_sign -logFile ${PROJECT_PATH}/buildLog.log
echo "打包完毕"
sleep 30s 