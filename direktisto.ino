/* KreoPensas Direktisto
  //USB MIDI 10x16 patchbay/router with data injection and utilities
  //For Teensy 3.6 ONLY  https://www.pjrc.com/store/teensy36.html
  //Select MIDIx16 from USB Type in Tools menu
  //Needs this cable or equivalent:  https://www.pjrc.com/store/cable_usb_host_t36.html
  //Uses the Color Touchscreen from https://www.pjrc.com/store/display_ili9341_touch.html
  //Adapted from the Interface_16x16 example from Teensyduino v1.44 PJRC.com
*/

#include <USBHost_t36.h> // access to USB MIDI devices (plugged into 2nd USB port)
#include <ILI9341_t3.h>
#include <font_Arial.h> // from ILI9341_t3
#include <XPT2046_Touchscreen.h>
#include <SD.h>
#include <SPI.h>
//screen defs
#define TIRQ_PIN  2
#define CS_PIN  8
#define TFT_DC  9
#define TFT_CS 10
//midi device defs
#define AkaiLPK25 0x0076
#define AKM320 0x3C01
#define Casio 0x6803
#define KORG 0x0100
#define Atmel 0x2048
#define Deepmind 0x0041
#define MX49 0x1711
#define AlesisDM7X 0x007D
//color defs 565
#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define ORANGE  0xFC00
#define REDORANGE  0xF9E0
#define YELLOWGREEN  0xDFE0
#define GRASS  0x074E
#define YELLOWORANGE 0xFE20
#define TEAL 0x07F9
#define PERIWINKLE  0x921F
#define PURPLE  0x8010
#define SKY  0x05FF
#define ROYAL  0x681F
#define LAVENDER 0xD97F
#define HOTPINK 0xF810
#define GRAY 0x8C51
#define DIMMED 0x2102
#define DIMRED 0x6000
#define FLESH 0xD597
#define SHADEFLESH 0xA452

XPT2046_Touchscreen ts(CS_PIN, TIRQ_PIN);
ILI9341_t3 tft = ILI9341_t3(TFT_CS, TFT_DC);

// Create the ports for USB devices plugged into Teensy's 2nd USB port (via hubs)
USBHost myusb;
USBHub hub1(myusb);
USBHub hub2(myusb);
USBHub hub3(myusb);
USBHub hub4(myusb);
USBHub hub5(myusb);
RawHIDController rawhid1(myusb);
KeyboardController keyboard1(myusb);
MouseController mouse1(myusb);
MIDIDevice midi01(myusb);
MIDIDevice midi02(myusb);
MIDIDevice midi03(myusb);
MIDIDevice midi04(myusb);
MIDIDevice midi05(myusb);
MIDIDevice midi06(myusb);
MIDIDevice midi07(myusb);
MIDIDevice midi08(myusb);
MIDIDevice midi09(myusb);
MIDIDevice midi10(myusb);
MIDIDevice * midilist[10] = {
  &midi01, &midi02, &midi03, &midi04, &midi05, &midi06, &midi07, &midi08, &midi09, &midi10
};

int typeX[16]={14,55,95,135,175,215,255,295,15,50,90,130,170,210,250,290};
const int chipSelect = BUILTIN_SDCARD;
bool seqEnable[10][16] = { {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}
};
bool harmEnable[10][16] = { {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}
};
byte outputPort[26][16] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
  {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
  {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
  {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
  {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
  {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
  {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
  {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
  {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
  {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
  {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
  {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
  {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
  {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
  {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
  {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
  {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
  {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}
};

byte outputChannel[27][16] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}
};  // labels only in [26][x]

boolean deviceLoaded[10] = {false, false, false, false, false, false, false, false, false, false};


int touchX = 0;
int touchY = 0;
int activeOutputPage = 1;
int screen = 0;
int harmDevice = 1;
int seqDevice = 1;
int harmChannel = 1;
int seqChannel = 1;
int recChannel = 1;
int recDevice = 0;
int harmSemitones = 7;
byte poo;
byte kpseqPort= 0;
byte pedlPort = 0;
byte regiloPort = 0;
boolean panicFlag = false;
boolean pedlFlag = false;
boolean kpseqFlag = false;
boolean regiloFlag = false;
boolean recordFlag = false;
boolean outputFlag = false;
boolean matrixFlag = false;
boolean moreScreensFlag = false;
boolean writeFlag = false;
boolean harmonyFlag = false;
boolean sequencerFlag = false;
boolean printLabels = false;
boolean bigScreen = false;
int matrixChannel = 0;
int bigScreenChan = 0;
elapsedMillis touchBounce;
elapsedMillis active01;
elapsedMillis active02;
elapsedMillis active03;
elapsedMillis active04;
elapsedMillis active05;
elapsedMillis active06;
elapsedMillis active07;
elapsedMillis active08;
elapsedMillis active09;
elapsedMillis active10;
elapsedMillis writing;
elapsedMillis panicSwitch;

void setup() {

 // usbMIDI.setHandleControlChange(ccSniffer);
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK);
  ts.begin();
  ts.setRotation(3);
  tft.setFont(Arial_12);
  boilerplate();
  // Wait 1.5 seconds before turning on USB Host.  If connected USB devices
  // use too much power, Teensy at least completes USB enumeration, which
  // makes isolating the power issue easier.
  delay(1500);
  myusb.begin();
  keyboard1.attachPress(OnPress);
  if (!SD.begin(chipSelect)) {
    tft.setTextColor(ILI9341_RED);
    tft.setCursor(160, 186);
    tft.print("SD Card Failure");
    tft.setTextColor(WHITE);
  }
  innerBars();
}

void loop() {
  boolean istouched = ts.touched();
  if (istouched) {
    if (touchBounce > 125) {
      TS_Point p = ts.getPoint();
      touchX = map(p.x, 0, 4095, 0, 350);//adjust here to calibrate tocuhX
      touchY = map(p.y, 0, 4095, 0, 250);//adjust here to calibrate touchY
      touchBounce = 0;
      buttonCheck();
    }
  }
  inputCheck();
  // Next read messages arriving from the (up to) 10 USB devices plugged into the USB Host port
  for (int port = 0; port < 10; port++) {
    if (midilist[port]->read()) {
      uint8_t type =       midilist[port]->getType();
      uint8_t data1 =      midilist[port]->getData1();
      uint8_t data2 =      midilist[port]->getData2();
      uint8_t channel =    midilist[port]->getChannel();
      const uint8_t *sys = midilist[port]->getSysExArray();
      uint8_t newChannel = outputChannel[port][channel - 1];
     
      
      sendToComputer(type, data1, data2, newChannel, sys, outputPort[port][channel-1]);
      catcher(type, data1, data2, newChannel, sys, outputPort[port][channel-1]);
      indicateActivity(port);
    }
  }
  // Finally, read any messages the PC sends to Teensy, and forward them
  // to either Serial MIDI or to USB devices on the USB host port.
  if (usbMIDI.read()) {
    // get the USB MIDI message, defined by these 5 numbers (except SysEX)
    byte type = usbMIDI.getType();
    byte channel = usbMIDI.getChannel();
    byte data1 = usbMIDI.getData1();
    byte data2 = usbMIDI.getData2();
    byte cable = usbMIDI.getCable();    
    if (type != usbMIDI.SystemExclusive) {
      if (outputPort[cable + 10][channel] > 15 ){
        midilist[cable]->send(type, data1, data2, channel);      
      }
      else{
      usbMIDI.send(type, data1, data2, channel,outputPort[cable + 10][channel]);
      }
    } else {
      // SysEx messages are special.  The message length is given in data1 & data2
      unsigned int SysExLength = data1 + data2 * 256;
       if (outputPort[cable + 10][channel] > 15 ){
        midilist[cable]->sendSysEx(SysExLength, usbMIDI.getSysExArray(), true);
       }
       else{
       usbMIDI.sendSysEx(SysExLength, usbMIDI.getSysExArray(), true, outputPort[cable + 10][channel]);     
       SysExParser(usbMIDI.getSysExArray(),SysExLength,true);
       }
    }
  }
  if (writing > 300 && writeFlag == true) {
    tft.setCursor(230, 182);
    tft.setTextColor(BLACK);
    tft.print("Writing");
    writeFlag = false;
  }
  if (moreScreensFlag == false) {
    indicatorClear();
  }
  if (panicSwitch > 400 && panicFlag==true){
    if (screen == 0 ) {
    panic(0,200,false);
    }
    panicFlag = false;
  }
}
