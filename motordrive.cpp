/*//Exhibition Kaset Fair
 ******************************************************************************
 * @file  motordrive.ino
 * @brief A brief description of the module.
 *        Description can continue over multiple lines if needed.
 *
 * Copyright (C) 2024 Idektep Co. Ltd.
 * All Rights Reserved
 ******************************************************************************
 */
//DISCLAIMER, THIS IS A STOCK VERSION OF THE CODE USED IN IDEKTEP MINI ROBOT CHALLENGE
#define LEFT_FRONT_MOTOR_DRIVE1_PIN 12
#define LEFT_FRONT_MOTOR_DRIVE2_PIN 13
#define PWM_LEFT_FRONT_MOTOR_DRIVE_PIN 15
#define LEFT_BACK_MOTOR_DRIVE1_PIN 32
#define LEFT_BACK_MOTOR_DRIVE2_PIN 33
#define PWM_LEFT_BACK_MOTOR_DRIVE_PIN 2
#define RIGHT_FRONT_MOTOR_DRIVE1_PIN 25
#define RIGHT_FRONT_MOTOR_DRIVE2_PIN 26
#define PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN 4
#define RIGHT_BACK_MOTOR_DRIVE1_PIN 27
#define RIGHT_BACK_MOTOR_DRIVE2_PIN 14
#define PWM_RIGHT_BACK_MOTOR_DRIVE_PIN 19

#define FACTOR_MOTOR1 1
#define FACTOR_MOTOR2 0.9 //too fast
#define FACTOR_MOTOR3 1
#define FACTOR_MOTOR4 1
/*-----------------------------------------------*/
void MotorDriveSetup()
{
  pinMode(LEFT_FRONT_MOTOR_DRIVE1_PIN, OUTPUT);
  pinMode(LEFT_FRONT_MOTOR_DRIVE2_PIN, OUTPUT);
  pinMode(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, OUTPUT);

  pinMode(LEFT_BACK_MOTOR_DRIVE1_PIN, OUTPUT);
  pinMode(LEFT_BACK_MOTOR_DRIVE2_PIN, OUTPUT);
  pinMode(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, OUTPUT);
  
  pinMode(RIGHT_FRONT_MOTOR_DRIVE1_PIN, OUTPUT);
  pinMode(RIGHT_FRONT_MOTOR_DRIVE2_PIN, OUTPUT);
  pinMode(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, OUTPUT);
  
  pinMode(RIGHT_BACK_MOTOR_DRIVE1_PIN, OUTPUT);
  pinMode(RIGHT_BACK_MOTOR_DRIVE2_PIN, OUTPUT);
  pinMode(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, OUTPUT);

  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  digitalWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, LOW);

  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  digitalWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, LOW);

  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  digitalWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, LOW);

  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  digitalWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, LOW);
}
/*-----------------------------------------------*/
void Forward(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/

void Backward(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void RotateRight(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void RotateLeft(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void SlideLeft(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void SlideRight(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void SlideLeftForward(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void SlideRightForward(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void SlideLeftBackward(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void SlideRightBackward(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void LargeRotateRight(uint8_t Speed)
{
  uint8_t SpeedM1 = Speed * FACTOR_MOTOR1;
  uint8_t SpeedM2 = Speed * FACTOR_MOTOR2;
  uint8_t SpeedM3 = Speed * FACTOR_MOTOR3;
  uint8_t SpeedM4 = Speed * FACTOR_MOTOR4;
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, HIGH);
  analogWrite(PWM_LEFT_FRONT_MOTOR_DRIVE_PIN, SpeedM1);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_LEFT_BACK_MOTOR_DRIVE_PIN, SpeedM2);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, HIGH);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_FRONT_MOTOR_DRIVE_PIN, SpeedM3);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
  analogWrite(PWM_RIGHT_BACK_MOTOR_DRIVE_PIN, SpeedM4);
}
/*-----------------------------------------------*/
void Stop() 
{
/*-----------------------------------------------*///Motor 1
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_FRONT_MOTOR_DRIVE2_PIN, LOW);
/*-----------------------------------------------*///Motor 2
  digitalWrite(LEFT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(LEFT_BACK_MOTOR_DRIVE2_PIN, LOW);
/*-----------------------------------------------*///Motor 3
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_FRONT_MOTOR_DRIVE2_PIN, LOW);
/*-----------------------------------------------*///Motor 4
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE1_PIN, LOW);
  digitalWrite(RIGHT_BACK_MOTOR_DRIVE2_PIN, LOW);
}
/*-----------------------------------------------*/
