void moreScreens(byte deviceNum) {
  moreScreensFlag = true;

  if ( screen > 0 ) {
    tft.fillScreen(BLACK);
    tft.drawRect(0, 200, 39, 39, GRAY);
    tft.setTextColor(RED);
    tft.setCursor(15, 213);
    tft.print("X");
    tft.setCursor(0, 0);
    tft.setTextColor(WHITE);
    if (screen > 0 && screen < 9) {
      bigScreen = true;
      selectorBars(0, 40);
      bigScreenDraw();
    }
    if (screen > 9) {
      selectorBars(40, 80);
      clearIt(120, 160, 133, 173);
    }
  }
  if (screen == 0 ) {
    screen = 11;
    computerPortsScreen();
  }
}


void selectorBars(int topY, int botY) {
  tft.fillRect(0, topY, 200, 40, BLACK);
  tft.fillRect(0, botY, 200, 40, BLACK);
  if (midi01) {
    tft.drawRect(0, topY, 39, 39, RED);
    tft.setTextColor(RED);
    if ( screen == 1) {
      tft.fillRect(0, topY, 39, 39, RED);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(14, topY + 13);
    tft.print("A");
  }
  if (midi02) {
    tft.drawRect(40, topY, 39, 39, ORANGE);
    tft.setTextColor(ORANGE);
    if ( screen == 2) {
      tft.fillRect(40, topY, 39, 39, ORANGE);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(54, topY + 13);
    tft.print("B");
  }
  if (midi03) {
    tft.drawRect(80, topY, 39, 39, YELLOW);
    tft.setTextColor(YELLOW);
    if ( screen == 3 ) {
      tft.fillRect(80, topY, 39, 39, YELLOW);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(94, topY + 13);
    tft.print("C");
  }
  if (midi04) {
    tft.drawRect(120, topY, 39, 39, GREEN);
    tft.setTextColor(GREEN);
    if ( screen == 4) {
      tft.fillRect(120, topY, 39, 39, GREEN);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(134, topY + 13);
    tft.print("D");
  }
  if (midi05) {
    tft.drawRect(160, topY, 39, 39, GRASS);
    tft.setTextColor(GRASS);
    if ( screen == 5) {
      tft.fillRect(160, topY, 39, 39, GRASS);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(174, topY + 13);
    tft.print("E");
  }
  if (midi06) {
    tft.drawRect(0, botY, 39, 39, SKY);
    tft.setTextColor(SKY);
    if (screen == 6 ) {
      tft.fillRect(0, botY, 39, 39, SKY);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(14, botY + 13);
    tft.print("F");
  }
  if (midi07) {
    tft.drawRect(40, botY, 39, 39, BLUE);
    tft.setTextColor(BLUE);
    if (screen == 7 ) {
      tft.fillRect(40, botY, 39, 39, BLUE);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(54, botY + 13);
    tft.print("G");
  }
  if (midi08) {
    tft.drawRect(80, botY, 39, 39, PERIWINKLE);
    tft.setTextColor(PERIWINKLE);
    if ( screen == 8) {
      tft.fillRect(80, botY, 39, 39, PERIWINKLE);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(94, botY + 13);
    tft.print("H");
  }
  if (midi09) {
    tft.drawRect(120, botY, 39, 39, LAVENDER);
    tft.setTextColor(LAVENDER);
    if (screen == 9 ) {
      tft.fillRect(120, botY, 39, 39, LAVENDER);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(134, botY + 13);
    tft.print("I");
  }
  if (midi10) {
    tft.drawRect(160, botY, 39, 39, HOTPINK);
    tft.setTextColor(HOTPINK);
    if (screen == 10 ) {
      tft.fillRect(160, botY, 39, 39, HOTPINK);
      tft.setTextColor(BLACK);
    }
    tft.setCursor(174, botY + 13);
    tft.print("J");
  }
}

void computerPortsScreen() {

  tft.fillScreen(BLACK);
  colorBars(0, 200);
  cpsRelabel();
  typeMain(13, 213);
  tft.fillRect(0, 40, 39, 39, RED);
  tft.setTextColor(WHITE);
  tft.drawRect(200, 80, 39, 39, GRAY);
  tft.setCursor(206, 94);
  tft.print("Out");
  tft.drawRect(240, 80, 39, 39, GRAY);
  tft.setCursor(250, 94);
  tft.print("Dn");
  tft.drawRect(280, 80, 39, 39, GRAY);
  tft.setCursor(290, 94);
  tft.print("Up");
  tft.drawRect(240, 120, 39, 39, GRAY);
  tft.setCursor(242, 134);
  tft.print("Mem");
  tft.drawRect(280, 120, 39, 39, GRAY);
  tft.setCursor(295, 134);
  tft.setTextColor(RED);
  tft.print("X");
}

void cpsRelabel() {
  tft.fillRect(0, 80, 160, 15, BLACK);
  tft.setTextColor(GRAY);
  tft.setCursor(0, 80);
  tft.print("Computer Port: ");
  rainbow(screen - 10);
  tft.print(screen - 10);
  tft.fillRect(0, 95, 105, 15, BLACK);
  tft.fillRect(0, 120, 140, 15, BLACK);
  tft.fillRect(0, 135, 140, 15, BLACK);
  tft.fillRect(150, 135, 75, 15, BLACK);
  tft.setCursor(0, 95);
  tft.setTextColor(WHITE);
  colorBars(40, 160);
  printLabels = true;
  typeMain(53, 173);
  printLabels = false;
}


void outSqClear(bool high) {
  int y;
  int y2;
  if ( high == true) {
    y = 76;
    y2 = 63;
  }
  else {
    y = 94;
    y2 = 80;
  }
  tft.fillRect(200, y2, 39, 39, BLACK);
  tft.setTextColor(WHITE);
  tft.drawRect(200, y2, 39, 39, GRAY);
  tft.setCursor(206, y);
  tft.print("Out");
}
