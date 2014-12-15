#define LEFT_EYE 10
#define RIGHT_EYE 11

void setup() {
 pinMode(LEFT_EYE,OUTPUT);
 pinMode(RIGHT_EYE,OUTPUT);

}


void loop() {
  digitalWrite(LEFT_EYE, HIGH);
  digitalWrite(RIGHT_EYE, HIGH);
  delay (1500);
  digitalWrite(LEFT_EYE, HIGH);
  digitalWrite(RIGHT_EYE, LOW);
  delay(250);
  digitalWrite(LEFT_EYE, LOW);
  digitalWrite(RIGHT_EYE, HIGH);
  delay(500);
  digitalWrite(LEFT_EYE, LOW);
  digitalWrite(RIGHT_EYE, LOW);
  delay(1500);
  }

