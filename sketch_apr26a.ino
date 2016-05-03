/*
 * Charlie Fornaca & Gavin Plesko
 * Microcontrollers/Arduino Project
 * CSF Spring 2016
 * 
 * "Infinity Mirror With Time-Sensitive Light Patterns"
 */

// Pin Definitions:
  // These will switch to analog once wired. For now can be 11, 10, 9
  // for simple tests.
const int RED_PIN = 11; 
const int GREEN_PIN = 10; 
const int BLUE_PIN = 9; 

// Loop Speed:
int DISPLAY_TIME = 100; // In milliseconds

// Mode:
bool DEMO = false;
bool PARTY = true;
 
void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  while (PARTY = true;){
    // Fade from midnight to sunrise:


    // Fade from sunrise to noon:


    // Fade from noon to sunset:


    // Fade from sunset to midnight:

  }

  while (PARTY = true;){
    
  }


/* Code originally from: http://blog.saikoled.com/post/43693602826/why-every-led-light-should-be-using-hsi
 * Math by Kyle Miller
 *
 * Function example takes H, S, I, and a pointer to the 
 * returned RGB colorspace converted vector. It should
 * be initialized with:
 *
 * int rgb[3];
 * 
 * in the calling function. After calling hsi2rgb
 * the vector rgb will contain red, green, and blue
 * calculated values.
 */

void hsi2rgb(float H, float S, float I, int* rgb) {
  int r, g, b;
  H = fmod(H,360); // cycle H around to 0-360 degrees
  H = 3.14159*H/(float)180; // Convert to radians.
  S = S>0?(S<1?S:1):0; // clamp S and I to interval [0,1]
  I = I>0?(I<1?I:1):0;
    
  if(H < 2.09439) {
    r = 255*I/3*(1+S*cos(H)/cos(1.047196667-H));
    g = 255*I/3*(1+S*(1-cos(H)/cos(1.047196667-H)));
    b = 255*I/3*(1-S);
  } else if(H < 4.188787) {
    H = H - 2.09439;
    g = 255*I/3*(1+S*cos(H)/cos(1.047196667-H));
    b = 255*I/3*(1+S*(1-cos(H)/cos(1.047196667-H)));
    r = 255*I/3*(1-S);
  } else {
    H = H - 4.188787;
    b = 255*I/3*(1+S*cos(H)/cos(1.047196667-H));
    r = 255*I/3*(1+S*(1-cos(H)/cos(1.047196667-H)));
    g = 255*I/3*(1-S);
  }
  rgb[0]=r;
  rgb[1]=g;
  rgb[2]=b;
  }

}
