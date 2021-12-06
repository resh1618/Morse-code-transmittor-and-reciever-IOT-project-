# Morse-code-transmittor-and-reciever-IOT-project-

This Project was done to encrypt and decrypt morse code into led flashes from text and using that output light signal as input for the decryptor to convert back into textual form.
The project was done using tinkercad by Autodesk, an open-source platform to build 3D Models, Circuits and much more. 
Arduino Simulators on tinkercad only supports C++ codes, hence why the codes used to program the model were written in C++.

The repository consists of circuit diagrams of three arduino models built and their respective code.
The file *morse_code_transmitter_1.ino* contains the code for the Led morse encryptor. 

The file *morse_code_decoder_2.ino* contains the code for the decryptor which uses an LDR to decode the message. 

Unfortunately the above code does not work on simulations which is why another arduino model was build to decrypt the morse code, but only this time the input instead of being the light signal will be the user provided push prompts.

The file *morse_code_decoder_push_button.ino* contains the code for the Decryptor using push button.
