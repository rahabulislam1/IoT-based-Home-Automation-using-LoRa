/*This Code is for the TRANSMITTER*/
//PORT=27


#define ON 5
#define OFF 6
#define AUTO 7
#define AUTO2 8

char data = 0;

//-----NodeMCU------
//#define ON D5
//#define OFF D6
//#define AUTO D7    //Pulling Pin 7 low sends ON/OFF signals every 1 second

void setup() {

  Serial.begin(115200);   //default baudrate of module is 115200
  delay(100);

  //Serial.print("AT\r\n");
  //delay(100);
  /*
    Serial.print("AT+PARAMETER=10,7,1,7\r\n");    //For Less than 3Kms
    //Serial.print("AT+PARAMETER=10,7,1,7\r\n");    //For More than 3Kms
    delay(100);   //wait for module to respond

    Serial.print("AT+BAND=868500000\r\n");    //Bandwidth set to 868.5MHz
    delay(100);   //wait for module to respond

    Serial.print("AT+ADDRESS=115\r\n");   //needs to be unique
    delay(100);   //wait for module to respond

    Serial.print("AT+NETWORKID=6\r\n");   //needs to be same for receiver and transmitter
    delay(100);   //wait for module to respond

    Serial.print("AT+PARAMETER?\r\n");    //prints the current parameters
    delay(100);   //wait for module to respond

    Serial.print("AT+BAND?\r\n");    //prints the current bandwidth
    delay(100);   //wait for module to respond

    Serial.print("AT+NETWORKID?\r\n");   //prints the network id
    delay(100);   //wait for module to respond

    Serial.print("AT+ADDRESS?\r\n");   //prints the address
    delay(100);   //wait for module to respond

  */

  //pinMode(ON, INPUT_PULLUP);  //set pin 5 as input for button
  //pinMode(OFF, INPUT_PULLUP);   //set pin 6 as input for button
  //pinMode(AUTO, INPUT_PULLUP);  //set pin 7 as input for switch
  //pinMode(AUTO2, INPUT_PULLUP);
}

void loop() {

  while (Serial.available()) {
    delay(10); //Delay added to make thing stable
    data = Serial.read(); //Conduct a serial read
    //Serial.print(data);
    if (data == 'G') {
      int i;
      for(i=1;i<=2;i++){
        Serial.print("AT+SEND=1,1,4\r\n");
      //Serial.print("AT+SEND=116,1,1\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(500);   //longer delay to wait for completion of transmition
    }
    }
    if (data == 'H') {
      int i;
      for(i=1;i<=2;i++){
        Serial.print("AT+SEND=1,1,5\r\n");
      //Serial.print("AT+SEND=116,1,1\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(500);   //longer delay to wait for completion of transmition
    }
    }
    //Serial.println(data);
    
    if (data == 'E') {
      int i;
      for(i=1;i<=2;i++){
        Serial.print("AT+SEND=1,1,1\r\n");
      //Serial.print("AT+SEND=116,1,1\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(500);   //longer delay to wait for completion of transmition
      }
      
    }
    if (data == 'F') {
      int j;
      for(j=1;j<=2;j++){
      Serial.print("AT+SEND=1,1,0\r\n");
      //Serial.print("AT+SEND=116,1,0\r\n");    //send 0 to address 116("0" is of 1 byte)
      delay(500);   //longer delay to wait for completion of transmition
      }
    }

    if (data == 'I') {
      int k;
      for(k=1;k<=2;k++){
      Serial.print("AT+SEND=1,1,2\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(1000);   //longer delay to wait for completion of transmition
      }
    }
    if (data == 'J') {
      int l;
      for(l=1;l<=2;l++){
      Serial.print("AT+SEND=1,1,3\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(1000);   //longer delay to wait for completion of transmition
      }
    }

    

    if (data == 'O') {
        Serial.print("AT+SEND=1,1,1\r\n");
      //Serial.print("AT+SEND=116,1,1\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(500);   //longer delay to wait for completion of transmition
    }
    if (data == 'P') {
        Serial.print("AT+SEND=1,1,1\r\n");
      //Serial.print("AT+SEND=116,1,1\r\n");    //send 1 to address 116("1" is of 1 byte)
      delay(500);   //longer delay to wait for completion of transmition
    }


  }

}




