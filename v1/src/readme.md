# j_artsey

![j_artsey](/v1/j-artsey-v1-front.png)

A 3x2+2 column-staggered keyboard with a top-row pinky and thumb key using the artseyio layout.

* Keyboard Maintainer: [Jacen Davis](https://github.com/Jacen-Davis)
* Hardware Supported: My own custom board designs, but any keyboard can be configured with an artseyio layout. My firmware has been configured for the Seeed XIAO RP2040, the smallest MCU board available (that I know of).
* Hardware Availability: [Seeed XIAO RP2040](https://www.amazon.com/Microcontroller-Dual-Core-MicroPython-CircuitPython-Interfaces/dp/B09NNVNW7M), Taking Gerber files to PCB maker (e.g. PCBWay) to make prototypes.

Make example for this keyboard (after setting up your build environment):

    make j_artsey:default

Flashing example for this keyboard:

    make j_artsey:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

For the XIAO RP2040, the easiest way to enter boot mode is to hold the BOOT button ("B"), then plug the board into the computer. There, the board will act as a USB mass storage and allow you to transfer the firmware files to it (the uf2 file).

## Followed guide:
https://github.com/artseyio/artsey-qmk

## Steps to follow:

1. Clone the repo. `git clone https://Jacen-Davis/j-artsey-kbd/`.
2. Decide if you want to build the keyboard using the Gerbers in `v1/pcb/` and copy the firmware file "`v1/firmware/j_artsey_default.uf2`" to the MCU in *bootloader* mode or use the code in `v1/src/` to customize and compile your own.

### Option 1: Copy and flash firmware to the J-Artsey board

**_NOTE:_** The default firmware is precompiled for left-hand use, and if you don't trust it (the firmware), don't download and flash it. Check and compile the code yourself. 

Follow the guidance in the **Bootloader** section to place the MCU in bootloader mode. Ensure you are using the MCU board specified for the build, as the precompiled firmware is specifically designed for that MCU. Skip to option two if you need customization.

### Option 2: Customize firmware to the J-Artsey board or to your own

Ensure you follow the instructions to QMK to set up your environment properly. You will need to make a new keyboard using the `qmk new-keyboard` command. Then copy over the files in that folder under `keyboards/<keyboard-name>/` from `v1/src/`. The <keyboard-name> is the name you give the keyboard. The default layout options do not matter when asked when invoking `qmk new-keyboard` for this build, as you will overwrite it with the source files.

Then, follow the make and flash examples. It should compile. If not, then you will have to troubleshoot. Customize to your heart's content. 
