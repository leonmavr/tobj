#ifndef RENDERER_H
#define RENDERER_H

#include <stdio.h>
#include <stdint.h>

void pixel_draw(int x, int y, uint8_t r, uint8_t g, uint8_t b);
void screen_clear();

#endif // RENDERER_H
