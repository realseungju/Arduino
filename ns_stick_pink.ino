#include <NS_Rainbow.h>

#define PIN 9
#define N_CELL 8

// Parameter 1 = number of cells (max: 512)
// Parameter 2 = Arduino pin number (default pin: 9)
//NS_Rainbow ns_stick = NS_Rainbow(N_CELL);
NS_Rainbow ns_stick = NS_Rainbow(N_CELL,PIN);

void setup() {
  delay(100);
  ns_stick.begin();
  //ns_stick.setBrightness(128);  // range: 0 ~ 255, default: 255  
}

void loop() {
  unsigned int   t = 500;   // t: delay time
  int i=0;

  ns_stick.setColor(0, 255,   102,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(2, 255,   102,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(4, 255,   102,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(6, 255,   102,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(1, 255,   0,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(3, 255,   0,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(5, 255,   0,   255);
  ns_stick.show();
  delay(t);
  ns_stick.setColor(7, 255,   0,   255);
  ns_stick.show();
  delay(t);
  delay(1000);
  
  for (i=0;i<8;i=i+2)
  {
    ns_stick.setColor(i, 0,   0,   0);
    ns_stick.show();
  }

  delay(1000);

  for (i=0;i<8;i=i+1)
  {
    ns_stick.setColor(i, 0,   0,   0);
    ns_stick.show();
  }

  delay(1000);
 
}
