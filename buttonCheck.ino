void buttonCheck() {
  if (touchX < 40 && touchY < 40 ) {
    if (screen > 0 && screen  < 27 && bigScreen == false ) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(0, 0, 39, 39, RED);
      midiMatrixChooser(screen, 0);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
    if (bigScreen == true && midi01 == true) {
      screen = 1;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 40 && touchX < 80 && touchY < 40 ) {
    if (screen > 0 && screen  < 27  && bigScreen == false  ) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(40, 0, 39, 39, REDORANGE);
      midiMatrixChooser(screen, 1);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
    if (bigScreen == true && midi02 == true) {
      screen = 2;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 80 && touchX < 120 && touchY < 40  ) {
    if ( screen > 0 && screen  < 27  && bigScreen == false ) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(80, 0, 39, 39, ORANGE);
      midiMatrixChooser(screen, 2);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
     if (bigScreen == true && midi03 == true) {
      screen = 3;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 120 && touchX < 160 && touchY < 40  ) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(120, 0, 39, 39, YELLOWORANGE);
      midiMatrixChooser(screen, 3);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }  
     if (bigScreen == true && midi04 == true) {
      screen = 4;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 160 && touchX < 200 && touchY < 40) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(160, 0, 39, 39, YELLOW);
      midiMatrixChooser(screen, 4);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
     if (bigScreen == true && midi05 == true) {
      screen = 5;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 200 && touchX < 240 && touchY < 40 ) {
    if (screen > 0 && screen  < 27  && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(200, 0, 39, 39, YELLOWGREEN);
      midiMatrixChooser(screen, 5);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 240 && touchX < 280 && touchY < 40) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(240, 0, 39, 39, GREEN);
      midiMatrixChooser(screen, 6);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }    
  }
  if (touchX > 280  && touchY < 40) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(280, 0, 39, 39, GRASS);
      midiMatrixChooser(screen, 7);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }

  // Row 1

  if (touchX < 40 && touchY > 40 && touchY < 80 ) {
    if ( screen > 10 && screen < 27) {
      screen = 11;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(0, 40, 39, 39, RED);
    }
    if (midi01 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(0, 40, 39, 39, RED);
    }
   if (bigScreen == true && midi06 == true) {
      screen = 6;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 40 && touchX < 80 && touchY > 40 && touchY < 80) {
    if ( screen > 10 && screen < 27) {
      screen = 12;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(40, 40, 39, 39, REDORANGE);
    }
    if (midi02 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(40, 40, 39, 39, ORANGE);
    }
    if (bigScreen == true && midi07 == true) {
      screen = 7;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 80 && touchX < 120 && touchY > 40 && touchY < 80 ) {
    if ( screen > 10 && screen < 27) {
      screen = 13;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(80, 40, 39, 39, ORANGE);
    }
    if (midi03 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(80, 40, 39, 39, YELLOW);
    }
    if (bigScreen == true && midi08 == true) {
      screen = 8;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 120 && touchX < 160 && touchY > 40 && touchY < 80) {
    if ( screen > 10 && screen < 27) {
      screen = 14;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(120, 40, 39, 39, YELLOWORANGE);
    }
    if (midi04 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(120, 40, 39, 39, GREEN);
    }
    if (bigScreen == true && midi09 == true) {
      screen = 9;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 160 && touchX < 200 && touchY > 40 && touchY < 80) {
    if ( screen > 10 && screen < 27) {
      screen = 15;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(160, 40, 39, 39, YELLOW);
    }
    if (midi05 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(160, 40, 39, 39, GRASS);
    }
    if (bigScreen == true && midi10 == true) {
      screen = 10;
      bigScreenFlipper();
      selectorBars(0, 40);
      bigScreenDraw();
    }
  }
  if (touchX > 200 && touchX < 240 && touchY > 40 && touchY < 80) {
    if ( screen > 10 && screen < 27) {
      screen = 16;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(200, 40, 39, 39, YELLOWGREEN);
    }
    if (screen > 9 && moreScreensFlag == true) {

    }
  }
  if (touchX > 240 && touchX < 280 && touchY > 40 && touchY < 80) {
    if ( screen > 10 && screen < 27) {
      screen = 17;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(240, 40, 39, 39, GREEN);
    }
    if (screen > 9 && moreScreensFlag == true) {

    }
  }
  if (touchX > 280  && touchY > 40 && touchY < 80) {
    if ( screen > 10 && screen < 27) {
      screen = 18;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(280, 40, 39, 39, GRASS);
    }
    if (screen > 9 && moreScreensFlag == true) {

    }
  }

  // Row 2

  if (touchX < 40 && touchY > 80 && touchY < 120 ) {
    if (midi06 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(0, 80, 39, 39, SKY);
    }
    if (bigScreen == true) {
      bigScreenChan ++;
      if (bigScreenChan > 15) {
        bigScreenChan = 15;
      }
      tft.fillRect(200, 90, 120, 61, BLACK);
      tft.fillRect(0, 120, 39, 39, BLACK);
      bigScreenDraw();
    }
  }
  if (touchX > 40 && touchX < 80 && touchY > 80 && touchY < 120) {
    if (midi07 &&  screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(40, 80, 39, 39, BLUE);
    }    
  }
  if (touchX > 80 && touchX < 120 && touchY > 80 && touchY < 120 ) {
    if (midi08 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(80, 80, 39, 39, PERIWINKLE);
    }
  }
  if (touchX > 120 && touchX < 160 && touchY > 80 && touchY < 120) {
    if (midi09 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(120, 80, 39, 39, LAVENDER);
    }
  }
  if (touchX > 160 && touchX < 200 && touchY > 80 && touchY < 812) {
    if (midi10 && screen > 26 && moreScreensFlag == true) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
      tft.fillRect(160, 80, 39, 39, HOTPINK);
    }
  }
  if (touchX > 200 && touchX < 240 && touchY > 80 && touchY < 120) {
    if (screen > 9 && screen < 27 && moreScreensFlag == true) {
      outputChooser(screen);
    }
  }
  if (touchX > 240 && touchX < 280 && touchY > 80 && touchY < 120) {
    if (screen > 9 && screen < 27 && moreScreensFlag == true) {
      paramDec();
    }
  }
  if (touchX > 280  && touchY > 80 && touchY < 120) {
    if (screen > 9 && screen < 27 && moreScreensFlag == true) {
      paramInc();
    }
  }

  // Row 3

  if (touchX < 40 && touchY > 120 && touchY < 160 ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(0, 120, 39, 39, RED);
    }
  }
  if (touchX > 40 && touchX < 80 && touchY > 120 && touchY < 160  ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(40, 120, 39, 39, REDORANGE);
    }
  }
  if (touchX > 80 && touchX < 120 && touchY > 120 && touchY < 160  ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(80, 120, 39, 39, ORANGE);
    }
  }
  if (touchX > 120 && touchX < 160 && touchY > 120 && touchY < 160 ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(120, 120, 39, 39, YELLOWORANGE);
    }
  }
  if (touchX > 160 && touchX < 200 && touchY > 120 && touchY < 160 ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(160, 120, 39, 39, YELLOW);
    }
  }
  if (touchX > 200 && touchX < 240 && touchY > 120 && touchY < 160 ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(200, 120, 39, 39, YELLOWGREEN);
    }
  }
  if (touchX > 240 && touchX < 280 && touchY > 120 && touchY < 160 ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(240, 120, 39, 39, GREEN);

    }
  }
  if (touchX > 280  && touchY > 120 && touchY < 160 ) {
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(280, 120, 39, 39, GRASS);
    }
  }

  // Row 4

  if (touchX < 40 && touchY > 160 && touchY < 200 ) {
    if ( screen > 10 && screen < 27) {
      screen = 19;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(0, 160, 39, 39, TEAL);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(0, 160, 39, 39, TEAL);
    }
    if (bigScreen == true) {
      bigScreenChan --;
      if (bigScreenChan < 0) {
        bigScreenChan = 0;
      }
      tft.fillRect(200, 90, 120, 61, BLACK);
      tft.fillRect(0, 120, 39, 39, BLACK);
      bigScreenDraw();
    }
  }
  if (touchX > 40 && touchX < 80 && touchY > 160 && touchY < 200  ) {
    if ( screen > 10 && screen < 27) {
      screen = 20;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(40, 160, 39, 39, SKY);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(40, 160, 39, 39, SKY);
    }
  }
  if (touchX > 80 && touchX < 120 && touchY > 160 && touchY < 200  ) {
    if ( screen > 10 && screen < 27) {
      screen = 21;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(80, 160, 39, 39, BLUE);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(80, 160, 39, 39, BLUE);
    }
  }
  if (touchX > 120 && touchX < 160 && touchY > 160 && touchY < 200 ) {
    if ( screen > 10 && screen < 27) {
      screen = 22;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(120, 160, 39, 39, ROYAL);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(120, 160, 39, 39, ROYAL);
    }
  }
  if (touchX > 160 && touchX < 200 && touchY > 160 && touchY < 200 ) {
    if ( screen > 10 && screen < 27) {
      screen = 23;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(160, 160, 39, 39, PERIWINKLE);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(160, 160, 39, 39, PERIWINKLE);
    }
  }
  if (touchX > 200 && touchX < 240 && touchY > 160 && touchY < 200 ) {
    if ( screen > 10 && screen < 27) {
      screen = 24;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(200, 160, 39, 39, LAVENDER);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(200, 160, 39, 39, LAVENDER);
    }
  }
  if (touchX > 240 && touchX < 280 && touchY > 160 && touchY < 200 ) {
    if ( screen > 10 && screen < 27) {
      screen = 25;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(240, 160, 39, 39, MAGENTA);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(240, 160, 39, 39, MAGENTA);
    }
  }
  if (touchX > 280  && touchY > 160 && touchY < 200 ) {
    if ( screen > 10 && screen < 27) {
      screen = 26;
      clearIt(0, 200, 13, 213);
      colorBars(40, 160);
      cpsRelabel();
      tft.fillRect(280, 160, 39, 39, HOTPINK);
    }
    if (screen > 26 && moreScreensFlag == true) {
      clearIt(120, 160, 133, 173);
      tft.fillRect(280, 160, 39, 39, HOTPINK);
    }
  }

  // Bottom row

  if (touchX < 40 && touchY > 200 ) {
    if ( screen == 0 ) {
      panicSwitch=0;
      panicFlag=true;
      panic(0,200,true);
      shuddup();
    }
    if (screen > 0 && screen  < 27  && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(0, 200, 39, 39, TEAL);
      midiMatrixChooser(screen, 8);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }

    if (moreScreensFlag == true ) {

      if (screen > 0 && screen < 10 && bigScreen == true) {
        tft.fillScreen(BLACK);
        moreScreensFlag = false;
        bigScreen = false;
        clearIt(0, 200, 13, 213);
        deviceScreens(screen - 1);

      }
      /*  */
      if ( screen == 27   ) {
        tft.fillScreen(BLACK);
        moreScreensFlag = false;
        screen = 0;
        boilerplate();
        innerBars();
      }
      if ( screen == 28  ) {
        tft.fillScreen(BLACK);
        moreScreensFlag = false;
        screen = 0;
        boilerplate();
        innerBars();
      }

    }
  }
  if (touchX > 40 && touchX < 80 && touchY > 200 ) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(40, 200, 39, 39, SKY);
      midiMatrixChooser(screen, 9);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 80 && touchX < 120 && touchY > 200 ) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(80, 200, 39, 39, BLUE);
      midiMatrixChooser(screen, 10);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 120 && touchX < 160 && touchY > 200) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(120, 200, 39, 39, ROYAL);
      midiMatrixChooser(screen, 11);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 160 && touchX < 200 && touchY > 200) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(160, 200, 39, 39, PERIWINKLE);
      midiMatrixChooser(screen, 12);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 200 && touchX < 240 && touchY > 200) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(200, 200, 39, 39, LAVENDER);
      midiMatrixChooser(screen, 13);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 240 && touchX < 280 && touchY > 200) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(240, 200, 39, 39, MAGENTA);
      midiMatrixChooser(screen, 14);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }
  if (touchX > 280  && touchY > 200 ) {
    if (screen > 0 && screen  < 27 && bigScreen == false) {
      clearIt(0, 200, 13, 213);
      tft.fillRect(280, 200, 39, 39, HOTPINK);
      midiMatrixChooser(screen, 15);
      if ( screen > 10 && screen < 27) {
        outSqClear(false);
      }
      else {
        outSqClear(true);
      }
    }
  }

  //  End grid definitions


  //begin device bars definitions

  if ( touchX < 40 && touchY > 63 && touchY < 103 ) {
    if (midi01 && moreScreensFlag == false) {
      screen = 1;
      deviceScreens(0);
    }
  }
  if ( touchX > 40 && touchX < 80 && touchY > 63 && touchY < 103 ) {
    if (midi02 && moreScreensFlag == false) {
      screen = 2;
      deviceScreens(1);
    }
  }
  if ( touchX > 80 && touchX < 120 && touchY > 63 && touchY < 103 ) {
    if (midi03 && moreScreensFlag == false) {
      screen = 3;
      deviceScreens(2);
    }
  }
  if ( touchX > 120 && touchX < 160 && touchY > 63 && touchY < 103 ) {
    if (midi04 && moreScreensFlag == false) {
      screen = 4;
      deviceScreens(3);
    }
  }
  if ( touchX > 160 && touchX < 200 && touchY > 63 && touchY < 103 ) {
    if (midi05 && moreScreensFlag == false) {
      screen = 5;
      deviceScreens(4);
    }
  }
  if ( touchX < 40 && touchY > 138 && touchY < 178 ) {
    if (midi06 && moreScreensFlag == false) {
      screen = 6;
      deviceScreens(5);
    }
  }
  if ( touchX > 40 && touchX < 80 && touchY > 138 && touchY < 178 ) {
    if (midi07 && moreScreensFlag == false) {
      screen = 7;
      deviceScreens(6);
    }
  }
  if ( touchX > 80 && touchX < 120 && touchY > 138 && touchY < 178 ) {
    if (midi08 && moreScreensFlag == false) {
      screen = 8;
      deviceScreens(7);
    }
  }
  if ( touchX > 120 && touchX < 160 && touchY > 138 && touchY < 178 ) {
    if (midi09 && moreScreensFlag == false) {
      screen = 9;
      deviceScreens(8);
    }
  }
  if ( touchX > 160 && touchX < 200 && touchY > 138 && touchY < 178 ) {
    if (midi10 && moreScreensFlag == false) {
      screen = 10;
      deviceScreens(9);
    }
  }

  // begin function bars definition

  if (screen != 0 && moreScreensFlag == false) {
    if (touchX > 280 && touchY > 138 && touchY < 178 ) {
      exitDeviceScreens();
    }
  }
  if (( screen == 0 && moreScreensFlag == true) || (screen > 9 && screen < 27 && moreScreensFlag == true) ) {
    if (touchX > 280 && touchY > 120 && touchY < 160 ) {
      screen = 0;
      tft.fillScreen(BLACK);
      moreScreensFlag = false;
      boilerplate();
      innerBars();
    }
  }
  if (screen != 0 && moreScreensFlag == false) {
    if (touchX < 280 && touchX > 240 && touchY > 138 && touchY < 178 ) {
      memWrite();
    }
  }
  if (moreScreensFlag == false) {
    if (touchX < 240 && touchX > 200 && touchY > 138 && touchY < 178 ) {
      moreScreens(screen);
    }
  }
  if ( moreScreensFlag == false) {
    if (touchX > 280 && touchY > 63 && touchY < 103 ) {
      paramInc();
    }
  }
  if (moreScreensFlag == false) {
    if (touchX < 280 && touchX > 240 && touchY > 63 && touchY < 103 ) {
      paramDec();
    }
  }
  if (screen != 0 && moreScreensFlag == false) {
    if (touchX < 240 && touchX > 200 && touchY > 63 && touchY < 103 ) {
      outputChooser(screen);
    }
  }

  // begin big screen buttons
  if (bigScreen == true) {
    if (touchX > 200 && touchX < 320 && touchY < 80) {
      tft.fillRect(200, 90, 120, 61, BLACK);
      paramInc();
      bigScreenDraw();
    }
    if (touchX > 200 && touchX < 320 && touchY > 160) {
      tft.fillRect(200, 90, 120, 61, BLACK);
      paramDec();
      bigScreenDraw();
    }
  }
}
