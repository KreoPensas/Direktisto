void bigScreenDraw () {

  midiMatrixChooser(screen, bigScreenChan);
  tft.setFont(Arial_60);
  if (outputChannel[screen - 1][bigScreenChan] == 1 ) {
    tft.setCursor(234, 90);
  }
  if (outputChannel[screen - 1][bigScreenChan] > 1 && outputChannel[screen - 1][bigScreenChan] < 10) {
    tft.setCursor(235, 90);
  }
  if (outputChannel[screen - 1][bigScreenChan] > 9) {
    tft.setCursor(210, 90);
  }
  rainbow(outputChannel[screen - 1][bigScreenChan]);
  tft.print(outputChannel[screen - 1][bigScreenChan]);
  tft.fillTriangle(260, 0, 200, 80, 320, 80, REDORANGE);
  tft.fillTriangle(200, 160, 320, 160, 260, 240, REDORANGE);
  tft.drawRect(0, 80, 39, 39, GRAY);
  tft.setFont(Arial_12);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 94);
  tft.print("Up");
  tft.drawRect(0, 160, 39, 39, GRAY);
  tft.setCursor(10, 174);
  tft.print("Dn");
  tft.drawRect(40, 80, 39, 39, YELLOW);
  tft.setTextColor(YELLOW);
  tft.setCursor(50, 94);
  tft.print("Sq");
  tft.drawRect(80, 80, 39, 39, GREEN);
  tft.setTextColor(GREEN);
  tft.setCursor(90, 94);
  tft.print("Hr");
  tft.setCursor(14, 134);
  if ( bigScreenChan > 8 ) {
    tft.setCursor(8, 134);
  }
  rainbow(bigScreenChan + 1);
  tft.print(bigScreenChan + 1);
  tft.setTextColor(WHITE);
  tft.setCursor(50, 215);
  deviceCheck(screen - 1);
  tft.fillRect(40, 120, 160, 90, BLACK);
  tft.fillRect(120, 80, 39, 39, BLACK);
  if (harmEnable[screen - 1][bigScreenChan] == true) {
     tft.fillCircle(100,140,10,RED);
     tft.drawRect(120, 80, 39, 39, GREEN);
  tft.setTextColor(GREEN);
  tft.setCursor(134, 94);
  tft.print("+");
  tft.setCursor(135,134);
  if (harmSemitones < 0 ) {
    tft.setCursor(129,134);
  }  
  tft.print(harmSemitones);
    tft.drawRect(120, 160, 39, 39, GREEN);
  tft.setTextColor(GREEN);
  tft.setCursor(137, 172);
  tft.print("-");
  }

  if (seqEnable[screen - 1][bigScreenChan] == true) {
    tft.fillCircle(60,140,10,RED);
    
  }
  tft.setTextColor(WHITE);
}

void bigScreenFlipper(){
      tft.fillRect(0,0,200,79,BLACK);
    tft.fillRect(200,80,120,80,BLACK);
    tft.fillRect(40,200,160,40,BLACK);
}
