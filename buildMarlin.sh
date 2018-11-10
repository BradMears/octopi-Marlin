#!/bin/sh
# Build Marlin and upload it to the Mega

export MARLIN_VER=1.1.9
export MARLIN=${HOME}/Marlin/Marlin-${MARLIN_VER}/Marlin
export BUILD_PATH=${HOME}/Marlin/artifacts
export ARDUINO=${HOME}/arduino/arduino-1.8.7/arduino


#rm -rf ${BUILD_PATH}

pushd ${MARLIN}
${ARDUINO} --pref build.path=${BUILD_PATH} --board arduino:avr:mega:cpu=atmega2560 --verbose --upload --port /dev/ttyACM0 --preserve-temp-files Marlin.ino
echo
popd

