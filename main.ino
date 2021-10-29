int sensorValue = 0;
int outputValue = 0;


void setup() {
    //THIS IS P2, P2 is analog input 1, so when you are using analog read, you refer to it as 1.
	pinMode(2, INPUT);
	//P0, P1, and P4 are capable of hardware PWM (analogWrite).
    pinMode(0, OUTPUT); //0 is P0, 1 is P1, 4 is P4 - unlike the analog inputs, 
                        //for analog (PWM) outputs the pin number matches the port number.
}

void loop() {
    // The analog pins are referenced by their analog port number, not their pin
    //number and are as follows:

    sensorValue = analogRead(1); //Read P2
    //To set to input: pinMode(2, INPUT);
    //THIS IS P2, P2 is analog input 1, so when you are using analog read, you refer to it as 1.

    //sensorValue = analogRead(2); //Read P4
    //To set to input: pinMode(4, INPUT);
    //THIS IS P4, P4 is analog input 2, so when you are using analog read, you refer to it as 2.

    //sensorValue = analogRead(3); //Read P3
    //To set to input: pinMode(3, INPUT);
    //THIS IS P3, P3 is analog input 3, so when you are using analog read, you refer to it as 3.

    //sensorValue = analogRead(0); //Read P5
    //To set to input: pinMode(5, INPUT);
    //THIS IS P5, P5 is analog input 0, so when you are using analog read, you refer to it as 0.
	
	outputValue = 255*(sensorValue/1023);
	
	analogWrite(0,outputValue);
	
	delay(1000);
	
}