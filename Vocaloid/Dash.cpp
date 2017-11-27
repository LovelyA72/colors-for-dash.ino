#include "Dash.h"
#include "Arduino.h"

void Dash::colorPin(int redP, int greenP, int blueP){
  redPin = redP;
  greenPin = greenP;
  bluePin = blueP;
}

void Dash::setColor(int red, int green, int blue) 
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void Dash::setLED(){
    pushCount = pushCount +1;
    switch (pushCount) {
    case 1: 
      setColor(57,197,187);
      delay(50);
      Serial.print("1 Miku Hatsune\n");
      break;
    case 2:
      setColor(255,165,0);
      delay(50);
            Serial.print("2 Rin Kagamine\n");
      break;
    case 3:
      setColor(255,226,17);
      delay(50);
      Serial.print("3 Len Kagamine\n");
      break;
    case 4:
      setColor(102,204,255);
      delay(50);
      Serial.print("5 Tianyi Luo\n");
      break;
    case 5:
      setColor(238, 0, 0);
      delay(50);
      Serial.print("6 Ling Yuezheng\n");
      break;
    case 6:
    setColor(57,197,187);
      Serial.print("counter reset\n");
      pushCount = 1;
      break;
    default:
      break;
  }
}
