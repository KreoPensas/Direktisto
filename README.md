# Direktisto
USB MIDI manager/hub with data injection
10 USB midi devices X 16 USB midi ports in the computer

The name is "Manager" in Esperanto. 

This project uses a Teensy 3.6, Color Touchscreen, and USB Host Cable, all available at PJRC.com.
https://www.pjrc.com/store/teensy36.html<br>
https://www.pjrc.com/store/display_ili9341_touch.html<br>
https://www.pjrc.com/store/cable_usb_host_t36.html<br>

You'll need an SD card, and a USB hub for your midi devices.

Hardware is attached to the Teensy as described at PJRC.com. 

This is very much a personal project and a work in progress.
It was inspired by the Zyklus MPS
https://www.youtube.com/watch?v=p_iZEtGzPGU<br>
The descendant of the Zyklus was named "Direct" and was owned by Vangelis. 

As of this writing (5-22-19) the only working functions are deep midi routing and a crude harmony function.
The only devices specifically recognized are the ones I own, automatic recognition of new devices yet to be implemented. 
Any channel of any input port may be routed to any channel of any output port.  Routings are saved to SD card in binary format. 

This project uses tabbed files.

ET Moody III
5-22-19







