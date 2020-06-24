#!/bin/bash
UNITY_PATH=/Applications/Unity2019.3.7/Unity.app/Contents/MacOS/Unity
PROJECT_PATH=/Users/xlcw/Work/BuildAnyPlatform
killall Unity

$UNITY_PATH  -quit -batchmode -projectPath $PROJECT_PATH -executeMethod ProjectBuild.AutomationBuild sign_Platform-ipa_sign -logFile $PROJECT_PATH/buildLog.log
