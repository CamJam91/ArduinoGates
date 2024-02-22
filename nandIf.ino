
const int gateA = 7;
const int gateB = 8;
const int gateAnd = 9;
const int gateNand = 10;
const int gateNor = 11;
int stateA = 0;
int stateB = 0; 
void setup() {
  pinMode(gateA, INPUT);
  pinMode(gateB, INPUT);
  pinMode(gateAnd, OUTPUT);
  pinMode(gateNand, OUTPUT);
  pinMode(gateNor, OUTPUT);
}

void loop() {
  stateA = digitalRead(gateA);
  stateB = digitalRead(gateB);
  digitalWrite(gateNor, HIGH);
  //creates andgate for C
  if (stateA == HIGH && stateB == HIGH){
    digitalWrite(gateAnd, HIGH);
  }
  else {
    digitalWrite(gateAnd, LOW);
  };

  //creates nand gate for D
  if (stateA == HIGH && stateB == HIGH) {
    digitalWrite(gateNand, LOW);
  }
  else {
    digitalWrite(gateNand, HIGH);
  };
}
