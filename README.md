# Direktisto
USB host and USB MIDI to DIN patchbay for Teensy3.6<br>

You will need a Teensy 3.6 (may work with a 4.1 but hasn't been tested - some serial ports are on different pins than the 3.6 )
You will need the USB host cable or equivalent  https://www.pjrc.com/store/cable_usb_host_t36.html
You will need a 320x240 ili9341 touchscreen  https://www.pjrc.com/store/display_ili9341_touch.html
You will need 4 appropriate optoisolators - I recommend the H11L1.
Here is an acceptable guide to building a 3.3v MIDI circuit https://diyelectromusic.wordpress.com/2021/02/15/midi-in-for-3-3v-microcontrollers/
You will need 8 x 5 pin DIN jacks.
You will need 4 x 1n4148 signal diodes.
You will need resistors as applicable to your optoisolator choice. Generally this is 220 ohm for optoisolator input, 330 ohm for optoisolator output pullup and 47 ohm for both the MIDI out lines directly from the Teensy, and for the 3.3v supply on the MIDI out jack.

The hard coded device recognition in the "inputCheck" tab/file is based on my own devices. To add your own, you will need the hexadecimal device ID string that can be obtained by any number of methods like LSUSB in Linux or diggint around in Device manager in Windows, or in MacOS it is found in About This Mac/Hardware/USB.
You would add a #define to the beginning of direktisto.ino using a unique device identifier of your choice and the Device ID string, then edit the functions "deviceCheck","memoryLoad" and "memWrite" (in its own tab/file) by copying an existing entry and editing it to match your speciific device.  You may of course optionally delete entries for devices you do not own. 


