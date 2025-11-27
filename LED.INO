const int led = 2; 
const int led1 = 25;

void setup() {
  Serial1.begin(115200);
  Serial1.println("Hello, Raspberry Pi Pico!");
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(led1, HIGH);
  Serial1.println("LED is ON");
  delay(500);

  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  Serial1.println("LED is OFF");
  delay(500);
}


#CHANGE
