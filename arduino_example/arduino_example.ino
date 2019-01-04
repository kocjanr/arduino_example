int ledPin = 13;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  count++;
  digitalWrite(ledPin,LOW);
  if(count == 200){
  count = 0;
  digitalWrite(ledPin,HIGH);
  }
}
