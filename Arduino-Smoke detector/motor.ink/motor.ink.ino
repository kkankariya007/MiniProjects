int en1=10;
int en2=5;
int i1=9;
int i2=8;
int i3=6;
int i4=7;
int av1,av2;
int ori;
void setup() {
  
  pinMode(en1,OUTPUT);
  pinMode(i1,OUTPUT);
  pinMode(i2,OUTPUT);

  pinMode(en2,OUTPUT);
  pinMode(i3,OUTPUT);
  pinMode(i4,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(3,INPUT);
  // put your setup code here, to run once:
//
 ori=analogRead(A0)+50;
 digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  analogWrite(en1,170);
   digitalWrite(i3,LOW);
  digitalWrite(i4,HIGH);
  analogWrite(en2,120);
  delay(1300);
  
  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,LOW);
  delay(500);

  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  analogWrite(en1,120);
   digitalWrite(i3,HIGH);
  digitalWrite(i4,LOW);
  analogWrite(en2,120);
  delay(700);
  
  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,LOW);
  delay(40);

  digitalWrite(i1,LOW);
  digitalWrite(i2,HIGH);
  analogWrite(en1,120);
   digitalWrite(i3,LOW);
  digitalWrite(i4,HIGH);
  analogWrite(en2,120);
  delay(700);

  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,LOW);
  
  Serial.begin(9600);
    Serial.println(ori);

}

void loop() {

  int av1=analogRead(A0);
  Serial.print("av1 ");
    Serial.println(av1);

  delay(100);
 
  int av2=analogRead(A0);
// Serial.print("av2 ");
//    Serial.println(av2);
   
      if(av2>av1 && av2>ori)
      {
            Serial.println(ori);

        Serial.println("Hello");
     digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  analogWrite(en1,100);
   digitalWrite(i3,LOW);
  digitalWrite(i4,HIGH);
  analogWrite(en2,100);
  delay(40);
      }
      
  else
  {
    digitalWrite(i1,LOW);
    digitalWrite(i2,LOW);
    digitalWrite(i3,LOW);
    digitalWrite(i4,LOW);


    
  }
  

}
