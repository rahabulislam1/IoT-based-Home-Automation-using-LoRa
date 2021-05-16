#define LED D6
#define LED2 D5
#define LED3 D7
#define LED4 D8

unsigned long lastTransmission;
const int interval = 100;
String received;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);   //default baudrate of module is 115200
  
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
    received = Serial.readString();
    //Serial.println(received);
    if(received.startsWith("+RCV")){
      Serial.println(received);  //in this case our single received byte would always be at the 11th position
      if(received[9]=='1'){  
        digitalWrite(LED,HIGH);
      }
      if(received[9]=='0'){
        digitalWrite(LED,LOW);
      }
      if(received[9]=='2'){
        digitalWrite(LED2,HIGH);
      }
      if(received[9]=='3'){
        digitalWrite(LED2,LOW);
      }

      if(received[9]=='4'){  
        digitalWrite(LED3,HIGH);
      }
      if(received[9]=='5'){
        digitalWrite(LED3,LOW);
      }
      if(received[9]=='6'){
        digitalWrite(LED4,HIGH);
      }
      if(received[9]=='7'){
        digitalWrite(LED4,LOW);
      }
    }
    //delay(100);
}
