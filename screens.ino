void innerBars() {
  tft.fillRect(0, 63, 200, 40, BLACK);
  tft.fillRect(0, 138, 200, 40, BLACK);
  tft.drawRect(0, 63, 39, 39, RED);
  tft.drawRect(40, 63, 39, 39, ORANGE);
  tft.drawRect(80, 63, 39, 39, YELLOW);
  tft.drawRect(120, 63, 39, 39, GREEN);
  tft.drawRect(160, 63, 39, 39, GRASS);
  tft.drawRect(0, 138, 39, 39, SKY);
  tft.drawRect(40, 138, 39, 39, BLUE);
  tft.drawRect(80, 138, 39, 39, PERIWINKLE);
  tft.drawRect(120, 138, 39, 39, LAVENDER);
  tft.drawRect(160, 138, 39, 39, HOTPINK);
}

void colorBars(int topY, int botY) {
  tft.fillRect(0, topY, 320, 40, BLACK);
  tft.fillRect(0, botY, 320, 40, BLACK);
  tft.drawRect(0, topY, 39, 39, RED);
  tft.drawRect(40, topY, 39, 39, REDORANGE);
  tft.drawRect(80, topY, 39, 39, ORANGE);
  tft.drawRect(120, topY, 39, 39, YELLOWORANGE);
  tft.drawRect(160, topY, 39, 39, YELLOW);
  tft.drawRect(200, topY, 39, 39, YELLOWGREEN);
  tft.drawRect(240, topY, 39, 39, GREEN);
  tft.drawRect(280, topY, 39, 39, GRASS);
  tft.drawRect(0, botY, 39, 39, TEAL);
  tft.drawRect(40, botY, 39, 39, SKY);
  tft.drawRect(80, botY, 39, 39, BLUE);
  tft.drawRect(120, botY, 39, 39, ROYAL);
  tft.drawRect(160, botY, 39, 39, PERIWINKLE);
  tft.drawRect(200, botY, 39, 39, LAVENDER);
  tft.drawRect(240, botY, 39, 39, MAGENTA);
  tft.drawRect(280, botY, 39, 39, HOTPINK);
}

void clearIt(int x, int y, int tx, int ty) {
  colorBars(x, y);
  typeMain(tx, ty);
}

void boilerplate() {
  tft.setTextColor(GRAY);
  tft.drawTriangle(5, 105, 0, 116, 11, 116, GRAY);
  tft.drawTriangle(0, 122, 5, 133, 11, 122, GRAY);
  tft.setCursor(14, 113);
  tft.print("Device Ports");
  tft.setTextColor(WHITE);
  tft.setCursor(170, 113);
  tft.print("Computer Port #");
  tft.setCursor(295, 113);
  rainbow(activeOutputPage);
  tft.print(activeOutputPage);
  tft.drawRect(200, 138, 39, 39, GRAY);
  tft.drawRect(280, 63, 39, 39, GRAY);
  tft.drawRect(240, 63, 39, 39, GRAY);
    tft.drawRect(200, 63, 39, 39, DIMMED);
  tft.setTextColor(WHITE);
  tft.setCursor(201, 151);
  tft.print("More");
  tft.setCursor(290, 76);
  tft.print("Up");
  tft.setCursor(250, 76);
  tft.print("Dn");
  printName(210, 213);
  panic(0, 200, false);
}

void deviceScreens(byte deviceNum) {
  clearBars();
  tft.fillRect(180, 40, 140, 15, BLACK);
  tft.fillRect(180, 185, 140, 15, BLACK);
  matrixFlag = false;
  outputFlag = false;
  if (deviceNum == 0 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(0, 63, 39, 39, RED);
    tft.fillRect(40, 63, 160, 40, BLACK);
    tft.fillRect(0, 138, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device A: ");
    deviceCheck(0);
  }
  if (deviceNum == 1 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(40, 63, 39, 39, ORANGE);
    tft.fillRect(0, 63, 40, 40, BLACK);
    tft.fillRect(80, 63, 120, 40, BLACK);
    tft.fillRect(0, 138, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device B: ");
    deviceCheck(1);
  }
  if (deviceNum == 2 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(80, 63, 39, 39, YELLOW);
    tft.fillRect(0, 63, 80, 40, BLACK);
    tft.fillRect(120, 63, 80, 40, BLACK);
    tft.fillRect(0, 138, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device C: ");
    deviceCheck(2);
  }
  if (deviceNum == 3 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(120, 63, 39, 39, GREEN);
    tft.fillRect(0, 63, 120, 40, BLACK);
    tft.fillRect(160, 63, 40, 40, BLACK);
    tft.fillRect(0, 138, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device D: ");
    deviceCheck(3);
  }
  if (deviceNum == 4 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(160, 63, 39, 39, GRASS);
    tft.fillRect(0, 63, 160, 40, BLACK);
    tft.fillRect(0, 138, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device E: ");
    deviceCheck(4);
  }
  if (deviceNum == 5 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(0, 138, 39, 39, SKY);
    tft.fillRect(0, 63, 200, 40, BLACK);
    tft.fillRect(40, 138, 160, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device F: ");
    deviceCheck(5);
  }
  if (deviceNum == 6 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(40, 138, 39, 39, BLUE);
    tft.fillRect(0, 138, 40, 40, BLACK);
    tft.fillRect(80, 138, 120, 40, BLACK);
    tft.fillRect(0, 63, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device G: ");
    deviceCheck(6);
  }
  if (deviceNum == 7 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(80, 138, 39, 39, PERIWINKLE);
    tft.fillRect(0, 138, 80, 40, BLACK);
    tft.fillRect(120, 138, 80, 40, BLACK);
    tft.fillRect(0, 63, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device H: ");
    deviceCheck(7);
  }
  if (deviceNum == 8 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(120, 138, 39, 39, LAVENDER);
    tft.fillRect(0, 138, 120, 40, BLACK);
    tft.fillRect(160, 138, 40, 40, BLACK);
    tft.fillRect(0, 63, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device I: ");
    deviceCheck(8);
  }
  if (deviceNum == 9 ) {
    clearIt(0, 200, 13, 213);
    tft.drawRect(160, 138, 39, 39, HOTPINK);
    tft.fillRect(0, 138, 160, 40, BLACK);
    tft.fillRect(0, 63, 200, 40, BLACK);
    deviceRelabel();
    tft.setCursor(0, 113);
    tft.print("Device J: ");
    deviceCheck(9);
  }
}

void deviceRelabel() {
  tft.setTextColor(BLACK);
  tft.setCursor(14, 40);
  tft.println("Computer Ports");
  tft.setCursor(14, 186);
  tft.println("Computer Ports");
  tft.fillRect(0, 103, 320, 34, BLACK);
  tft.setTextColor(WHITE);
  tft.drawTriangle(5, 40, 0, 51, 11, 51, GRAY);
  tft.drawTriangle(0, 186, 5, 197, 11, 186, GRAY);
  tft.setCursor(14, 40);
  tft.println("MIDI Channel Matrix");
  tft.setCursor(14, 186);
  tft.println("MIDI Channel Matrix");
  tft.drawRect(280, 138, 39, 39, GRAY);
  tft.drawRect(240, 138, 39, 39, GRAY);
  tft.drawRect(200, 138, 39, 39, GRAY);
  tft.drawRect(280, 63, 39, 39, GRAY);
  tft.drawRect(240, 63, 39, 39, GRAY);
  tft.drawRect(200, 63, 39, 39, GRAY);
  tft.setCursor(290, 76);
  tft.print("Up");
  tft.setCursor(250, 76);
  tft.print("Dn");
  tft.setCursor(206, 76);
  tft.print("Out");
  tft.setCursor(201, 151);
  tft.print("More");
  tft.setCursor(242, 151);
  tft.print("Mem");
  tft.setCursor(295, 151);
  tft.setTextColor(RED);
  tft.print("X");
  tft.setTextColor(WHITE);
}

void exitDeviceScreens() {
  screen = 0 ;
  outSqClear(true);
  tft.drawTriangle(5, 40, 0, 51, 11, 51, BLACK);
  tft.drawTriangle(0, 186, 5, 197, 11, 186, BLACK);
  tft.fillRect(0, 0, 320, 39, BLACK);
  tft.fillRect(0, 200, 320, 39, BLACK);
  tft.fillRect(180, 40, 140, 15, BLACK);
  tft.fillRect(180, 185, 140, 15, BLACK);
  tft.drawRect(280, 138, 39, 39, BLACK);
  tft.drawRect(240, 138, 39, 39, BLACK);
  tft.drawRect(200, 138, 39, 39, BLACK);
  tft.drawRect(280, 63, 39, 39, BLACK);
  tft.drawRect(240, 63, 39, 39, BLACK);
  tft.drawRect(200, 63, 39, 39, BLACK);
  tft.setCursor(295, 151);
  tft.setTextColor(BLACK);
  tft.print("X");
  tft.setCursor(290, 76);
  tft.print("Up");
  tft.setCursor(250, 76);
  tft.print("Dn");
  tft.setCursor(206, 76);
  tft.print("Out");
  tft.setCursor(201, 151);
  tft.print("More");
  tft.setCursor(242, 151);
  tft.print("Mem");
  tft.setCursor(14, 40);
  tft.println("MIDI Channel Matrix");
  tft.setCursor(14, 186);
  tft.println("MIDI Channel Matrix");
  tft.setTextColor(WHITE);
  tft.fillRect(0, 103, 320, 34, BLACK);
  boilerplate();
  innerBars();
}

void printName(int x, int y) {
  tft.setCursor(x, y);
  tft.setTextColor(RED);
  tft.print("D");
  tft.setTextColor(ORANGE);
  tft.print("I");
  tft.setTextColor(YELLOW);
  tft.print("R");
  tft.setTextColor(YELLOWGREEN);
  tft.print("E");
  tft.setTextColor(GREEN);
  tft.print("K");
  tft.setTextColor(GRASS);
  tft.print("T");
  tft.setTextColor(TEAL);
  tft.print("I");
  tft.setTextColor(PERIWINKLE);
  tft.print("S");
  tft.setTextColor(LAVENDER);
  tft.print("T");
  tft.setTextColor(HOTPINK);
  tft.print("O");
}

void matrixRedraw() {
  int chip = screen - 1;
  if ( screen > 0 && screen < 10 && bigScreen == false) {
    rainbow(outputChannel[chip][matrixChannel]);
    tft.fillRect(180, 185, 140, 15, BLACK);
    tft.setCursor(180, 185);
    tft.print("Output Channel ");
    tft.print(outputChannel[chip][matrixChannel]);
  }
  if ( screen > 9 && screen < 27 ) {
    rainbow(outputChannel[chip][matrixChannel]);
    tft.fillRect(0, 135, 140, 15, BLACK);
    tft.setCursor(0, 135);
    tft.print("Output Channel ");
    tft.print(outputChannel[chip][matrixChannel]);

  }
}
