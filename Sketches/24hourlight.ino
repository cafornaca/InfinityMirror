// Charlie Fornaca's Daytime-Nighttime Lighting
// With NeoPixel :  https://github.com/adafruit/Adafruit_NeoPixel/tree/master/examples/simple

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Assignment of pin and number of LEDs on the strip
#define PIN            6
#define NUMPIXELS     60

// Some global variables
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 0; 


void setup() {
  // All we do for setup is initialize the NeoPixel librar:
  pixels.begin();
}

void loop() {
  pixels.show();
  pixels.setPixelColor () 

}
