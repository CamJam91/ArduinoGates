int gateA = 7;
int gateB = 8;
int gateC = 9;
int stateA = 0;
int stateB = 0;
int stateC = 0;
void setup() 
{
  pinMode(gateA, INPUT);
  pinMode(gateB, INPUT);
  pinMode(gateC, OUTPUT);
}

void loop() {
  stateA = digitalRead(gateA);
  stateB = digitalRead(gateB);
  while (stateA
}
