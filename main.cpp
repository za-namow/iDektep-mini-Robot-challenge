/*//Exhibition Kaset Fair
 ******************************************************************************
 * @file  main.ino
 * @brief A brief description of the module.
 *        Description can continue over multiple lines if needed.
 *
 * Copyright (C) 2024 Idektep Co. Ltd.
 * All Rights Reserved.
  /4 Feb
 ******************************************************************************
 */

#define LOW_SPEED 125
#define FAST_SPEED 255

long MeasureDistance = 0;
/*-----------------------------------------------*/
void setup() 
{
  Serial.begin(115200);
  SensorAndLedSetup();
  MotorDriveSetup();
  Serial.println("Exhibition Kaset Fair");
  MazeCompetition();
}
/*-----------------------------------------------*/
void MazeCompetition() //intend to be use
{
  ForwardToWall(FAST_SPEED, 20);
  RotateRight(180); //qr 225 | 1st perfect hit 250
  delay(400);
  Forward(FAST_SPEED);
  delay(1500);
  ForwardToWall(FAST_SPEED, 30);
  SlideRight(FAST_SPEED);
  delay(1000); //qualifying round used (900)
  Backward(FAST_SPEED);
  delay(1100);
  // Backward(0);
  // delay(50);
  ForwardToWall(FAST_SPEED, 40);
  SlideRight(FAST_SPEED);
  delay(1295); //mod from PB 1100 --> 1150 qualifying round used (1210)
  Backward(FAST_SPEED);
  delay(1000);
  ForwardToWall(FAST_SPEED, 20);
  SlideRight(FAST_SPEED);
  delay(1100); //qualify round (QR) used 1200 --> 1000
  // RotateLeft(125); //add
  delay(200); //add
  Forward(FAST_SPEED);
  delay(615); //qr 800
  SlideLeft(FAST_SPEED);
  delay(1900); //qr 2000
  Forward(FAST_SPEED);
  delay(3000);
}
/*-----------------------------------------------*/
void loop() 
{
}
/*-----------------------------------------------*/
void ForwardToWall(uint32_t Speed, uint32_t Distance)
{
  int i = 1;
  do
  {
    Ultrasonic();
    if((MeasureDistance < Distance) && (MeasureDistance > 0))
    {
      Stop();
      delay(10);
      i--;
    }
    else
    {
      Forward(Speed);
    }
  }while(i);
}

