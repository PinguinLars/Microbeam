//
// Created by lars on 06-08-2025.
//

#include "Animations.h"
#include "MicroBit.h"

void draw(MicroBitImage animation[], const int delay) {
  for (int i = 0; i < stdArraySize; i++) {
    if (animation[i] == nullptr) // to prevent an 030 error (or panic)
      break;
    uBit.display.print(animation[i]);
    uBit.sleep(delay);
  }
  uBit.display.clear();
}