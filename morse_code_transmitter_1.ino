// C++ code
//
unsigned int led_pin = 13;

//character array

char *letters[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

char *numbers[] = {".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
unsigned int dot_duration = 200;
bool done = false;

void setup() {
//led to output
	pinMode(led_pin, OUTPUT);
	Serial.begin(9600);
	Serial.println("MORSE CODE TO LED CONERSION");
	Serial.println("This code converts text message into Morse code");
	Serial.println("and flashes that as LED");
	Serial.println("\n");
	Serial.println("Enter your text message: ");
}

void loop()
{
	char ch;
	while(!done)
    {
      if(Serial.available())
      {
		ch = Serial.read();
		if (ch >= 'A' && ch <='Z') 
        {
		  Serial.println(ch);
          flash_morse_code(letters[ch - 'A']);
        }
		else if (ch >= 'a' && ch <='z')
        {
		  Serial.println(ch);
		  flash_morse_code(letters[ch - 'a']);
		}
		else if (ch >='0' &&ch <= '9')
        {
		  Serial.println(ch);
          flash_morse_code(letters[ch - '0']);
		}
		else if (ch == ' ')
        {
		  delay(dot_duration * 7);
		}
		else if (ch == '!') 
        {
		  done = true;
		  Serial.println("Your message is sent successfully!!");
		}
	  }
	}
	while(true) {}
}
void flash_morse_code(char *morse_code) {
	unsigned int i = 0;
	while (morse_code[i] != NULL) {
		flash_dot_or_dash(morse_code[i]);
		i++;
	}
	delay(dot_duration*3);
}
void flash_dot_or_dash(char dot_dash) {
	digitalWrite(led_pin, HIGH);
	if(dot_dash == '.') 
    {
		delay(dot_duration);
	}
	else {
		delay(dot_duration*3);
	}

	digitalWrite(led_pin, LOW);
	delay(dot_duration);
}



