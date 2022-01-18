#include <AES.h>
#include <SoftwareSerial.h>
SoftwareSerial HC12(10, 11);

AES aes ;

#define KEYLENGTH 32
char PassString[] = "This is hard to believe but true";
byte key[KEYLENGTH];

//char Message[] = "This is a Test Message";

byte plain[N_BLOCK];
byte cipher [N_BLOCK] ;
byte decrypted [N_BLOCK] ;

void setup() {
  Serial.begin(9600);
  HC12.begin(9600);
  Serial.println(F("Starting AES test"));
 
  // Pass the key into the byte array
  for (int i = 0; i < KEYLENGTH; i++) {
    key[i] = PassString[i];
  }
 
  if (aes.set_key (key, KEYLENGTH) !=0){
    Serial.println(F("Failed to set key"));
  }
}

void loop() {
  // Show original message
  while (Serial.available()) {      
    //HC12.write(Serial.read());      
    String Message=Serial.readString();
  Serial.print(F("Un-encrypted message: "));
  Serial.println(Message);
  //Serial.println(Serial.readString());


  
  Serial.println(F("Un-encrypted binary: "));
  //Serial.print(Message);
  for (int i = 0; i < N_BLOCK; i++) {
    plain[i] = Message[i];
    cipher[i] = 0;
    decrypted[i] = 0;
    Serial.print(plain[i]);
    Serial.print(F(" "));
  }
  Serial.println(F(""));
 
  // Show encrypted message
  if (aes.encrypt(plain, cipher) == 0) {
    Serial.println(F("encrypted: "));
    for (int i = 0; i < N_BLOCK; i++) {
      Serial.print(cipher[i]);
      HC12.write(cipher[i]); 
      Serial.print(F(" "));      
    }
    Serial.println(F(""));
    
  } 
  else {
    Serial.println(F("Failed to encrypt"));
  }
  
  // Show decrypted message
//  while (HC12.available()) {        
//
//  Serial.println(F("Enc msg is:"));
//  for (int i = 0; i < 16; i++) {  
//  Serial.print(HC12.read());
//  Serial.print(F(" "));
//  }
//
// // Serial.println(F("Please find me!"));
//   Serial.println(F(" "));
//  if (aes.decrypt(cipher, decrypted) == 0) {
//    Serial.println(F("decrypted binary: "));
//    for (int i = 0; i < N_BLOCK; i++) {
//      Serial.print(decrypted[i]);
//      Serial.print(F(" "));
//    }
//    
//    Serial.println(F(""));
//    Serial.println(F("decrypted char: "));
//    for (int i = 0; i < N_BLOCK; i++) {
//      Serial.print(char(decrypted[i]));
//      Serial.write(HC12.read());
//    }
//    Serial.println(F(""));
//   
//  } else {
//    Serial.println(F("Failed to decrypt"));
//  }
 
  }
  delay(1000);
 
}
