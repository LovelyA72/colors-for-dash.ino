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
    /*
      Lovelive Aqours charactor color list:
      #F08300 Chika
      #FF7575
      #1BD5A8
      #FF2A2A
      #68D1FF
      #FFFFFF
      #E2C800
      #B761FF
      #F273C4
    */
    case 1: 
      setColor(240,131,0);
      delay(50);
      Serial.print("1 Chika Takami\n");
      break;
    case 2:
      setColor(255,117,117);
      delay(50);
            Serial.print("2 Riko Sakurauchi\n");
      break;
    case 3:
      setColor(27,213,168);
      delay(50);
      Serial.print("3 Kanan Matsuura\n");
      break;
    case 4:
      setColor(255,42,42);
      delay(50);
      Serial.print("4 Dia Kurosawa\n");
      break;
    case 5:
      setColor(104,209,255);
      delay(50);
      Serial.print("5 You Watanabe\n");
      break;
    case 6:
      setColor(255, 255, 255);
      delay(50);
      Serial.print("6 Yoshiko Tsushima\n");
      break;
    case 7:
      setColor(226,200,0);
      delay(50);
      Serial.print("7 Hanamaru Kunikida\n");
      break;
    case 8:
      setColor(85, 0, 208);
      delay(50);
      Serial.print("8 Mari Ohara\n");
      break;
    case 9:
      setColor(183,97,255);
      delay(50);
      Serial.print("9 Ruby Kurosawa\n");
      break;
    case 10:
    setColor(240,131,0);
      Serial.print("counter reset\n");
      pushCount = 1;
      break;
    default:
      break;
  }
}
