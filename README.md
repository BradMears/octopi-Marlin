# octopi-Marlin
My Configuration.h and build scripts for building Marlin for my Monoprice Maker Select v2.
Does not include the Marlin distro. You'll need to get and unpack that first.

buildMarlin.sh - Build Marlin 1.19 and flash it to an ATMega
flash_mega.sh - writes the marlin .hex file to the mega

##Directions
----------
These files support two platforms:

    1) Raspberry Pi connected to an ATMega 2560 and RAMPS 1.4 controlling my Monoprice 
       Maker Select V2.
       
    2) My Linux desktop connected to a spare ATMega 2560 & RAMPS 1.4 board for 
       experimentation.


##Simple but Slow Approach
------------------------
Download Marlin to the RPi and build it there using buildMarlin.sh. This works but is slow.

##Slightly More Complicated but Significantly Faster Approach
-----------------------------------------------------------
Build Marlin on my Linux desktop using buildMarlin.sh. You can optionally attach the testbed 
ATMega/RAMPS and flash that device. After buildMarlin.sh is complete, use scp to copy the .hex 
file from the artifacts directory to the RPi. Then use flash_mega.sh to you know... flash the Mega.

##Stupid Approach
---------------
Build Marlin from within the Arduino IDE. Since the IDE doesn't save build artifacts, every time
you build is from scratch. Someday they will fix that shortcoming.

