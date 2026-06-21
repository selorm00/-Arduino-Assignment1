int startValue = 5;

void flashLED(int times){
  for (int read= 0; read< times; read++){
    digitalWrite(13,1);
    delay(1000);
    digitalWrite(13,0);
    delay(1000);
  }
}

void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  
  Serial.println("=== Smart Countdown Starting ===");
  
  while( startValue >= 1){
    Serial.print("Count: ");
    Serial.println(startValue);
    flashLED(startValue);
    startValue = startValue - 1;
  }
  Serial.println("=== Countdown Complete ===");
}

void loop(){
  
}