/*
 * This program is for checking the functionality of the all the Sensors
 * After Uploading the code Open the Serial Monitor
 */
int TopLeftLight=2;     //Light Sensors pinout
int TopRightLight=3;
int BottomLeftLight=4;
int BottomRightLight=7;

int TopLeftObstacle=8;     //Obstacle Avoidance Sensors pinout
int TopRightObstacle=9;
int BottomLeftObstacle=12;
int BottomRightObstacle=13;

int Inputs[]={2,3,4,7,8,9,12,13};

void setup() {
  for(int i=0;i<8;i++)
  {
    pinMode(Inputs[i],INPUT);
  }
  Serial.begin(9600);
  Serial.println("Starting Sensor Reading:");
}

void loop() {
  int TLL=digitalRead(TopLeftLight);
  int TRL=digitalRead(TopRightLight);
  int BLL=digitalRead(BottomLeftLight);
  int BRL=digitalRead(BottomRightLight);

  int TLO=digitalRead(TopLeftObstacle);
  int TRO=digitalRead(TopRightObstacle);
  int BLO=digitalRead(BottomLeftObstacle);
  int BRO=digitalRead(BottomRightObstacle);

  Serial.print("Light Sensors: Top Left: ");
  Serial.print(TLL);
  Serial.print("\t Top Right: ");
  Serial.print(TRL);
  Serial.print("\t Bottom Left: ");
  Serial.print(BLL);
  Serial.print("\t Bottom Right: ");
  Serial.println(BRL);
  delay(300);
  
  Serial.print("Obstacle Sensors: Top Left: ");
  Serial.print(TLO);
  Serial.print("\t Top Right: ");
  Serial.print(TRO);
  Serial.print("\t Bottom Left: ");
  Serial.print(BLO);
  Serial.print("\t Bottom Right: ");
  Serial.println(BRO);
  Serial.print("\n\n");
  delay(700);  
}
