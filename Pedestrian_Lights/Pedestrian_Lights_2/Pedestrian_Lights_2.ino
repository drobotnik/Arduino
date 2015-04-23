// Project 3 - Traffic Lights
int ledDelay = 5000; // delay in between changes
int redPin = 13;
int yellowPin = 11;
int greenPin = 9;
int pedRedPin = 8;
int pedGreenPin = 10;
int speakerPin = 12;
int notes[]={1219,330};
int noteDuration = 200;



void beeps(int time){
  for (int n = 0; n < (ledDelay/(time*2)); n++) {
tone(speakerPin,500,time);
delay(time);
tone(speakerPin,900,time);
delay(time);
}
}

void setup() {
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(pedRedPin, OUTPUT);
pinMode(pedGreenPin, OUTPUT);
pinMode(speakerPin, OUTPUT);
}

void loop() {
// turn the red light on
digitalWrite(redPin, HIGH); // turn on red
digitalWrite(pedGreenPin, LOW); //turn on green man
delay(ledDelay);//stop speaker loop
digitalWrite(pedGreenPin, LOW); // turn off green man
digitalWrite(pedRedPin, HIGH); // turn on red man
digitalWrite(yellowPin, HIGH); // turn on yellow
delay(2000); // wait 2 seconds
digitalWrite(greenPin, HIGH); // turn green on
digitalWrite(redPin, LOW); // turn red off
digitalWrite(yellowPin, LOW); // turn yellow off
digitalWrite(yellowPin, HIGH); // turn yellow on
beeps(200);
digitalWrite(greenPin, LOW); // turn green off
delay(2000); // wait 2 seconds
digitalWrite(yellowPin, LOW); // turn yellow off
digitalWrite(pedRedPin, LOW); // turn of red man
// now our loop repeats
}
