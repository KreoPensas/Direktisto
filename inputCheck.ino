void inputCheck() {
  if (moreScreensFlag == false) {
    if (midi01) {
      tft.setCursor(15, 76);
      tft.setTextColor(RED);
      tft.print("A");
      outputCheck(0);
    }
    if (!midi01) {
      tft.setCursor(15, 76);
      tft.setTextColor(BLACK);
      tft.print("A");
      clearDeviceSquare(0);
      deviceLoaded[0] = false;
    }
    if (midi02) {
      tft.setCursor(55, 76);
      tft.setTextColor(ORANGE);
      tft.print("B");
      outputCheck(1);
    }
    if (!midi02) {
      tft.setCursor(55, 76);
      tft.setTextColor(BLACK);
      tft.print("B");
      clearDeviceSquare(1);
      deviceLoaded[1] = false;
    }
    if (midi03) {
      tft.setCursor(95, 76);
      tft.setTextColor(YELLOW);
      tft.print("C");
      outputCheck(2);
    }
    if (!midi03) {
      tft.setCursor(95, 76);
      tft.setTextColor(BLACK);
      tft.print("C");
      clearDeviceSquare(2);
      deviceLoaded[2] = false;
    }
    if (midi04) {
      tft.setCursor(135, 76);
      tft.setTextColor(GREEN);
      tft.print("D");
      outputCheck(3);
    }
    if (!midi04) {
      tft.setCursor(135, 76);
      tft.setTextColor(BLACK);
      tft.print("D");
      clearDeviceSquare(3);
      deviceLoaded[3] = false;
    }
    if (midi05) {
      tft.setCursor(175, 76);
      tft.setTextColor(GRASS);
      tft.print("E");
      outputCheck(4);
    }
    if (!midi05) {
      tft.setCursor(175, 76);
      tft.setTextColor(BLACK);
      tft.print("E");
      clearDeviceSquare(4);
      deviceLoaded[4] = false;
    }
    if (midi06) {
      tft.setCursor(15, 151);
      tft.setTextColor(SKY);
      tft.print("F");
      outputCheck(5);
    }
    if (!midi06) {
      tft.setCursor(15, 151);
      tft.setTextColor(BLACK);
      tft.print("F");
      clearDeviceSquare(5);
      deviceLoaded[5] = false;
    }
    if (midi07) {
      tft.setCursor(55, 151);
      tft.setTextColor(BLUE);
      tft.print("G");
      outputCheck(6);
    }
    if (!midi07) {
      tft.setCursor(55, 151);
      tft.setTextColor(BLACK);
      tft.print("G");
      clearDeviceSquare(6);
      deviceLoaded[6] = false;
    }
    if (midi08) {
      tft.setCursor(95, 151);
      tft.setTextColor(PERIWINKLE);
      tft.print("H");
      outputCheck(7);
    }
    if (!midi08) {
      tft.setCursor(95, 151);
      tft.setTextColor(BLACK);
      tft.print("H");
      clearDeviceSquare(7);
      deviceLoaded[7] = false;
    }
    if (midi09) {
      tft.setCursor(135, 151);
      tft.setTextColor(LAVENDER);
      tft.print("I");
      outputCheck(8);
    }
    if (!midi09) {
      tft.setCursor(135, 151);
      tft.setTextColor(BLACK);
      tft.print("I");
      clearDeviceSquare(8);
      deviceLoaded[8] = false;
    }
    if (midi10) {
      tft.setCursor(175, 151);
      tft.setTextColor(HOTPINK);
      tft.print("J");
      outputCheck(9);
    }
    if (!midi10) {
      tft.setCursor(175, 151);
      tft.setTextColor(BLACK);
      tft.print("J");
      clearDeviceSquare(9);
      deviceLoaded[9] = false;
    }
  }
}

void outputCheck(byte deviceNum) {
  for ( int i = 0; i < 16 ; i ++ ) {
  if (outputPort[deviceNum][i] == activeOutputPage - 1) {
    fillDeviceSquare(deviceNum);
  }
 }
 memoryLoad(deviceNum);
}

void deviceCheck(byte deviceNum) {
  if (midilist[deviceNum]-> idProduct() == AkaiLPK25) {
    tft.print("Akai LPK25");
  }
  if (midilist[deviceNum]-> idProduct() == AKM320) {
    tft.print("AKM 320");
  }
  if (midilist[deviceNum]-> idProduct() == KORG) {
    tft.print("Korg MicroKontrol");
  }
  if (midilist[deviceNum]-> idProduct() == Casio) {
    tft.print("Casio");
  }
  if (midilist[deviceNum]-> idProduct() == Atmel) {
    tft.print("Atmel USB Midi");
  }
  if (midilist[deviceNum]-> idProduct() == Deepmind) {
    tft.print("Deepmind 12");
  }
  if (midilist[deviceNum]-> idProduct() == MX49) {
    tft.print("Yamaha MX49");
  }
   if (midilist[deviceNum]-> idProduct() == AlesisDM7X) {
    tft.print("Alesis Nitro");
  }
  if (midilist[deviceNum]-> idProduct() == multiefiko) {
    tft.print("Multi-Efiko");
  }
  if (midilist[deviceNum]-> idProduct() == uDexed) {
    tft.print("Micro-Dexed");
  }
   if (midilist[deviceNum]-> idProduct() == airharp2) {
    tft.print("Air Harp 2");
  }
}

void memoryLoad(byte deviceNum) {
  if (deviceLoaded[deviceNum] == false) {
    File mem;
    if (midilist[deviceNum]-> idProduct() == AkaiLPK25) {
      mem = SD.open("akai.drk");
    }
    if (midilist[deviceNum]-> idProduct() == AKM320) {
      mem = SD.open("akm320.drk");
    }
    if (midilist[deviceNum]-> idProduct() == KORG) {
      mem = SD.open("korg.drk");
    }
    if (midilist[deviceNum]-> idProduct() == Casio) {
      mem = SD.open("casio.drk");
    }
    if (midilist[deviceNum]-> idProduct() == Atmel) {
      mem = SD.open("atmel.drk");
    }
    if (midilist[deviceNum]-> idProduct() == Deepmind) {
      mem = SD.open("deepmind.drk");
    }
    if (midilist[deviceNum]-> idProduct() == MX49) {
      mem = SD.open("mx49.drk");
    }
    if (midilist[deviceNum]-> idProduct() == AlesisDM7X) {
      mem = SD.open("adm7x.drk");
    }
    if (midilist[deviceNum]-> idProduct() == airharp2 ) {
      mem = SD.open("airharp.drk");
    }
     if (midilist[deviceNum]-> idProduct() == multiefiko) {
      mem = SD.open("mfx.drk");
  }
    while (mem.available()) {
      deviceLoaded[deviceNum] = true;
      for (int r = 0; r < 16; r++) {
        outputChannel[deviceNum][r] = mem.read();
      }
      for (int r = 0; r < 16; r++) {
        outputPort[deviceNum][r] = mem.read();
      }
      mem.close();
    }
  }
}
