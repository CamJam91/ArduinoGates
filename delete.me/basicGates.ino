
const int gateA = 8;
const int gateB = 9;
const int gateAnd = 2;
const int gateNand = 3;
const int gateOr = 4;
const int gateNor = 5;
const int gateXor = 6;
const int gateXnor = 7;
int stateA = 0;
int stateB = 0; 
void setup() {
  pinMode(gateA, INPUT);
  pinMode(gateB, INPUT);
  pinMode(gateAnd, OUTPUT);
  pinMode(gateNand, OUTPUT);
  pinMode(gateOr, OUTPUT);
  pinMode(gateNor, OUTPUT);
  pinMode(gateXor, OUTPUT);
  pinMode(gateXnor, OUTPUT);
}

void loop() {
  stateA = digitalRead(gateA);
  stateB = digitalRead(gateB);
  
  //creates andgate
  if (stateA == HIGH && stateB == HIGH){
    digitalWrite(gateAnd, HIGH);
  }
  else {
    digitalWrite(gateAnd, LOW);
  };

  //creates nand gate
  if (stateA == HIGH && stateB == HIGH) {
    digitalWrite(gateNand, LOW);
  }
  else {
    digitalWrite(gateNand, HIGH);
  };

  //create or gate
  if (stateA == LOW && stateB == LOW){
    digitalWrite(gateOr, LOW);
  }
  else{
    digitalWrite(gateOr, HIGH);
  };
  
  //create nor gate
  if (stateA == LOW && stateB == LOW){
    digitalWrite(gateNor, HIGH);
  }
  else{
    digitalWrite(gateNor, LOW);
  };

  //create Xor gate
  if (stateA == HIGH && stateB == LOW || stateA == LOW && stateB == HIGH){
    digitalWrite(gateXor, HIGH);
  }
  else{
    digitalWrite(gateXor, LOW);
  };

  //create Xnor gate
  if (stateA == HIGH && stateB == HIGH || stateA == LOW && stateB == LOW){
    digitalWrite(gateXnor, HIGH);
  }
  else{
    digitalWrite(gateXnor, LOW);
  };
}
