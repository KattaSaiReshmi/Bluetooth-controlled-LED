int led = 2; // Define the LED pin as 2
// int fan = 3; // Define the fan pin as 3
void setup()
{
Serial.begin(9600); // Initialize serial communication at a baud rate of 9600
pinMode(led, OUTPUT); // Set the LED pin as an OUTPUT
// pinMode(fan, OUTPUT); // Set the fan pin as an OUTPUT
}
void loop()
{
while (!Serial.available()); // Wait until there is data available in the serial buffer
byte value = Serial.read(); // Read a byte of data from the serial buffer
switch (value)
{
case 'O': // If the received character is 'O'
digitalWrite(led, HIGH); // Turn on the LED
break;
case 'F': // If the received character is 'F'
digitalWrite(led, LOW); // Turn off the LED
break;
/*
case 'A': // If the received character is 'A'
digitalWrite(fan, HIGH); // Turn on the fan
break;
case 'B': // If the received character is 'B'
digitalWrite(fan, LOW); // Turn off the fan
break;
*/
}
}
