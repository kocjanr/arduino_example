// TOOLS -> BOARD: Arduino/Genuiono Uno
// TOOLS -> PORT: COM3

// LED +: GND
// LED -: Pin 13

int ledPin = 13;
int count = 0;
int rpm = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  count++;

  if(rpm == 200){
        Serial.println("RPM = 200");
        digitalWrite(ledPin,LOW);
        delay(100);
        digitalWrite(ledPin,HIGH);
        delay(100);
        digitalWrite(ledPin,LOW);
        rpm = 0;        
       }    

  if(count == 500){    
    count = 0;
    rpm += 25;
    Serial.print("RPM: ");
    Serial.println(rpm);      
  }
 
}  
