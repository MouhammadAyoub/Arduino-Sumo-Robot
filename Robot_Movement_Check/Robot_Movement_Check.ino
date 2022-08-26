/*
 * This program is for testing the movement of the robot
 * The robot must move Forward, then backward, then rotate to the left, then rotate to the right
 * If the robot behaves as described previousely then all the connections are good
 */

int Motors[]={5,6,10,11}; //Array named Motors holding the 4 pins that will control the robot movement
                          //Pins 5 and 6 are for the left motors.
                          //Pins 10 and 11 are for the right motors.


void setup() {
for(int i=0;i<4;i++)//for loop that will iterate 4 times holding at each iteration a different value for i{0,1,2,3}
  {
    pinMode(Motors[i],OUTPUT);
  }
  delay(2000);//a short delay to set the robot for moving
}

void loop() {
  MoveForward(255,255);   //Feel free to change the parameters to any value between 0-255
delay(1500);              //a short delay to observe the robot moving forward
Stop();                   //after accomplishing the previous function, stop for 1 second
delay(1000);

  MoveBackward(255,255);  //Feel free to change the parameters to any value between 0-255
delay(1500);
Stop();
delay(1000);

  TurnLeft(255,255);      //Feel free to change the parameters to any value between 0-255
delay(1500);
Stop();
delay(1000);

  TurnRight(255,255);     //Feel free to change the parameters to any value between 0-255
delay(1500);
Stop();
delay(1000);
}

void MoveForward(int LeftSpeed, int RightSpeed)
{
  analogWrite(Motors[0], LeftSpeed);
  analogWrite(Motors[1], LOW);
  analogWrite(Motors[2], RightSpeed);
  analogWrite(Motors[3], LOW);
}


void MoveBackward(int LeftSpeed, int RightSpeed)
{
  analogWrite(Motors[0], LOW);
  analogWrite(Motors[1], LeftSpeed);
  analogWrite(Motors[2], LOW);
  analogWrite(Motors[3], RightSpeed);
}

void TurnLeft(int LeftSpeed, int RightSpeed)
{
  analogWrite(Motors[0], LeftSpeed);
  analogWrite(Motors[1], LOW);
  analogWrite(Motors[2], LOW);
  analogWrite(Motors[3], RightSpeed);
}

void TurnRight(int LeftSpeed, int RightSpeed)
{
  analogWrite(Motors[0], LOW);
  analogWrite(Motors[1], LeftSpeed);
  analogWrite(Motors[2], LOW);
  analogWrite(Motors[3], RightSpeed);
}
void Stop()
{
  analogWrite(Motors[0], LOW);
  analogWrite(Motors[1], LOW);
  analogWrite(Motors[2], LOW);
  analogWrite(Motors[3], LOW);
}


