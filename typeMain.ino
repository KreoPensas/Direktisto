void typeMain(int topY, int botY) {
  for (int i = 0; i < 8 ; i ++) {
    rainbow(i + 1);
    slinger(i, typeX[i], topY);
  }
  for (int i = 8; i < 16 ; i ++) {
    rainbow(i + 1);
    slinger(i, typeX[i], botY);
  }
}


void slinger(byte target, int x, int y) {

  if (screen > 0 && screen < 27 && printLabels == false) {
    poo = outputChannel[screen - 1][target];
  }

  if (screen > 26 || printLabels == true) {
    poo = outputChannel[26][target]; //This array contains channel labels only, never altered.
  }
  if (target < 9) {
    if ( poo > 9 ) {
      x = x - 4;
    }
  }
  if (target >= 9 ) {
    if ( poo < 10 ) {
      x = x + 6;
    }
  }

  tft.setCursor(x, y);
  tft.print(poo);
}

void rainbow (int num) {
  switch (num) {
    case 1:
      tft.setTextColor(RED);
      break;
    case 2:
      tft.setTextColor(REDORANGE);
      break;
    case 3:
      tft.setTextColor(ORANGE);
      break;
    case 4:
      tft.setTextColor(YELLOWORANGE);
      break;
    case 5:
      tft.setTextColor(YELLOW);
      break;
    case 6:
      tft.setTextColor(YELLOWGREEN);
      break;
    case 7:
      tft.setTextColor(GREEN);
      break;
    case 8:
      tft.setTextColor(GRASS);
      break;
    case 9:
      tft.setTextColor(TEAL);
      break;
    case 10:
      tft.setTextColor(SKY);
      break;
    case 11:
      tft.setTextColor(BLUE);
      break;
    case 12:
      tft.setTextColor(ROYAL);
      break;
    case 13:
      tft.setTextColor(PERIWINKLE);
      break;
    case 14:
      tft.setTextColor(LAVENDER);
      break;
    case 15:
      tft.setTextColor(MAGENTA);
      break;
    case 16:
      tft.setTextColor(HOTPINK);
      break;
    case 17:
      tft.setTextColor(RED);
      break;
    case 18:
      tft.setTextColor(ORANGE);
      break;
    case 19:
      tft.setTextColor(YELLOW);
      break;
    case 20:
      tft.setTextColor(GREEN);
      break;
    case 21:
      tft.setTextColor(GRASS);
      break;
    case 22:
      tft.setTextColor(SKY);
      break;
    case 23:
      tft.setTextColor(BLUE);
      break;
    case 24:
      tft.setTextColor(PERIWINKLE);
      break;
    case 25:
      tft.setTextColor(LAVENDER);
      break;
    case 26:
      tft.setTextColor(HOTPINK);
      break;
  }
}
