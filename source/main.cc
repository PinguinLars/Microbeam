#include "MicroBit.h"

MicroBit uBit;

int main() {
  uBit.init();
  uBit.radio.disable();

  MicroBitImage arrow("000,000,000,000,000,000,255,205,155,105,055,005,000,000,000,000\n"
                      "000,000,000,000,000,255,205,155,105,055,005,000,000,000,000,000\n"
                      "000,000,000,000,255,205,155,105,055,005,000,000,000,000,000,000\n"
                      "000,000,000,000,000,255,205,155,105,055,005,000,000,000,000,000\n"
                      "000,000,000,000,000,000,255,205,155,105,055,005,000,000,000,000\n");

  uBit.display.rotateTo(MICROBIT_DISPLAY_ROTATION_180);
  uBit.display.animate(arrow, 100, 1);
  uBit.display.rotateTo(MICROBIT_DISPLAY_ROTATION_90);
  uBit.display.animate(arrow, 100, 1);
  uBit.display.rotateTo(MICROBIT_DISPLAY_ROTATION_0);
  uBit.display.animate(arrow, 100, 1);
  uBit.display.rotateTo(MICROBIT_DISPLAY_ROTATION_270);
  uBit.display.animate(arrow, 100, 1);
  release_fiber();
}
