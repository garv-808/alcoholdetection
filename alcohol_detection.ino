#include <Wire.h> 
#include <LiquidCrystal_I2C.h> //include this library for I2C


#define MQ3pin 0 //Define the AO pin of MQ3

int sensorvalue;  //define the value to be read
int relaypin = 8; //Define the pin of relay

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
  lcd.init(); //to  initialize the lcd
  pinMode(relaypin, OUTPUT); 
  digitalWrite(relaypin, LOW); //turn off motor
  delay(10000); // allow the MQ3 to warm up 
      
}

void loop() 
{  
int sensorvalue = analogRead(MQ3pin); //store the reading of sensor in variable
 if (relaypin, LOW); //if the pin is low OR motor is off
     if (sensorvalue  < 500) 
       {
         digitalWrite(relaypin, HIGH); //turn on the motor
       }
 if (relaypin , HIGH); //if the pin is high OR motor is on
     if (sensorvalue >= 500) 
        {
          lcd.init(); //to  initialize the lcd
          lcd.backlight(); //to turn on backlight
        }
}
