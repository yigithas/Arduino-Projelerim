#define buton 10
#define led 8

int durum=0;

void setup() {

pinMode(buton,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
 
 durum=digitalRead(buton);
 
 if(durum==1){
  digitalWrite(led,HIGH);
 }

 else{
  digitalWrite(led,LOW);
 }

}
