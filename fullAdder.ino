  //Inputs
int inA = 4;
int inB = 5;
int inC = 6;
int sumIn = 11;
int carryIn = 12;

  /*sums and carries, fullSum and fullCarry are the actual 2 outputs
  for the full adder. sum and carry are the outputs for one of the half
  adders in our circuit and light leds to better see what gates are doing*/
  //Sums
int sum = 6;
int carry = 7;
int fullSum = 9;
int fullCarry = 10;
  //Sum States
int stateA = 0;
int stateB = 0;
int stateC = 0;
int andGateA = 0;
int andGateB = 0;
int stateSum = 0;
int stateCarry = 0;
void setup() {
  pinMode(inA, INPUT);
  pinMode(inB, INPUT);
  pinMode(inC, INPUT);
  pinMode(sum, OUTPUT);
  pinMode(carry, OUTPUT);
  pinMode(fullSum, OUTPUT);
  pinMode(fullCarry, OUTPUT);
}

void loop() {
  //states for reading inputs
  stateA = digitalRead(inA);
  stateB = digitalRead(inB);
  stateC = digitalRead(inC);
  stateSum = digitalRead(fullSum);
  stateCarry = digitalRead(fullCarry);
  //Gates for the full adder

  //Xor gate for fullSum
  if (stateCarry == HIGH && stateC == LOW || stateCarry == LOW && stateC == HIGH){
    digitalWrite(fullSum, HIGH);
  }
  else{
    digitalWrite(fullSum, LOW);
  };

  //Two and gates with outputs that are needed for final orGate to fullCarry
  if (stateCarry == HIGH && stateC == HIGH){
    digitalWrite(andGateA, HIGH);
  }
  else {
    digitalWrite(andGateA, LOW);
  };

  //orGate for fullCarry (c-out)
  if (stateSum == HIGH && andGateB == HIGH){
    digitalWrite(fullCarry, HIGH);
  }
  else {
    digitalWrite(fullCarry, LOW);
  }
  
  
  //Gates for the half adder
  //sum/xorGate
  if (stateA == HIGH && stateB == LOW || stateA == LOW && stateB == HIGH){
    digitalWrite(sum, HIGH);
  }
  else{
    digitalWrite(sum, LOW);
  };

    //Carry/andGate
   if (stateA == HIGH && stateB == HIGH){
    digitalWrite(carry, HIGH);
  }
  else {
    digitalWrite(carry, LOW);
  };
}
