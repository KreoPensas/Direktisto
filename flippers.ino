void paramDec() {
  if (screen == 0) {
    tft.setTextColor(BLACK);
    tft.setCursor(295, 113);
    tft.print(activeOutputPage);
    activeOutputPage --;
    if ( activeOutputPage < 1) {
      activeOutputPage = 1;
    }
    rainbow(activeOutputPage);
    tft.setCursor(295, 113);
    tft.print(activeOutputPage);
    clearBars();
  }
  if (screen != 0) {
    int chip = screen - 1;
    if (outputFlag == true) {

      outputPort[chip][matrixChannel]--;
      if (outputPort[chip][matrixChannel] < 0 || outputPort[chip][matrixChannel] > 254) {
        outputPort[chip][matrixChannel] = 0;
      }
      if (screen > 0 && screen < 10 && bigScreen==false) {
        tft.fillRect(249, 113, 71, 14, BLACK);
        tft.fillRect(180, 40, 140, 15, BLACK);
        tft.setCursor(250, 113);
        tft.setTextColor(GRAY);
        tft.print("Port  ");
        rainbow(outputPort[chip][matrixChannel] + 1);
        if ((outputPort[chip][matrixChannel] + 1) < 17 ){
        tft.print(outputPort[chip][matrixChannel] + 1);
        }
        portLetterPrint(outputPort[chip][matrixChannel] + 1);
      }
      if (screen > 9 && screen < 27) {
        tft.fillRect(150, 135, 75, 15, BLACK);
        tft.setCursor(150, 135);
        tft.setTextColor(GRAY);
        tft.print("Port  ");
        rainbow(outputPort[chip][matrixChannel] + 1);
         if ((outputPort[chip][matrixChannel] + 1) < 17 ){
        tft.print(outputPort[chip][matrixChannel] + 1);
         }
          portLetterPrint(outputPort[chip][matrixChannel] + 1);
      }

    }
    if (matrixFlag == true) {
      int chip = screen - 1;
      outputChannel[chip][matrixChannel]--;
      if (outputChannel[chip][matrixChannel] < 1) {
        outputChannel[chip][matrixChannel] = 1;
      }
      matrixRedraw();
    }
  }
}


void paramInc() {
  if (screen == 0) {
    tft.setTextColor(BLACK);
    tft.setCursor(295, 113);
    tft.print(activeOutputPage);
    activeOutputPage ++;
    if ( activeOutputPage > 16) {
      activeOutputPage = 16;
    }
    rainbow(activeOutputPage);
    tft.setCursor(295, 113);
    tft.print(activeOutputPage);
    clearBars();
  }
  if (screen != 0) {
    int chip = screen - 1;
    if (outputFlag == true) {

      outputPort[chip][matrixChannel]++;
      if (outputPort[chip][matrixChannel] > 25) {
        outputPort[chip][matrixChannel] = 25;
      }
      if (screen > 0 && screen < 10 && bigScreen == false) {
        tft.fillRect(249, 113, 71, 14, BLACK);
        tft.fillRect(180, 40, 140, 15, BLACK);
        tft.setCursor(250, 113);
        tft.setTextColor(GRAY);
        tft.print("Port  ");
        rainbow(outputPort[chip][matrixChannel] + 1);
         if ((outputPort[chip][matrixChannel] + 1) < 17 ){
        tft.print(outputPort[chip][matrixChannel] + 1);
         }
          portLetterPrint(outputPort[chip][matrixChannel] + 1);
      }
      if (screen > 9  && screen < 27) {
        tft.fillRect(150, 135, 75, 15, BLACK);
        tft.setCursor(150, 135);
        tft.setTextColor(GRAY);
        tft.print("Port  ");
        rainbow(outputPort[chip][matrixChannel] + 1);
         if ((outputPort[chip][matrixChannel] + 1) < 17 ){
        tft.print(outputPort[chip][matrixChannel] + 1);
         }
          portLetterPrint(outputPort[chip][matrixChannel] + 1);
      }
    }
    if (matrixFlag == true) {
      int chip = screen - 1;
      outputChannel[chip][matrixChannel]++;
      if (outputChannel[chip][matrixChannel] > 16 ) {
        outputChannel[chip][matrixChannel] = 16;
      }
      matrixRedraw();
    }
  }
}

void outputChooser(byte deviceNum) {
  deviceNum--;

  matrixFlag = false;
  outputFlag = true;
  if (screen > 0 && screen < 10 ) {
     tft.setTextColor(BLACK);
    tft.fillRect(200, 63, 39, 39, GRAY);
    tft.setCursor(206, 76);
    tft.print("Out");
    tft.setTextColor(WHITE);
    tft.fillRect(180, 185, 140, 15, BLACK);
    tft.fillRect(180, 40, 140, 15, BLACK);
    tft.setCursor(250, 113);
    tft.setTextColor(GRAY);
    tft.print("Port  ");
    rainbow(outputPort[screen - 1][matrixChannel] + 1);
     if ((outputPort[screen-1][matrixChannel] + 1) < 17 ){
    tft.print(outputPort[(screen - 1)][matrixChannel] + 1);
     }
      portLetterPrint(outputPort[screen-1][matrixChannel] + 1);
  }
  if (screen > 9  && screen < 27) {
    tft.fillRect(150, 135, 75, 15, BLACK);
    tft.setCursor(150, 135);
    tft.setTextColor(GRAY);
    tft.print("Port  ");
    rainbow(outputPort[screen - 1][matrixChannel] + 1);
     if ((outputPort[screen-1][matrixChannel] + 1) < 17 ){
    tft.print(outputPort[(screen - 1)][matrixChannel] + 1);
     }
    portLetterPrint(outputPort[screen-1][matrixChannel] + 1);
    tft.setTextColor(BLACK);
    tft.fillRect(200, 80, 39, 39, GRAY);
    tft.setCursor(206, 94);
    tft.print("Out");
    tft.setTextColor(WHITE);
    matrixFlag = false;
    outputFlag = true;
  }

}

void midiMatrixChooser(byte deviceNum, byte inputChannel) {
  deviceNum--;
  matrixChannel = inputChannel;
  matrixFlag = true;
  outputFlag = false;
  if (screen > 0 && screen < 10 && bigScreen ==false) {
    rainbow(inputChannel + 1);
    tft.fillRect(180, 40, 140, 15, BLACK);
    tft.setCursor(180, 40);
    tft.print("Input Channel ");
    tft.print(inputChannel + 1);
    rainbow(outputChannel[deviceNum][inputChannel]);
    tft.fillRect(180, 185, 140, 15, BLACK);
    tft.setCursor(180, 185);
    tft.print("Output Channel ");
    tft.print(outputChannel[deviceNum][inputChannel]);
    tft.fillRect(249, 113, 71, 14, BLACK);
  }
  if ( screen > 9 && screen < 27 ) {
    rainbow(inputChannel + 1);
    tft.fillRect(0, 120, 140, 15, BLACK);
    tft.setCursor(0, 120);
    tft.print("Input Channel ");
    tft.print(inputChannel + 1);
    rainbow(outputChannel[deviceNum][inputChannel]);
    tft.fillRect(0, 135, 140, 15, BLACK);
    tft.setCursor(0, 135);
    tft.print("Output Channel ");
    tft.print(outputChannel[deviceNum][inputChannel]);
    tft.fillRect(150, 135, 75, 15, BLACK);
    tft.setCursor(150, 135);
    tft.setTextColor(GRAY);
    tft.print("Port  ");
    rainbow(outputPort[(screen - 1)][matrixChannel] + 1);
     if ((outputPort[screen-1][matrixChannel] + 1) < 17 ){
    tft.print(outputPort[(screen - 1)][matrixChannel] + 1);
     }
    portLetterPrint(outputPort[screen-1][matrixChannel] + 1);
  }
}

void OnPress(int key) {
  if (moreScreensFlag == true) {
    tft.print(char(key));
  }
}

void sendToComputer(byte type, byte data1, byte data2, byte channel, const uint8_t *sysexarray, byte cable)
{
  if (type != 0xF0) {
    usbMIDI.send(type, data1, data2, channel, cable);
  } else {
    unsigned int SysExLength = data1 + data2 * 256;
    usbMIDI.sendSysEx(SysExLength, sysexarray, true, cable);
  }
}



void SysExParser(const byte *data, uint16_t length, bool last) {

}

void shuddup() {
  for (int i = 0 ; i < 10 ; i ++ ){
   if (deviceLoaded[i]==true){
     for ( int j = 0;j < 16 ; j++) {
     midilist[i]->sendControlChange(123,0, j);
     }
   }
  }
  for (int i = 0 ; i < 16; i ++ ){
    for ( int j = 0;j < 16 ; j++) {
   usbMIDI.sendControlChange(123,0,j,i);
    }
  }
   
    for ( int j = 0;j < 16 ; j++) {
   MIDI1.sendControlChange(123,0,j);
    }
     for ( int j = 0;j < 16 ; j++) {
   MIDI2.sendControlChange(123,0,j);
    }
     for ( int j = 0;j < 16 ; j++) {
   MIDI3.sendControlChange(123,0,j);
    }
     for ( int j = 0;j < 16 ; j++) {
   MIDI4.sendControlChange(123,0,j);
    }
  
}

void portLetterPrint(byte num){
  switch(num){
    case 17:
    tft.print("A");
    break;
    case 18:
    tft.print("B");
    break;
    case 19:
    tft.print("C");
    break;
    case 20:
    tft.print("D");
    break;
    case 21:
    tft.print("E");
    break;
    case 22:
    tft.print("F");
    break;
    case 23:
    tft.print("G");
    break;
    case 24:
    tft.print("H");
    break;
    case 25:
    tft.print("I");
    break;
    case 26:
    tft.print("J");
    break;
  }
}
