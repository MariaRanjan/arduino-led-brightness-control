int led=13;
int potpin=A0;
int potvalue;
int brightness;


void setup(){
pinMode(led,OUTPUT);}


void loop(){
potvalue=analogRead(potpin);
brightness=map(potvalue,0,1023,0,255);
digitalWrite(led,brightness);
}
