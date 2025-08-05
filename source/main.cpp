#include "MicroBit.h"

MicroBit uBit;

int main() {
  uBit.init();
  MicroBitImage beam[16] = {
      MicroBitImage("0,0,0,0,0\n"
                    "0,0,0,0,0\n"
                    "255,0,0,0,0\n"
                    "0,0,0,0,0\n"
                    "0,0,0,0,0\n"),
      MicroBitImage("0,0,0,0,0\n"
                    "0,0,0,0,0\n"
                    "205,255,0,0,0\n"
                    "0,0,0,0,0\n"
                    "0,0,0,0,0\n"),
      MicroBitImage("0,0,0,0,0\n"
                    "0,0,0,0,0\n"
                    "155,205,255,0,0\n"
                    "0,0,0,0,0\n"
                    "0,0,0,0,0\n"),
      MicroBitImage("0,0,0,0,0\n"
                    "0,0,0,0,0\n"
                    "105,155,205,255,0\n"
                    "0,0,0,0,0\n"
                    "0,0,0,0,0\n"),
      MicroBitImage("0,0,0,0,0\n"
                    "0,0,0,0,0\n"
                    "055,105,155,205,255\n"
                    "0,0,0,0,0\n"
                    "0,0,0,0,0\n"),
  };

  for (int i = 0; i < sizeof(beam); i++) {
    if (beam[i] == nullptr) // to prevent an 030 error (or panic)
      break;
    uBit.display.print(beam[i]);
    uBit.sleep(100);
  }

  /**
   * Cleanup tasks
   */
  uBit.display.clear();
  release_fiber();
}
