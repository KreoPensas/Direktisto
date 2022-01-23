void panic( int x, int y, boolean hit ) {
  if (hit == false){
  tft.fillRect(x, y, 39, 39, DIMRED);
  }
  if (hit == true ){
   tft.fillRect(x, y, 39, 39, RED); 
  }
  tft.fillCircle(x + 19, y + 16, 14, FLESH);
  tft.fillCircle(x + 17, y + 28, 8, FLESH);
  tft.fillCircle(x + 21, y + 28, 8, FLESH);
  tft.fillCircle(x + 19, y + 28, 6, BLACK);
  tft.fillCircle(x + 13, y + 14, 3, WHITE);
  tft.fillCircle(x + 25, y + 14, 3, WHITE);
  tft.fillCircle(x + 13, y + 14, 2, BLACK);
  tft.fillCircle(x + 25, y + 14, 2, BLACK);
  tft.drawPixel(x + 15, y + 24, WHITE);
  tft.drawPixel(x + 23, y + 24, WHITE);
  tft.drawPixel(x + 16, y + 23, WHITE);
  tft.drawPixel(x + 17, y + 23, WHITE);
  tft.drawPixel(x + 18, y + 23, WHITE);
  tft.drawPixel(x + 19, y + 23, WHITE);
  tft.drawPixel(x + 20, y + 23, WHITE);
  tft.drawPixel(x + 21, y + 23, WHITE);
  tft.drawPixel(x + 22, y + 23, WHITE);
  tft.drawPixel(x + 17, y + 22, WHITE);
  tft.drawPixel(x + 18, y + 22, WHITE);
  tft.drawPixel(x + 19, y + 22, WHITE);
  tft.drawPixel(x + 20, y + 22, WHITE);
  tft.drawPixel(x + 21, y + 22, WHITE);
  tft.drawPixel(x + 17, y + 31, RED);
  tft.drawPixel(x + 18, y + 31, RED);
  tft.drawPixel(x + 19, y + 31, RED);
  tft.drawPixel(x + 20, y + 31, RED);
  tft.drawPixel(x + 21, y + 31, RED);
  tft.drawPixel(x + 16, y + 32, RED);
  tft.drawPixel(x + 17, y + 32, RED);
  tft.drawPixel(x + 18, y + 32, RED);
  tft.drawPixel(x + 19, y + 32, RED);
  tft.drawPixel(x + 20, y + 32, RED);
  tft.drawPixel(x + 21, y + 32, RED);
  tft.drawPixel(x + 22, y + 32, RED);
  tft.drawPixel(x + 16, y + 33, RED);
  tft.drawPixel(x + 17, y + 33, WHITE);
  tft.drawPixel(x + 18, y + 33, WHITE);
  tft.drawPixel(x + 19, y + 33, WHITE);
  tft.drawPixel(x + 20, y + 33, WHITE);
  tft.drawPixel(x + 21, y + 33, WHITE);
  tft.drawPixel(x + 22, y + 33, RED);
  tft.drawPixel(x + 17, y + 34, WHITE);
  tft.drawPixel(x + 18, y + 34, WHITE);
  tft.drawPixel(x + 19, y + 34, WHITE);
  tft.drawPixel(x + 20, y + 34, WHITE);
  tft.drawPixel(x + 21, y + 34, WHITE);
  tft.drawLine(x + 4, y + 21, x + 4, y + 26, FLESH);
  tft.drawLine(x + 34, y + 21, x + 34, y + 26, FLESH);
  tft.drawLine(x + 5, y + 24, x + 5, y + 27, FLESH);
  tft.drawLine(x + 33, y + 24, x + 33, y + 27, FLESH);
  tft.drawLine(x + 6, y + 27, x + 6, y + 29, FLESH);
  tft.drawLine(x + 32, y + 27, x + 32, y + 29, FLESH);
  tft.drawLine(x + 2, y + 10, x + 2, y + 24, FLESH);
  tft.drawLine(x + 36, y + 10, x + 36, y + 24, FLESH);
  tft.drawLine(x + 3, y + 10, x + 3, y + 25, FLESH);
  tft.drawLine(x + 35, y + 10, x + 35, y + 25, FLESH);
  tft.drawLine(x + 2, y + 24, x + 10, y + 36, FLESH);
  tft.drawLine(x + 36, y + 24, x + 28, y + 36, FLESH);
  tft.drawLine(x + 2, y + 24, x + 9, y + 36, FLESH);
  tft.drawLine(x + 36, y + 24, x + 29, y + 36, FLESH);
  tft.drawLine(x + 2, y + 25, x + 8, y + 36, SHADEFLESH);
  tft.drawLine(x + 36, y + 25, x + 30, y + 36, SHADEFLESH);
  tft.fillRect(x + 15, y + 37, 9, 2, SHADEFLESH);
  tft.fillRect(x + 9, y + 37, 3, 2, FLESH);
  tft.fillRect(x + 27, y + 37, 3, 2, FLESH);
  tft.fillRect(x + 7, y + 37, 2, 2, SHADEFLESH);
  tft.fillRect(x + 30, y + 37, 2, 2, SHADEFLESH);
  tft.drawLine(x + 7, y + 37, x + 2, y + 26, SHADEFLESH);
  tft.drawLine(x + 30, y + 37, x + 36, y + 26, SHADEFLESH);

}
