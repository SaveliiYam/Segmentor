#include <Segmentor.h> //library initialization
Segmentor segment(2, 3, 4, 5, 6, 7, 8); //segmentor initialization

unsigned int currentTime = millis();
int value = 0;
void setup() {
  segment.discharge(9, 10, 11); // 7-segmentor discharge (from 1 to 4)
  
}

void loop() {
  if (currentTime - millis() >= 500){
    currentTime = millis();
    value ++;
  }
  segment.displayThree(value);
}
