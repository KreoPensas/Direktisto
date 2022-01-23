void indicateActivity(byte deviceNum) {
  if (moreScreensFlag == false) {
    if (deviceNum == 0) {
      active01 = 0;
    }
    if (deviceNum == 1) {
      active02 = 0;
    }
    if (deviceNum == 2) {
      active03 = 0;
    }
    if (deviceNum == 3) {
      active04 = 0;
    }
    if (deviceNum == 4) {
      active05 = 0;
    }
    if (deviceNum == 5) {
      active06 = 0;
    }
    if (deviceNum == 6) {
      active07 = 0;
    }
    if (deviceNum == 7) {
      active08 = 0;
    }
    if (deviceNum == 8) {
      active09 = 0;
    }
    if (deviceNum == 9) {
      active10 = 0;
    }
    indicateDeviceAct(deviceNum);
  }
}

void indicateDeviceAct(byte deviceNum) {
  if (deviceNum == 0) {
    tft.fillRect(1, 93, 37, 8, RED);
  }
  if (deviceNum == 1) {
    tft.fillRect(41, 93, 37, 8, ORANGE);
  }
  if (deviceNum == 2) {
    tft.fillRect(81, 93, 37, 8, YELLOW);
  }
  if (deviceNum == 3) {
    tft.fillRect(121, 93, 37, 8, GREEN);
  }
  if (deviceNum == 4) {
    tft.fillRect(161, 93, 37, 8, GRASS);
  }
  if (deviceNum == 5) {
    tft.fillRect(1, 168, 37, 8, SKY);
  }
  if (deviceNum == 6) {
    tft.fillRect(41, 168, 37, 8, BLUE);
  }
  if (deviceNum == 7) {
    tft.fillRect(81, 168, 37, 8, PERIWINKLE);
  }
  if (deviceNum == 8) {
    tft.fillRect(121, 168, 37, 8, LAVENDER);
  }
  if ( deviceNum == 9) {
    tft.fillRect(161, 168, 37, 8, HOTPINK);
  }
}

void clearDeviceAct(byte deviceNum) {
  if (deviceNum == 0) {
    tft.fillRect(1, 93, 37, 8, BLACK);
  }
  if (deviceNum == 1) {
    tft.fillRect(41, 93, 37, 8, BLACK);
  }
  if (deviceNum == 2) {
    tft.fillRect(81, 93, 37, 8, BLACK);
  }
  if (deviceNum == 3) {
    tft.fillRect(121, 93, 37, 8, BLACK);
  }
  if (deviceNum == 4) {
    tft.fillRect(161, 93, 37, 8, BLACK);
  }
  if (deviceNum == 5) {
    tft.fillRect(1, 168, 37, 8, BLACK);
  }
  if (deviceNum == 6) {
    tft.fillRect(41, 168, 37, 8, BLACK);
  }
  if (deviceNum == 7) {
    tft.fillRect(81, 168, 37, 8, BLACK);
  }
  if (deviceNum == 8) {
    tft.fillRect(121, 168, 37, 8, BLACK);
  }
  if ( deviceNum == 9) {
    tft.fillRect(161, 168, 37, 8, BLACK);
  }
}

void indicatorClear() {
  if (active01 > 15) {
    clearDeviceAct(0);
  }
  if (active02 > 15) {
    clearDeviceAct(1);
  }
  if (active03 > 15) {
    clearDeviceAct(2);
  }
  if (active04 > 15) {
    clearDeviceAct(3);
  }
  if (active05 > 15) {
    clearDeviceAct(4);
  }
  if (active06 > 15) {
    clearDeviceAct(5);
  }
  if (active07 > 15) {
    clearDeviceAct(6);
  }
  if (active08 > 15) {
    clearDeviceAct(7);
  }
  if (active09 > 15) {
    clearDeviceAct(8);
  }
  if (active10 > 15) {
    clearDeviceAct(9);
  }
}

void fillDeviceSquare(byte deviceNum) {
  if (screen == 0) {
    if (deviceNum == 0) {
      tft.fillRect(0, 63, 39, 5, RED);
    }
    if (deviceNum == 1) {
      tft.fillRect(40, 63, 39, 5, ORANGE);
    }
    if (deviceNum == 2) {
      tft.fillRect(80, 63, 39, 5, YELLOW);
    }
    if (deviceNum == 3) {
      tft.fillRect(120, 63, 39, 5, GREEN);
    }
    if (deviceNum == 4) {
      tft.fillRect(160, 63, 39, 5, GRASS);
    }
    if (deviceNum == 5) {
      tft.fillRect(0, 138, 39, 5, SKY);
    }
    if (deviceNum == 6) {
      tft.fillRect(40, 138, 39, 5, BLUE);
    }
    if (deviceNum == 7) {
      tft.fillRect(80, 138, 39, 5, PERIWINKLE);
    }
    if (deviceNum == 8) {
      tft.fillRect(120, 138, 39, 5, LAVENDER);
    }
    if ( deviceNum == 9) {
      tft.fillRect(160, 138, 39, 5, HOTPINK);
    }
  }
}

void clearDeviceSquare(int deviceNum) {
  if (deviceNum == 0) {
    tft.fillRect(1, 64, 37, 4, BLACK);
  }
  if (deviceNum == 1) {
    tft.fillRect(41, 64, 37, 4, BLACK);
  }
  if (deviceNum == 2) {
    tft.fillRect(81, 64, 37, 4, BLACK);
  }
  if (deviceNum == 3) {
    tft.fillRect(121, 64, 37, 4, BLACK);
  }
  if (deviceNum == 4) {
    tft.fillRect(161, 64, 37, 4, BLACK);
  }
  if (deviceNum == 5) {
    tft.fillRect(1, 139, 37, 4, BLACK);
  }
  if (deviceNum == 6) {
    tft.fillRect(41, 139, 37, 4, BLACK);
  }
  if (deviceNum == 7) {
    tft.fillRect(81, 139, 37, 4, BLACK);
  }
  if (deviceNum == 8) {
    tft.fillRect(121, 139, 37, 4, BLACK);
  }
  if (deviceNum == 9) {
    tft.fillRect(161, 139, 37, 4, BLACK);
  }
}

void clearBars() {
  for ( int i = 0; i < 10; i++) {
    clearDeviceSquare(i);
  }
}
