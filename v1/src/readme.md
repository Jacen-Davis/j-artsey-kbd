# j_artsey

![j_artsey](/v1/j-artsey-v1-front.png)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Jacen Davis](https://github.com/Jacen-Davis)
* Hardware Supported: My own custom board designs, but any keyboard can be configured with an artseyio layout. My firmware has been configured for the Seeed XIAO RP2040, the smallest MCU board available (that I know of).
* Hardware Availability: [Seeed XIAO RP2040](https://www.amazon.com/Microcontroller-Dual-Core-MicroPython-CircuitPython-Interfaces/dp/B09NNVNW7M), Taking gerber files to PCB maker (e.g. PCBWay) to make prototypes.

Make example for this keyboard (after setting up your build environment):

    make j_artsey:default

Flashing example for this keyboard:

    make j_artsey:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

For the XIAO RP2040, the easiest way to enter boot mode is to hold the BOOT button ("B"), then plug the board into the computer. There, the board will act as a USB mass storage and allow you to transfer the firmware files to it (the uf2 file).

## Followed guide:
https://github.com/artseyio/artsey-qmk