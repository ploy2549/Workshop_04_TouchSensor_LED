//set pin number
const int touchpin = 4;
const int ledpin = 16;

//change with your threshold value
const int threshold = 20;

//variable for storing the touch pin value
int touchValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

//initiallze the led pin as an output :
pinMode(ledpin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  touchValue = touchRead(touchpin);
  Serial.print(touchValue);
  if (touchValue<threshold) {
    //turn led on
    digitalWrite(ledpin, HIGH);
    Serial.println(" -LED On");
  } else {
    //turn led off
    digitalWrite(ledpin, LOW);
    Serial.println(" -LED Off");
  }
  delay(5000);
}
