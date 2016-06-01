// 24-Hour Circadian LightCycle by Charlie Fornaca
// Some code made from https://github.com/adafruit/Adafruit_NeoPixel/tree/master/examples/simple

// DEFINITIONS: 
#include <Adafruit_NeoPixel.h>
#define PIN 6 // PIN definition 
#define NUMPIXELS 60 // Number of pixels
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // NeoPixel set-up
int delayval = 1000; // Delay time to start. Set to 10 for demo.
int rateOfChange = 94; //seconds per increase or decrease

//SETUP:
void setup() {
  // Initialize NeoPixel library:
  pixels.begin(); 
}

//LIGHTS: 
void setAll(int r,int g,int b) {
  pixels.setPixelColor(1, pixels.Color(r, g ,b));
  pixels.setPixelColor(2, pixels.Color(r, g ,b));
  pixels.setPixelColor(3, pixels.Color(r, g ,b));
  pixels.setPixelColor(4, pixels.Color(r, g ,b));
  pixels.setPixelColor(5, pixels.Color(r, g ,b));
  pixels.setPixelColor(6, pixels.Color(r, g ,b));
  pixels.setPixelColor(7, pixels.Color(r, g ,b));
  pixels.setPixelColor(8, pixels.Color(r, g ,b));
  pixels.setPixelColor(9, pixels.Color(r, g ,b));
  pixels.setPixelColor(10, pixels.Color(r, g ,b));
  pixels.setPixelColor(11, pixels.Color(r, g ,b));
  pixels.setPixelColor(12, pixels.Color(r, g ,b));
  pixels.setPixelColor(13, pixels.Color(r, g ,b));
  pixels.setPixelColor(14, pixels.Color(r, g ,b));
  pixels.setPixelColor(15, pixels.Color(r, g ,b));
  pixels.setPixelColor(16, pixels.Color(r, g ,b));
  pixels.setPixelColor(17, pixels.Color(r, g ,b));
  pixels.setPixelColor(18, pixels.Color(r, g ,b));
  pixels.setPixelColor(19, pixels.Color(r, g ,b));
  pixels.setPixelColor(20, pixels.Color(r, g ,b));
  pixels.setPixelColor(21, pixels.Color(r, g ,b));
  pixels.setPixelColor(22, pixels.Color(r, g ,b));
  pixels.setPixelColor(23, pixels.Color(r, g ,b));
  pixels.setPixelColor(24, pixels.Color(r, g ,b));
  pixels.setPixelColor(25, pixels.Color(r, g ,b));
  pixels.setPixelColor(26, pixels.Color(r, g ,b));
  pixels.setPixelColor(27, pixels.Color(r, g ,b));
  pixels.setPixelColor(28, pixels.Color(r, g ,b));
  pixels.setPixelColor(29, pixels.Color(r, g ,b));
  pixels.setPixelColor(30, pixels.Color(r, g ,b));
  pixels.setPixelColor(31, pixels.Color(r, g ,b));
  pixels.setPixelColor(32, pixels.Color(r, g ,b));
  pixels.setPixelColor(33, pixels.Color(r, g ,b));
  pixels.setPixelColor(34, pixels.Color(r, g ,b));
  pixels.setPixelColor(35, pixels.Color(r, g ,b));
  pixels.setPixelColor(36, pixels.Color(r, g ,b));
  pixels.setPixelColor(37, pixels.Color(r, g ,b));
  pixels.setPixelColor(38, pixels.Color(r, g ,b));
  pixels.setPixelColor(39, pixels.Color(r, g ,b));
  pixels.setPixelColor(40, pixels.Color(r, g ,b));
  pixels.setPixelColor(41, pixels.Color(r, g ,b));
  pixels.setPixelColor(42, pixels.Color(r, g ,b));
  pixels.setPixelColor(43, pixels.Color(r, g ,b));
  pixels.setPixelColor(44, pixels.Color(r, g ,b));
  pixels.setPixelColor(45, pixels.Color(r, g ,b));
  pixels.setPixelColor(46, pixels.Color(r, g ,b));
  pixels.setPixelColor(47, pixels.Color(r, g ,b));
  pixels.setPixelColor(48, pixels.Color(r, g ,b));
  pixels.setPixelColor(49, pixels.Color(r, g ,b));
  pixels.setPixelColor(50, pixels.Color(r, g ,b));
  pixels.setPixelColor(51, pixels.Color(r, g ,b));
  pixels.setPixelColor(52, pixels.Color(r, g ,b));
  pixels.setPixelColor(53, pixels.Color(r, g ,b));
  pixels.setPixelColor(54, pixels.Color(r, g ,b));
  pixels.setPixelColor(55, pixels.Color(r, g ,b));
  pixels.setPixelColor(56, pixels.Color(r, g ,b));
  pixels.setPixelColor(57, pixels.Color(r, g ,b));
  pixels.setPixelColor(58, pixels.Color(r, g ,b));
  pixels.setPixelColor(59, pixels.Color(r, g ,b));
  pixels.setPixelColor(60, pixels.Color(r, g ,b));
}

// LOOP:
void loop() {
int r = 255; // Red RGB
int g = 0; // Green RGB
int b = 0; // Blue RGB

for (int i = 0; i < 21600000; i++){ // Midnight -> Sunrise
  if(i%rateOfChange == 0){
  g++;
      setAll(r, g ,b);//start 0,255,0 end 0,255,255
      pixels.show();

  }
        delay(delayval);
}

for (int i = 0; i < 21600000; i++){ // Sunrise -> Noon
  if(i%rateOfChange == 0){
  r--;
  b++;
      setAll(r, g ,b);//start 0,255,0 end 0,255,255
      pixels.show();

  }
        delay(delayval);
}

for (int i = 0; i < 21600000; i++){ // Noon -> Sunset
  if(i%rateOfChange == 0){
  r++;
  b--;
      setAll(r, g ,b); // start 0,255,0 end 0,255,255
      pixels.show();

  }
        delay(delayval);
}

for (int i = 0; i < 21600000; i++){ // Sunset -> Midnight
  if(i%rateOfChange == 0){
  g--;
      setAll(r, g, b); //start 0,255,0 end 0,255,255
      pixels.show();

    }
       delay(delayval);
  }
 
} // end day

