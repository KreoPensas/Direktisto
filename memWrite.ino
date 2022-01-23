void memWrite() {
  File mem;
  int deviceNum = screen - 1;
  if (midilist[deviceNum]-> idProduct() == AkaiLPK25) {
    SD.remove("akai.drk");
    mem = SD.open("akai.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == Deepmind) {
    SD.remove("deepmind.drk");
    mem = SD.open("deepmind.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == MX49) {
    SD.remove("mx49.drk");
    mem = SD.open("mx49.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == AKM320) {
    SD.remove("akm320.drk");
    mem = SD.open("akm320.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == KORG) {
    SD.remove("korg.drk");
    mem = SD.open("korg.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == Casio) {
    SD.remove("casio.drk");
    mem = SD.open("casio.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == Atmel) {
    SD.remove("atmel.drk");
    mem = SD.open("atmel.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == AlesisDM7X) {
    SD.remove("adm7x.drk");
    mem = SD.open("adm7x.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == multiefiko) {
    SD.remove("mfx.drk");
    mem = SD.open("mfx.drk", FILE_WRITE);
  }
  if (midilist[deviceNum]-> idProduct() == airharp2) {
    SD.remove("airharp.drk");
    mem = SD.open("airharp.drk", FILE_WRITE);
  }
  int chip = screen - 1;
  for ( int g = 0 ; g < 16; g ++) {
    mem.write(outputChannel[chip][g]);
  }
  for(int p = 0 ; p < 16; p ++) {
    mem.write(outputPort[chip][p]);
  }
  mem.close();
  tft.setTextColor(BLACK);
  tft.setCursor(180, 185);
  tft.print("Output Channel ");
  tft.setCursor(230, 182);
  tft.setTextColor(RED);
  tft.print("Writing");
  writing = 0;
  writeFlag = true;
}
