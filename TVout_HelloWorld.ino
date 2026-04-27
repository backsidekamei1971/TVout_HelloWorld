#include <TVout.h>
#include <fontALL.h>

TVout TV;

void setup() {
  TV.begin(NTSC,120,96);
  TV.select_font(font6x8);
  TV.println("I am the TVout\nlibrary running on a freeduino\n");
  TV.delay(2500);
  TV.println("I generate a PAL\nor NTSC composite  video using\ninterrupts\n");
  TV.delay(2500);
  TV.clear_screen();
  TV.println("Lets see what\nwhat I can do");
  TV.delay(2000);
  
  //fonts
  TV.clear_screen();
  TV.println(0,0,"Multiple fonts:");
  TV.select_font(font4x6);
  TV.println("4x6 font FONT");
  TV.select_font(font6x8);
  TV.println("6x8 font FONT");
  TV.select_font(font8x8);
  TV.println("8x8 font FONT");
  TV.select_font(font6x8);
  TV.delay(2000);
  
  
  randomSeed(analogRead(0));
}

void loop() {
  
}

