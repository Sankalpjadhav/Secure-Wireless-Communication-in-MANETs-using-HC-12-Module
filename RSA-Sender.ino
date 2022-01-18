#include <SoftwareSerial.h>
SoftwareSerial HC12(10,11);
#ifndef __RSA__
#define __RSA__
#define DEBUG 1
#define SMS_SIZE            160
#define PLAINTEXT_SIZE      (SMS_SIZE / sizeof(int))
#define CIPHERTEXT_SIZE     (SMS_SIZE)
#include "Arduino.h"
int publicKey[2] = {14351, 11};
int privateKey[2] = {14351, 1283};

int msgLen;
class RSA {
    private:

    public:
        RSA();
        ~RSA();
        void encrypt(char *plainText, char *cipherText, int *publicKey);
        void decrypt(char *plainText, char *cipherText, int *privateKey);
};
extern RSA rsa;
#endif

RSA rsa;
RSA::RSA()
{

}
RSA::~RSA()
{

}
void RSA::encrypt(char *plainText, char *cipherText, int *publicKey)
{
   long m = 1;
   int n = publicKey[0];
   int e = publicKey[1];
   int ctr = 0;

   for(int i = 0; i < PLAINTEXT_SIZE; i++) {
       for(int j = 0; j < e; j++) {
           m = (m * plainText[i]) % n;
       }
       
       ctr = i * sizeof(int);

       cipherText[ctr]     = (char) (m & 0x00ff);
       cipherText[ctr + 1] = (char) ((m & 0xff00) >> 8);

       m = 1;
   }
}
void RSA::decrypt(char *plainText, char *cipherText, int *privateKey)
{
   long M = 1;
   int n = privateKey[0];
   int d = privateKey[1];
   int temp = 0;
   int ctr = 0;

   //re-assemble char array to array of int
   for(int i = 0; i < PLAINTEXT_SIZE; i++) {
       ctr = i * sizeof(int);
       temp = (((unsigned char)cipherText[ctr + 1] << 8) | (unsigned char)cipherText[ctr]);
       
       for(int j = 0; j < d; j++) {
           M = (M * temp) % n;
       }

       plainText[i] = (unsigned char)(M & 0xFF); 
       M = 1;
   }
}


void setup()
{
  Serial.begin(9600);
  HC12.begin(9600);
}
void loop()
{
  char msg[PLAINTEXT_SIZE];
  char plain[PLAINTEXT_SIZE];
  char cipher_msg[CIPHERTEXT_SIZE];
  while(Serial.available())
  {
    String message=Serial.readString();
    msgLen=message.length();
    Serial.print(F("Un-encrypted message is :"));
    Serial.println(message);
    message.toCharArray(msg,msgLen);
    rsa.encrypt(msg,cipher_msg, publicKey);
    for(int i = 0; i < PLAINTEXT_SIZE; i++) {
      HC12.write(cipher_msg[i]);
   }
   for(int i = 0; i < msgLen-1; i++) {
       Serial.print((unsigned char)cipher_msg[i], DEC); Serial.print(" ");
   }
   Serial.println();
  }

}
