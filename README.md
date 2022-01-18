# Secure Wireless Communication in MANETs using HC-12 Module

The purpose of this work is to generate and transmit the text message through a wireless communication system in a secured way. This facility prevails in the mobile network for which the user pays for it, whereas the system designed here can be used as personal communication system and information can be transmitted at free of cost. Moreover, the data is secured as it is encrypted at the transmitting end. To decrypt the  data at receiver end, standard algorithms like **AES and RSA** are used. In our work, two- way communication system is implemented for transmitting the text information, wherein the sender can also act as a receiver and vice versa. The advantage of using this system is that the user can communicate the message over a long range.  The standard algorithms are used for both encryption and decryption purposes. These cryptographic algorithms which are used to protect information, are obtained from mathematical concepts to convert messages in ways that make it harder to decode it. The message entered through keyboard by the sender is encrypted with the help of algorithms to generate an encrypted key (ciphertext). This ciphertext is transferred to HC-12 sender module which is then wirelessly transmitted to HC-12 receiver module. Once anything is typed on the serial monitor at the sender side, the same is reflected at the receiving end’s serial monitor. This message will be in the form of 16-bit for AES algorithm and 32-bit for RSA algorithm. In addition to the personal communication, the system designed here can be used for applications like FASTag, automated parking, library management, etc. In our work, the wireless communication is taking place through HC-12 module. The range is restricted to less than 600 meters and the range also depends upon factors such as line of sight, humidity, temperature, etc. But for long distances, high power transmitter can be used.

Currently, numerous modules capable of wireless communication are available, but HC-12 is cost effective and its excellent characteristics makes this communication best suited for several embedded systems, and so on.

# HC-12 module
The HC-12 is a half-duplex wireless serial communication module with 100 channels in the 433.4-473.0 MHz range that is capable of transmitting up to 1 km.
HC-12 wireless serial port communication module is a new-generation multichannel embedded wireless data transmission module. Its wireless working frequency band is 433.4-473.0MHz, multiple channels can be set, with the stepping of 400 KHz, and there are totally 100 channels. The maximum transmitting power of module is 100mW (20dBm), the receiving sensitivity is -117dBm at baud rate of 5,000bps in the air, and the communication distance is 1,000m in open space. The module is encapsulated with stamp hole, can adopt patch welding, and its dimension is 27.8mm × 14.4mm × 4mm (including antenna cap, excluding spring antenna), so it is very convenient for customers to go into application system. There is a PCB antenna pedestal ANT1 on the module, and user can use external antenna of 433M frequency band through coaxial cable; there is also an antenna solder eye ANT2 in the module, and it is convenient for user to weld spring antenna. User could select one of these antennas according to use requirements. There is MCU inside the module, and user don’t need to program the module separately, and all transparent transmission mode is only responsible for receiving and sending serial port data, so it is convenient to use. 

![HC-12 module](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/HC-12.PNG?raw=true "Optional Title")

# LoRa : Long Range Radio
LoRa enables long-range transmissions (more than 10 km in rural areas) with low power consumption. The technology covers the physical layer, while other technologies and protocols such as LoRaWAN (Long Range Wide Area Network) cover the upper layers. LoRa devices and the open LoRaWAN protocol enable smart IoT applications that solve some of the biggest challenges facing our planet: energy management, natural resource reduction, pollution control, infrastructure efficiency, disaster prevention, and more.


# Cryptography
Cryptography is a technique of securing information and communications through use of codes so that only those people for whom the information is intended can understand it and process it. Thus, preventing unauthorized access to information. In Cryptography, the techniques which are used to protect information are obtained from mathematical concepts and a set of rule-based calculations known as algorithms to convert messages in ways that make it hard to decode it. These algorithms are used for cryptographic key generation, digital signing, verification to protect data privacy, web browsing on internet and to protect confidential transactions such as credit card and debit card transactions.

# Arduino IDE
The Arduino Integrated Development Environment (IDE) is a cross-platform application (for Windows, macOS, Linux) that is written in functions from C and C++. It is used to write and upload programs to Arduino compatible boards, but also, with the help of 3rd party cores, other vendor development boards. The source code for the IDE is released under the GNU General Public License, version 2. The Arduino IDE supports the languages C and C++ using special rules of code structuring. The Arduino IDE supplies a software library from the Wiring project, which provides many common input and output procedures. User-written code only requires two basic functions, for starting the sketch and the main program loop, that are compiled and linked with a program stub main() into an executable cyclic executive program with the GNU toolchain, also included with the IDE distribution. The Arduino IDE employs the program avrdude to convert the executable code into a text file in hexadecimal encoding that is loaded into the Arduino board by a loader program in the board's firmware. By default, avrdude is used as the uploading tool to flash the user code onto official Arduino boards. With the rising popularity of Arduino as a software platform, other vendors started to implement custom open source compilers & tools (cores) that can build and upload sketches to other MCUs that are not supported by Arduino's official line of MCUs. In October 2019 the Arduino organization began providing early access to a new Arduino Pro IDE with debugging and other advanced features. The website to download Arduino IDE https://www.arduino.cc/en/Main/Software

![Arduino IDE](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Arduino-IDE.PNG?raw=true "Optional Title")

# Arduino Uno
Arduino Uno is a microcontroller board based on the ATmega328P (datasheet). It has 14 digital input/output pins, 6-analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to  a computer with a USB cable or power it with an AC-to-DC adapter or battery to get started.

![Arduino Uno](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Arduino-uno.PNG?raw=true "Optional Title")

# Proposed Algorithm
The more popular and widely adopted symmetric encryption algorithm is the Advanced Encryption Standard (AES). It is found that AES is much faster than RSA.

The features of AES are as follows -
•	Symmetric algorithm that requires only one encryption and decryption key
•	Easy overall implementation
•	Stronger and faster than RSA
•	Provide full specification and design details
•	Software implementable in C and Java languages

Another widely used cryptographic algorithm for secure data transmission is Rivest- Shamir-Adleman (RSA). It is an asymmetric cryptographic algorithm. Asymmetric means that there are two different keys. This is also called public key cryptography, because one of the keys can be given to anyone.

The features of RSA are as follows -
•	Popular exponentiation in a finite field over integers including prime numbers.
•	The integers used by this method are sufficiently large making it difficult to solve.
•	There are two sets of keys in this algorithm: private key and public key.

# Flow Chart
The below figures show the developed flow chart of the message generated and the received:

![Transmission Flow Chart](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Transmission-Flow-Chart.PNG?raw=true "Optional Title")

![Reception Flow Chart](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Reception-Flow-Chart.PNG?raw=true "Optional Title")

# System Design
The block diagram of wireless communication using Arduino integrated with HC-12 is as shown below:

![Design](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/System%20Design.png?raw=true "Optional Title")

Initially, the Arduino and HC12 components are connected to the respective sender and receiver system. The circuit schematic is as shown in the figure 5. The operating voltage of the module is from 3.2 V to 5.5 V. In this work, PC USB is used as a power to the components. Since the developed work is a two-way communication system, the same code is used for both the Arduinos. Arduino HC12 setup can either be made on two separate computers or a single computer. Arduino IDE is an open source software which can be used to write the code and upload it on Arduino component. Serial monitor is used for transmitting and receiving message.

# Circuit Diagram of Proposed Model
![Circuit Diagram](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Circuit-Diagram.PNG?raw=true "Optional Title")

# Working

Enter the data to be sent

![Enter data](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Enter-Data-Monitor.PNG?raw=true "Optional Title")

Entered 16-bit data

![Enter data](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Entered-Data.PNG?raw=true "Optional Title")

At sender side, the original message is entered. The AES or RSA algorithm is used to encrypt the message. After the encryption, the encrypted message is displayed and sent to receiver with the help of HC-12 module.

![Encryption](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Encrypted.PNG?raw=true "Optional Title")

At the receiver side, encrypted message which was sent by the sender gets decrypted using AES or DES algorithm and the original message is displayed on the serial monitor as shown in the figure

![Decryption](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/Decrypted.PNG?raw=true "Optional Title")

# Sender side Analysis
At sender side, original message that needs to be transmitted is entered on serial monitor of the sender. AES or RSA algorithms are used to encrypt the original message into a form, where attackers fail to distinguish the original message. After the encryption, encrypted message is sent to the receiver system. The figure 9.1 shows the sender side transmission.

# Reciever side Analysis
At receiver side, encrypted message is received. This encrypted message gets displayed on serial monitor of the receiver. Algorithms like AES or RSA take encrypted message as input and decrypt it in order to get back the original message. Original message gets displayed on the serial monitor of the receiver. The figure shows the receiver side reception.

# Analysis between AES and RSA
The most important aspect of day to day life is security. We have come up with this project to ensure that the data to be transmitted in least amount of time and in secure manner. Comparative analysis is made between two standard algorithms namely AES and RSA. So, for enhancing the security, a comparative analysis along with various parameters for both the symmetric key encryption and asymmetric key encryption is presented. Parameters that need to be considered are number of characters, distance and time taken to send the message to the receiver. 

Below table is the analysis that we have made with varying distances and number of characters.

Distance : 40 meters 

![40meters](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/TableFor40m.jpg?raw=true "Optional Title")

Distance : 100 meters 

![100meters](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/TableFor100m.jpg?raw=true "Optional Title")

Distance : 200 meters 

![200meters](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/TableFor200m.jpg?raw=true "Optional Title")

Distance : 400 meters 

![400meters](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/Assets/TableFor400m.jpg?raw=true "Optional Title")

# Conclusion
In this work, an authenticated user can able to send and receive the message, thus eliminating the security issue. This two-way communication system restricts unauthorized access to the messages that is taking place between two nodes. Companies and government sectors can use this system to communicate between their employees. Agriculture sectors can also use this work in order to maintain relations with their buyers. In this project, a detailed comparison is made between two standard algorithms, namely AES and RSA. The system is designed as user friendly and its operation is quite simple.

We have found that RSA solves the problem of key agreement and key exchange generated in private-key cryptography algorithms but still there is lack of confidentiality. AES is a private key based algorithm that suffers from key distribution and key  agreement problems. However, the problem is solved in RSA algorithm but encryption and decryption take more time in RSA. Therefore, both the algorithms have their own merits and demerits. Based on the computation time, AES is faster compared to RSA. AES took an average of 4 seconds to transmit 8-bit message to the receiver, whereas RSA took 6 seconds to transmit 8-bit message.

# Future Scope
Additional features can be incorporated into this system if required. Since this project is limited to 1 km range due to use of HC12 module, long distance communication can also be implemented if we use more sophisticated modules like LoRa which has  range more than 10 km. The length of the message to be transmitted can also be increased by modifying the micro-controller program. This project is restricted to text message transmission. We can further incorporate type of the message like image, file and so on. To ensure high security, Elliptic Curve Digital Signature Algorithm (ECDSA) can be  used as a substitute of RSA algorithm module.
