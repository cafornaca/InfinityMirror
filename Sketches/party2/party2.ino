
// DEFINITIONS: 
#include <Adafruit_NeoPixel.h>
#define PIN 6 // PIN definition 
#define NUMPIXELS 60 // Number of pixels
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // NeoPixel set-up
int delayval = 100; // Delay time to start
int rateOfChange = 94; //seconds per increase or decrease

//SETUP:
void setup() {
  // Initialize NeoPixel library:
  pixels.begin(); 
}

void setAll(int r,int g,int b) {
  for(int i=0;i<61;i+=3){ 
    pixels.setPixelColor(i, pixels.Color(r, g ,b));
    pixels.setPixelColor(i-1, pixels.Color(b, r ,g));
    pixels.setPixelColor(i-2, pixels.Color(g, b ,r));
  }
}
void randomer(int r, int g, int b){
  for(int i=0;i<61;i+=3){ 
    r = rand()%215+30; // Red RGB
    g = rand()%200+40; // Green RGB
    b = rand()%195+50; // Blue RGB
    setAll(r, g ,b);//start 0,255,0 end 0,255,255
    pixels.show();
    delay(delayval);
  }
}
void colorWalk(int r, int g, int b){
  r=0;
  g=0;
  b=255;
  for(int i=0;i<61;i+=3){ 
    r+=6;
    g=200-b-i;
    b+=g-r;
    setAll(r, g ,b);
    pixels.show();
    delay(delayval);
    setAll(b, r ,g);
    pixels.show();
    delay(delayval);
    setAll(g, b ,r);
    pixels.show();
    delay(delayval);
  }
}

void comet(){
  for(int i=0; i<61; i++){
    pixels.setPixelColor(i, pixels.Color(255, 0 ,0));
    pixels.setPixelColor(i-1, pixels.Color(220, 120 ,40));
    pixels.setPixelColor(i-2, pixels.Color(200, 120 ,20));
    pixels.setPixelColor(i-3, pixels.Color(180, 140 ,0));
    pixels.setPixelColor(i-4, pixels.Color(160, 120 ,0));
    pixels.setPixelColor(i-5, pixels.Color(140, 100 ,0));
    pixels.setPixelColor(i-6, pixels.Color(0, 0 ,0));
    pixels.show();
    delay(delayval);
  }
}
void explosion(int r, int g, int b){
  for(int i = 0; i<85; i++){
    r= r-3;
    g= g*0.9;
    b= b*0.9;
    for(int i=0;i<61;i++){ 
      pixels.setPixelColor(i, pixels.Color(r, g ,b));
    }
    pixels.show();
    delay(delayval);
  }
}

void greenify(){
    for(int i=0;i<61;i++){ 
      pixels.setPixelColor(i, pixels.Color(0,0,0));
    }
  for(int i = 0; i<85; i++){
    pixels.setPixelColor(rand()%61, pixels.Color(rand()%30,rand()%60+190,rand()%30));
    pixels.show();
    delay(delayval);
  }
}
// LOOP:

void loop() {
  int r = 255; // Red RGB
  int g = 255; // Green RGB
  int b = 255; // Blue RGB
  comet();
  explosion(r,g,b);
  randomer(r,g,b);
  colorWalk(r,g,b);
  greenify();
} // end loop

