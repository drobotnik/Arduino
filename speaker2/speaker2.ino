int totalTime = 5000; // delay in between changes
int noteLength = 200;
int speakerPin = 12;
int notes[]={800,630,500};

void beeps(){
tone(speakerPin,notes[1],200);
delay(200);
tone(speakerPin,notes[0],200);
delay(200);
}

void setup() {
  // put your setup code here, to run once:
pinMode(speakerPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
beeps()*5;
delay(totalTime);
}
