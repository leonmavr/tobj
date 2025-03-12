#include "renderer.h"
#include <stdint.h>
#include <stdio.h>

static void gotoxy(int x, int y) { printf("\033[%d;%dH", y, x); }

static void set_bg_color(int r, int g, int b) {
  printf("\033[48;2;%d;%d;%dm", r, g, b);
}

static void reset_color() { printf("\033[0m"); }

void screen_clear() { printf("\033[2J\033[H"); }

void pixel_draw(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
  gotoxy(x, y);
  set_bg_color(r, g, b);
  printf("  ");
  reset_color();
  fflush(stdout);
}
