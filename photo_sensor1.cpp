void setup{
	Serial.begin(9600); //Setting digital input
	pinMode(13, OUTPUT); //Setting digital output
}
void loop() {
	int value = analogRead(0); //
	Serial.println(value);
	if(value>=40){
		digitalWrite(13, HIGH); //Keeping the port on
	}
	else{
		digitalWrite(13, LOW);	 //Keeping the port amost off
	}
	delay(10); //Optional value that makes lag
}