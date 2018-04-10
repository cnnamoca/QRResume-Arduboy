#include <Arduboy2.h>

const unsigned char PROGMEM Resume[] =
{
// width, height,
64, 64,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xff, 0xff, 0x31, 0xc2, 0xc2, 0xc3, 0xc3, 0xc1, 0xc1, 0xf0, 0xff, 0xff, 0xf0, 0xf0, 0x0c, 0x0c, 0x33, 0x32, 0x32, 0x00, 0x00, 0xce, 0xce, 0xf0, 0xff, 0xff, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x18, 0x19, 0x39, 0x39, 0xd9, 0xd9, 0x39, 0x39, 0x39, 0xd8, 0xd8, 0xdf, 0xdf, 0xe0, 0xe6, 0xe6, 0x19, 0x19, 0x3e, 0x3e, 0xe1, 0x1e, 0x1e, 0x18, 0x18, 0xfe, 0xfe, 0x39, 0xe7, 0xe7, 0xe1, 0xe1, 0xde, 0xde, 0x20, 0x3f, 0x3f, 0x18, 0x18, 0xd9, 0xd9, 0xd9, 0x39, 0x39, 0xd9, 0xd9, 0xd9, 0x38, 0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x60, 0x10, 0xec, 0xec, 0x63, 0x63, 0x1c, 0x1c, 0x90, 0x6c, 0x6c, 0x93, 0x93, 0x63, 0x1c, 0x1c, 0x9c, 0x9c, 0x9f, 0x9f, 0x0f, 0x60, 0x60, 0xfc, 0xfc, 0xff, 0xff, 0xe0, 0xec, 0xec, 0xe3, 0xe3, 0x90, 0x90, 0x8c, 0x0c, 0x0c, 0x6c, 0x6c, 0xe0, 0xfc, 0xfc, 0x6c, 0x6c, 0x70, 0x70, 0x60, 0x6f, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x38, 0x38, 0xce, 0x37, 0x37, 0x3e, 0x3e, 0x36, 0x36, 0x39, 0x36, 0x36, 0xc1, 0xc1, 0xce, 0x30, 0x30, 0x37, 0x37, 0xf7, 0xf7, 0xf8, 0x08, 0x08, 0xf7, 0xf7, 0xf7, 0xf7, 0xf9, 0x31, 0x31, 0x09, 0x09, 0xf1, 0xf1, 0xf1, 0x0e, 0x0e, 0xce, 0xce, 0x01, 0x3f, 0x3f, 0xc8, 0xc8, 0xfe, 0xfe, 0x30, 0x0e, 0x0e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1b, 0x1b, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9c, 0x9c, 0x98, 0x1b, 0x1b, 0xfb, 0xfb, 0x80, 0x7c, 0x7c, 0x9f, 0x9f, 0x00, 0x00, 0x03, 0x63, 0x63, 0x83, 0x83, 0x7c, 0x7c, 0x03, 0xe4, 0xe4, 0x7f, 0x7f, 0xe7, 0xe7, 0x00, 0xf8, 0xf8, 0x9b, 0x9b, 0xfb, 0x03, 0x03, 0x7f, 0x7f, 0x63, 0x63, 0x04, 0xe4, 0xe4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0xff, 0xff, 0x33, 0x0c, 0x0c, 0xc0, 0xc0, 0x40, 0x40, 0x7c, 0x80, 0x80, 0xf3, 0xf3, 0xbc, 0xbc, 0x3c, 0x30, 0x30, 0x83, 0x83, 0xff, 0xff, 0x30, 0x3c, 0x3c, 0x70, 0x70, 0xb0, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0x30, 0xcf, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

Arduboy2 arduboy;

void setup(void)
{
  arduboy.begin();
}

void loop(void)
{
  if(!arduboy.nextFrame())
    return;
    
  arduboy.clear();
  arduboy.fillRect(32, 0, 64, 64);
  //arduboy.drawBitmap(0, 0, Resume, 64, 64, WHITE);
  Sprites::drawOverwrite(32, 0, Resume, 0);  
  arduboy.display();
}
