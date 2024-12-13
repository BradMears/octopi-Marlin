#!/bin/bash

/opt/arduino-1.8.19/hardware/tools/avr/bin/avrdude -C/opt/arduino-1.8.19/hardware/tools/avr/etc/avrdude.conf -v -patmega2560 -cwiring -P/dev/ttyACM0 -b115200 -D -Uflash:w:/home/pi/Marlin/artifacts/Marlin.ino.hex:i 
