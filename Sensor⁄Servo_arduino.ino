#include <Servo.h>

Servo myservo;  // create servo object to control a servo

const int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int x=180;

void setup() {
  int vari= 8;
    Serial.begin(9600);
    myservo.attach(10);
  superpow: ;
  if(vari>13) goto superlol;
    // attaches the servo on pin 9 to the servo object
  pinMode(vari, OUTPUT);
  pinMode(vari, OUTPUT);
  pinMode(vari, OUTPUT);
  pinMode(vari, OUTPUT);
  vari++;
  goto superpow;
  superlol: ;

}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)

  float tmp=(val*5.0*100.0)/1024;
  //float volt = (val / 1024.0)*5;
 // float temp = (volt - 0.5)*100;
  //val = map(val, 0, 1023, 0, 700);
     myservo.write(0);

  if(tmp > 31){ 
  digitalWrite(13, HIGH), digitalWrite(12, LOW);
  noTone(9);
 tone(8,200);
  myservo.write(180);
  } 
  else  {digitalWrite(13, LOW), digitalWrite(12, HIGH);// sets the servo position according to the scaled value
  noTone(8);
  tone(9, 400);
  }
  Serial.println(tmp);
  delay(200);                           // waits for the servo to get there
}
