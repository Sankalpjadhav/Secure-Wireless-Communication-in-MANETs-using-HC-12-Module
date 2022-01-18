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
byte var [N_BLOCK] ;

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
 
  
  // Show decrypted message
  while (HC12.available()) {        
    for (int i = 0; i < N_BLOCK; i++) {
   var[i]=HC12.read();
    }
  Serial.println(F("Enc msg is:"));
  for (int i = 0; i < 16; i++) {  
  Serial.print(var[i]);
  Serial.print(F(" "));
  }

 // Serial.println(F("Please find me!"));
   Serial.println(F(" "));
   
  if (aes.decrypt(var, decrypted) == 0) {
    Serial.println(F("decrypted binary: "));
    for (int i = 0; i < N_BLOCK; i++) {
      Serial.print(decrypted[i]);
      Serial.print(F(" "));
    }
    
    Serial.println(F(""));
    Serial.println(F("decrypted char: "));
    for (int i = 0; i < N_BLOCK; i++) {
      Serial.print(char(decrypted[i]));
      //Serial.write(HC12.read());
    }
    Serial.println(F(""));
   
  } else {
    Serial.println(F("Failed to decrypt"));
  }
 
  }
  delay(1000);
 
}
