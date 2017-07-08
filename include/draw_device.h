#pragma once


struct Viewport
{
  int x;
  int y;
  int w;
  int h;
};

struct Pixel
{
  int r;
  int g;
  int b;
};


struct PlatformDrawingDevice;


void set_pixel(PlatformDrawingDevice*, int x, int y, Pixel pixel);

Pixel get_pixel(PlatformDrawingDevice*, int x, int y);

void present(PlatformDrawingDevice*);
