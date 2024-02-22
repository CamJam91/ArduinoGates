  //Pin inputs & inputs, the int value is the physical pin on the board
  const int
  inA = 1,
  inB = 2,
  outSum = 3,
  outCarry = 4;

  //gates for use in half adder
  int
  andGate(int a, int b),
  xorGate(int a, int b,);

  //actual half adder fucntion split into 2 outputs, sum and carry
  int
  halfsum(int a, int b),
  halfCarry(int a, int b);

void setup() {
  //pinModes: set up physical pins to be input and outputs

  pinMode(inA, INPUT);
  pinMode(inB, INPUT);
  pinMode(outSum, OUTPUT);
  pinMode(outCarry, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}


int andGate(int a, int b){
  if(int a == HIGH && int b == HIGH){
    
  }
}