# Secure Wireless Communication in MANETs using HC-12 Module

The purpose of this work is to generate and transmit the text message through a wireless communication system in a secured way. This facility prevails in the mobile network for which the user pays for it, whereas the system designed here can be used as personal communication system and information can be transmitted at free of cost. Moreover, the data is secured as it is encrypted at the transmitting end. To decrypt the  data at receiver end, standard algorithms like **AES and RSA** are used. In our work, two- way communication system is implemented for transmitting the text information, wherein the sender can also act as a receiver and vice versa. The advantage of using this system is that the user can communicate the message over a long range.  The standard algorithms are used for both encryption and decryption purposes. These cryptographic algorithms which are used to protect information, are obtained from mathematical concepts to convert messages in ways that make it harder to decode it. The message entered through keyboard by the sender is encrypted with the help of algorithms to generate an encrypted key (ciphertext). This ciphertext is transferred to HC-12 sender module which is then wirelessly transmitted to HC-12 receiver module. Once anything is typed on the serial monitor at the sender side, the same is reflected at the receiving end’s serial monitor. This message will be in the form of 16-bit for AES algorithm and 32-bit for RSA algorithm. In addition to the personal communication, the system designed here can be used for applications like FASTag, automated parking, library management, etc. In our work, the wireless communication is taking place through HC-12 module. The range is restricted to less than 600 meters and the range also depends upon factors such as line of sight, humidity, temperature, etc. But for long distances, high power transmitter can be used.

Currently, numerous modules capable of wireless communication are available, but HC-12 is cost effective and its excellent characteristics makes this communication best suited for several embedded systems, and so on.

# HC-12 module
The HC-12 is a half-duplex wireless serial communication module with 100 channels in the 433.4-473.0 MHz range that is capable of transmitting up to 1 km.
HC-12 wireless serial port communication module is a new-generation multichannel embedded wireless data transmission module. Its wireless working frequency band is 433.4-473.0MHz, multiple channels can be set, with the stepping of 400 KHz, and there are totally 100 channels. The maximum transmitting power of module is 100mW (20dBm), the receiving sensitivity is -117dBm at baud rate of 5,000bps in the air, and the communication distance is 1,000m in open space. The module is encapsulated with stamp hole, can adopt patch welding, and its dimension is 27.8mm × 14.4mm × 4mm (including antenna cap, excluding spring antenna), so it is very convenient for customers to go into application system. There is a PCB antenna pedestal ANT1 on the module, and user can use external antenna of 433M frequency band through coaxial cable; there is also an antenna solder eye ANT2 in the module, and it is convenient for user to weld spring antenna. User could select one of these antennas according to use requirements. There is MCU inside the module, and user don’t need to program the module separately, and all transparent transmission mode is only responsible for receiving and sending serial port data, so it is convenient to use. 
![HC-12 module](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/HC-12.PNG?raw=true "Optional Title")

# LoRa : Long Range Radio
LoRa enables long-range transmissions (more than 10 km in rural areas) with low power consumption. The technology covers the physical layer, while other technologies and protocols such as LoRaWAN (Long Range Wide Area Network) cover the upper layers. LoRa devices and the open LoRaWAN protocol enable smart IoT applications that solve some of the biggest challenges facing our planet: energy management, natural resource reduction, pollution control, infrastructure efficiency, disaster prevention, and more.


# Cryptography
Cryptography is a technique of securing information and communications through use of codes so that only those people for whom the information is intended can understand it and process it. Thus, preventing unauthorized access to information. In Cryptography, the techniques which are used to protect information are obtained from mathematical concepts and a set of rule-based calculations known as algorithms to convert messages in ways that make it hard to decode it. These algorithms are used for cryptographic key generation, digital signing, verification to protect data privacy, web browsing on internet and to protect confidential transactions such as credit card and debit card transactions.

# Arduino IDE
The Arduino Integrated Development Environment (IDE) is a cross-platform application (for Windows, macOS, Linux) that is written in functions from C and C++. It is used to write and upload programs to Arduino compatible boards, but also, with the help of 3rd party cores, other vendor development boards. The source code for the IDE is released under the GNU General Public License, version 2. The Arduino IDE supports the languages C and C++ using special rules of code structuring. The Arduino IDE supplies a software library from the Wiring project, which provides many common input and output procedures. User-written code only requires two basic functions, for starting the sketch and the main program loop, that are compiled and linked with a program stub main() into an executable cyclic executive program with the GNU toolchain, also included with the IDE distribution. The Arduino IDE employs the program avrdude to convert the executable code into a text file in hexadecimal encoding that is loaded into the Arduino board by a loader program in the board's firmware. By default, avrdude is used as the uploading tool to flash the user code onto official Arduino boards. With the rising popularity of Arduino as a software platform, other vendors started to implement custom open source compilers & tools (cores) that can build and upload sketches to other MCUs that are not supported by Arduino's official line of MCUs. In October 2019 the Arduino organization began providing early access to a new Arduino Pro IDE with debugging and other advanced features. The website to download Arduino IDE https://www.arduino.cc/en/Main/Software
![HC-12 module](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/HC-12.PNG?raw=true "Optional Title")

![HC-12 module](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/HC-12.PNG?raw=true "Optional Title")

![HC-12 module](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/HC-12.PNG?raw=true "Optional Title")

![HC-12 module](https://github.com/Sankalpjadhav/Secure-Wireless-Communication-in-MANETs-using-HC-12-Module/blob/main/HC-12.PNG?raw=true "Optional Title")
