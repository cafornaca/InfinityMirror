// 24-Hour Circadian Light Cycle by Charlie Fornaca
// Some code made from https://github.com/adafruit/Adafruit_NeoPixel/tree/master/examples/simple

// DEFINITIONS: 
#include <Adafruit_NeoPixel.h>
#define PIN 6 // PIN definition 
#define NUMPIXELS 60 // Number of pixels
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // NeoPixel set-up
int delayval = 0; // Delay time to start(instant)
int r; // Red RGB
int g; // G RGB
int b; // Blue RGB

//SETUP:
void setup() {
  // Initialize NeoPixel library:
  pixels.begin(); 
}

// LOOP:
void loop() {
for (int i = 60; i = NUMPIXELS; i++){
  for (int k = 0; k < 86400; k++) { // Time in seconds 

    // Red to gold
    if (k < 21600) { // Midnight -> Sunrise
      for (r = 255, g = 0, b = 0; r = 0, g = 255, b = 255; r--, g++, b++){
       pixels.setPixelColor(i, pixels.Color(r, g ,b));
       pixels.show();
       delay(delayval);
      }
    }
    // Gold to cyan
    if (k >= 21600 && k < 43200) { // Sunrise -> Noon
      for (r = 255, g = 255, b = 0; r = 0, g = 255, b = 255; r--, g++, b++){
       pixels.setPixelColor(i, pixels.Color(r, g ,b));
       pixels.show();
       delay(delayval);
      }
    }
    // Cyan to gold
    if (k >= 43200 && k < 64800) { // Noon -> Sunset
      for (r = 0, g = 255, b = 255; r = 255, g = 255, b = 0; r++, g++, b--){
       pixels.setPixelColor(i, pixels.Color(r, g ,b));
       pixels.show();
       delay(delayval);
      }
    }
    // Gold to red
    if (k >= 64800) { // Sunset -> Midnight
      for (r = 255, g = 255, b = 0; r = 255, g = 0, b = 0; r++, g--, b--){
       pixels.setPixelColor(i, pixels.Color(r, g ,b));
       pixels.show();
       delay(delayval);
      }
    }
}
}
}
