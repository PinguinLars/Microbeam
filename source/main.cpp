#include "Animations.h"
#include "MicroBit.h"

MicroBit uBit;

[[noreturn]] int main() {
  uBit.init();
  while (true)
    drawArrows();

  /**
   * Cleanup tasks
   */
  // ReSharper disable once CppDFAUnreachableCode
  release_fiber();
}
