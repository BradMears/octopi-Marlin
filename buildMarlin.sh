#!/bin/bash
# Build Marlin and upload it to the Mega

BASE_DIR=/share/Marlin/Marlin-2.1.1
MARLIN=${BASE_DIR}/Marlin-2.2.1/Marlin
BUILD_PATH=${BASE_DIR}/artifacts

ARDUINO=arduino
PORT="--port /dev/ttyACM0"

# Pick one or the other
OPERATION="--verify"
#OPERATION="--upload ${PORT}"

#rm -rf ${BUILD_PATH}

pushd ${MARLIN}

${ARDUINO} --pref build.path=${BUILD_PATH} --board arduino:avr:mega:cpu=atmega2560 --verbose --preserve-temp-files ${OPERATION} Marlin.ino
echo
popd

