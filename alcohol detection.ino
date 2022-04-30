#include <Wire.h>
#include <LiquidCrystal_I2C.h>


#define MQ3pin 0 

int sensorvalue;  
int relaypin = 8;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
  lcd.init();
  pinMode(relaypin, OUTPUT);
  digitalWrite(relaypin, LOW); 
  delay(10000); // allow the MQ3 to warm upA
      
}

void loop() 
{  
int sensorvalue = analogRead(MQ3pin); 
 if (relaypin, LOW);
     if (sensorvalue  < 500) 
       {
         digitalWrite(relaypin, HIGH);
       }
 if (relaypin , HIGH);
     if (sensorvalue >= 500) 
        {
          lcd.init();
          lcd.backlight();
        }
}
