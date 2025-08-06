//
// Created by lars on 06-08-2025.
//


// ReSharper disable once CppMissingIncludeGuard //it is there but the ide is stupid :3
#include "MicroBit.h"

#ifndef MICROBIT_HEX_ANIMATIONS_H
#define MICROBIT_HEX_ANIMATIONS_H
#define MICROBIT_UBIT_AS_STATIC_OBJECT

#ifdef MICROBIT_UBIT_AS_STATIC_OBJECT
extern MicroBit uBit; // NOLINT(*-dynamic-static-initializers)
#else
extern MicroBit &uBit;
#endif
constexpr int stdDelay = 100;
constexpr int stdArraySize = 96;

void draw(MicroBitImage animation[], int delay);
void drawArrows();

#endif
