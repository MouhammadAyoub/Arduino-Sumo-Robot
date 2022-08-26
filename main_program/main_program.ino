

int TopLeftLight=2;     //Light Sensors pinout
int TopRightLight=3;
int BottomLeftLight=4;
int BottomRightLight=7;

int TopLeftObstacle=8;     //Obstacle Avoidance Sensors pinout
int TopRightObstacle=9;
int BottomLeftObstacle=12;
int BottomRightObstacle=13;

int Inputs[]={2,3,4,7,8,9,12,13};

int Motors[]={5,6,10,11}; //Array named Motors holding the 4 pins that will control the robot movement
                          //Pins 5 and 6 are for the left motors.
                          //Pins 10 and 11 are for the right motors.
unsigned long StartTimer;
unsigned long Timer;


void setup() {
  for(int i=0;i<4;i++)//for loop that will iterate 4 times holding at each iteration a different value for i{0,1,2,3}
  {
    pinMode(Motors[i],OUTPUT);
  }
    for(int i=0;i<8;i++)
  {
    pinMode(Inputs[i],INPUT);
  }
  delay(5000);
}

void loop() {
  StartTimer=millis();//Never Change
  Timer=1500;//Change to edit the movement time 
  while(millis() - StartTimer < Timer && is_in_ring() && is_not_detected() )//Move Forward oblique for 1500 ms while not detecting enemy and inside ring
    MoveForward(255,125);//edit the parameter values to change the movement obliqueness
    
  StartTimer=millis();//Never Change
  Timer=1500;//Change to edit the movement time 
  
  while(millis() - StartTimer < Timer && is_in_ring() && is_not_detected() )//Move Backward oblique for 1500 ms while not detecting enemy and inside ring
    MoveBackward(255,125);//edit the parameter values to change the movement obliqueness

  if(digitalRead(TopLeftLight))//If white detected at top left move back then rotate (the movement can be changed)
  {
    MoveBackward(255,255);
    delay(500);
    TurnRight(255,255);
    delay(500);
  }
  else if(digitalRead(TopRightLight))//If white detected at top left move back then rotate (the movement can be changed)
  {
    MoveBackward(255,255);
    delay(500);
    TurnLeft(255,255);
    delay(500);
  }
  else if(digitalRead(BottomLeftLight))//If white detected at top left move back then rotate (the movement can be changed)
  {
    MoveForward(255,255);
    delay(500);
    TurnRight(255,255);
    delay(500);
  }
  else if(digitalRead(BottomRightLight))//If white detected at top left move back then rotate (the movement can be changed)
  {
    MoveForward(255,255);
    delay(500);
    TurnLeft(255,255);
    delay(500);
  }
  else
  {
      Attack();//if the robot is inside the ring and one of the Obstacle sensors detected the enemy, Launch attack!
  }
}

bool is_in_ring()
{
  //returns true if the 4 light sensors read black, i.e inside the ring
  //Assuming digitalRead(Any_Light_sensor) returns 0 if black and 1 if white:
  return (!digitalRead(BottomRightLight)&& !digitalRead(BottomLeftLight) && !digitalRead(TopRightLight) && !digitalRead(TopLeftLight));
}
bool is_not_detected()
{
  //returns true if the 4 obstacle sensors did not detect an object 
  //Assuming digitalRead(Any_Obstacle_sensor) returns 0 if no object detected and 1 if detected:
  return (!digitalRead(BottomRightObstacle)&& !digitalRead(BottomLeftObstacle) && !digitalRead(TopRightObstacle) && !digitalRead(TopLeftObstacle)); 
}

void Attack()
{
  if(digitalRead(TopLeftObstacle)&& !digitalRead(TopRightObstacle))//if only Top left sensor detects the enemy
  {
    TurnLeft(255,255);
  }
  else if(!digitalRead(TopLeftObstacle)&& digitalRead(TopRightObstacle))//if only Top right sensor detects the enemy
  {
    TurnRight(255,255);
  }
  if(digitalRead(TopLeftObstacle)&& digitalRead(TopRightObstacle))//if Top left and right sensor detects the enemy
  {
    MoveForward(255,255);
  }
    if(digitalRead(BottomLeftObstacle)&& !digitalRead(BottomRightObstacle))//if only Top left sensor detects the enemy
  {
    TurnRight(255,255);
  }
  else if(!digitalRead(BottomLeftObstacle)&& digitalRead(BottomRightObstacle))//if only Top right sensor detects the enemy
  {
    TurnLeft(255,255);
  }
  if(digitalRead(BottomLeftObstacle)&& digitalRead(BottomRightObstacle))//if Top left and right sensor detects the enemy
  {
    MoveBackward(255,255);
  }
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
