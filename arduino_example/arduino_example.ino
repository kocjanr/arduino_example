// TOOLS -> BOARD: Arduino/Genuiono Uno
// TOOLS -> PORT: COM3

// LED +: GND
// LED -: Pin 13

int ledPin = 13;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  count++;
  Serial.println(count);
  digitalWrite(ledPin,LOW);
  
  if(count == 500){
    Serial.println("LED ON");
    count = 0;
    digitalWrite(ledPin,HIGH);
  }  
}
