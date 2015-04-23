int speaker = 12;
int lengthOfTime =500;

void beeps(int time){
  for (int i = 0; i < 5; i++) {
tone(speaker,500,time);
delay(time);
tone(speaker,900,time);
delay(time);
}
}

void setup() {
  // put your setup code here, to run once:
pinMode(speaker,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
beeps(lengthOfTime);

delay(3000);
}
