#include <Adafruit_NeoPixel.h>

#include <Adafruit_NeoPixel.h>

#include <Adafruit_NeoPixel.h>

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
  for(int k = 0;k<60;k+=5){//Each k is 1 hour
    pixels.setPixelColor(k, pixels.Color(0,0,200)); //blue for an hour marking
    pixels.show();
    for(int j = 0; j<60; j++){//Each j is 1 minute
      //seconds
      if (j!=k){
          pixels.setPixelColor(j, pixels.Color(100,0,200)); // bluish purple color for minute and hour
          pixels.show();
        } else{  
          pixels.setPixelColor(j, pixels.Color(0,200,0)); //creates purple light for minutes
          pixels.show();
        }
      for(int i = 0;i<NUMPIXELS;i++){ //Each i is 1 second
        if (i!=j && i!=k){// seconds do not show over other time units
          pixels.setPixelColor(i, pixels.Color(200,0,0));// creates red light for seconds 
          pixels.show(); 
          delay(delayval); // Delay for a second, no clean up on the seconds ticker to make growing trail. This also handles time for the outside loops (60 loops of i = 1 loop of j, 60 j's = 1 k)
          pixels.setPixelColor(i, pixels.Color(0,0,0));
        }
        
      }
      if (j!=k){//will only turn off pixel if minute and hour aren't overlapping
          pixels.setPixelColor(j, pixels.Color(0,0,0)); //This will never have any other color showing in it
          pixels.show();
        } else{  //returns to hour color
          pixels.setPixelColor(k, pixels.Color(0,0,200)); 
          pixels.show();
        } 
    }
    pixels.setPixelColor(k, pixels.Color(0,0,0)); //This will never have any other color showing in it
    pixels.show();
  }
}
