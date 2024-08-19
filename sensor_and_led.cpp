/*//Exhibition Kaset Fair
 ******************************************************************************
 * @file  sensor_and_led.ino
 * @brief A brief description of the module.
 *        Description can continue over multiple lines if needed.
 *
 * Copyright (C) 2024 Idektep Co. Ltd.
 * All Rights Reserved.
 ******************************************************************************
 */

#include <NewPing.h>

#define FRONT_RIGHT_LED_PIN 16 
#define FRONT_LEFT_LED_PIN 17 
#define BUZZER_PIN 18
#define DELAY_BLINK 500

#define ULTRASONIC_ECHO_PIN 35
#define ULTRASONIC_TRIG_PIN 5
#define MAX_DISTANCE 50 

NewPing sonar(ULTRASONIC_TRIG_PIN, ULTRASONIC_ECHO_PIN, MAX_DISTANCE);

/*-----------------------------------------------*/
void SensorAndLedSetup()
{
  pinMode(FRONT_RIGHT_LED_PIN, OUTPUT);
  pinMode(FRONT_LEFT_LED_PIN, OUTPUT);

  pinMode(ULTRASONIC_ECHO_PIN, INPUT);
  pinMode(ULTRASONIC_TRIG_PIN, OUTPUT);

  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);    
}
/*-----------------------------------------------*/
void Ultrasonic()
{ 
  MeasureDistance = sonar.ping_cm();
  String DistanceText = String(MeasureDistance) + " Cm";
  Serial.println(MeasureDistance);
}
/*-----------------------------------------------*/
void BuzzerOn()
{
  digitalWrite(BUZZER_PIN, 1);
  //tone(BUZZER_PIN, 300);
}
/*-----------------------------------------------*/
void BuzzerOff()
{
  digitalWrite(BUZZER_PIN, 0);
}
/*-----------------------------------------------*/
void BuzzerBlink()
{
  BuzzerOn();
  delay(DELAY_BLINK);
  BuzzerOff();
  delay(DELAY_BLINK);
}
/*-----------------------------------------------*/
void FrontRightLedOn()
{
  digitalWrite(FRONT_RIGHT_LED_PIN, HIGH);
}
/*-----------------------------------------------*/
void FrontRightLedOff()
{
  digitalWrite(FRONT_RIGHT_LED_PIN, LOW);
}
/*-----------------------------------------------*/
void FrontLeftLedOn()
{
  digitalWrite(FRONT_LEFT_LED_PIN, HIGH);
}
/*-----------------------------------------------*/
void FrontLeftLedOff()
{
  digitalWrite(FRONT_LEFT_LED_PIN, LOW);
}
/*-----------------------------------------------*/
void FrontLedblink()
{
  FrontRightLedOn();
  FrontLeftLedOn();
  delay(DELAY_BLINK);
  FrontRightLedOff();
  FrontLeftLedOff();
  delay(DELAY_BLINK);
}
/*-----------------------------------------------*/
void FrontLedOn()
{
  FrontRightLedOn();
  FrontLeftLedOn();
}
/*-----------------------------------------------*/
void FrontLedOff()
{
  FrontRightLedOff();
  FrontLeftLedOff();
}
/*-----------------------------------------------*/
void FrontRightLedBlink()
{
  FrontRightLedOn();
  delay(DELAY_BLINK);
  FrontRightLedOff();
  delay(DELAY_BLINK);
}
/*-----------------------------------------------*/
void FrontLeftLedBlink()
{
  FrontLeftLedOn();
  delay(DELAY_BLINK);
  FrontLeftLedOff();
  delay(DELAY_BLINK);
}
/*-----------------------------------------------*/
