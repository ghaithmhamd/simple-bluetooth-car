//project created by Ghaith Mhamdi in 29/03/2020
#include <SoftwareSerial.h>
SoftwareSerial Bot_BT(12, 11);  // RX, TX
char BluetoothData;
char f;
void setup() {
Serial.begin(9600);
Bot_BT.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}
void loop() {
 if (Bot_BT.available()) //Read whats coming in through Bluetooth
   {
BluetoothData=Bot_BT.read();
Serial.print("Incoming from BT:");
Serial.println(BluetoothData);
if (BluetoothData == 'f'){
  {digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);}
  delay(300);
  digitalWrite(5,LOW);
  digitalWrite(2,LOW);
  }
if (BluetoothData == 'b'){
  {digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);}
  delay(300);
  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  
  }  
if (BluetoothData == 'r'){
  {digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);}
  delay(300);
  digitalWrite(5,LOW);
  digitalWrite(3,LOW);
  }    
if (BluetoothData == 'l'){
  {digitalWrite(6,HIGH);
  digitalWrite(2,HIGH);}
  delay(300);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  }    

}
}
