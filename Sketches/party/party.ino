// NeoPixel analog clock by Gavin Plesko
// Some code borrowed from https://github.com/adafruit/Adafruit_NeoPixel/tree/master/examples/simple

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS     60

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 50; // delay for a second

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}



void loop() {



  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  for(int k = 1; k<4; k++){
  for(int i = 20;i<NUMPIXELS+20;i++){ //Each i is 1 second
     pixels.setPixelColor(i, pixels.Color(i*k,k*25,i*k));
     pixels.setPixelColor(NUMPIXELS-i, pixels.Color(k*50,i*k,i*k));
     
     pixels.show();
     pixels.setPixelColor(i-20, pixels.Color(0,k*36,i*k));
     pixels.setPixelColor(NUMPIXELS-(20+i), pixels.Color(i*k,20*k,i));
     pixels.show();

    delay(delayval); 
    

       
  }
  }
}
