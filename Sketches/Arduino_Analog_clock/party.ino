// NeoPixel analog clock by Gavin Plesko
// Some code borrowed from https://github.com/adafruit/Adafruit_NeoPixel/tree/master/examples/simple

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      60

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 0; // delay for a second

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}



void loop() {



  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
      for(int i = 0;i<NUMPIXELS;i++){ //Each i is 1 second

          


          
          pixels.setPixelColor(i, pixels.Color(i,i*3,i*2));
          pixels.setPixelColor(NUMPIXELS-i, pixels.Color(90,i*3,0));
          delay(delayval);
        
      }
}
