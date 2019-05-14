# android bootloader bruteforcer

a simple tool to bruteforce the oem/bootloader unlocking code for android devices

## getting started

these instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### prerequisites

heres a list of needed pieces of soft- and hardware. links for software are below.
```
an android device with usb debugging & oem unlocking enabled
a cable matching your android device (to connect it to your machine)
your devices drivers (usually ship with adb or your tool, for example huawei hisuite etc.)
adb
this tool (compile yourself or download a precompiled version)
```

### installation

no installation really required.

### usage

install your devices drivers + adb.

check if your device is recognized by adb (do 'adb devices' in your 'platform-tools' folder in a shell).

run this tool and enter the path to your adb kit. example: 'D:\folder\platform-tools\'.

wait and hope.

also might not work with most devices since some devices have a security feature that waits 30 seconds + reboots after 5 tries.

## built with

* [adb](http://adbdriver.com/) - android debugging bridge

## contributing

if anyone has an algorithm to calculate the unlock codes, please by any means be sure to contact me. contact info is below.

## versioning

we dont have that since im lazy and dont do updates.

## authors

* **Robert 'BaumFX'** - *initial work* - [website](https://baumfx.xyz) - [GitHub](https://github.com/BaumFX)

## license

literally 10 lines but dont say you made it, okay?

## acknowledgements

* xda developers forum for getting me into rooting etc.
