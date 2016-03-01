/* =====================================
 * Analog Audio Read
 * 
 * The following script was designed to test the capabilities of the SparkFun MEMs Microphone ADMP401
 * The script simply reads the output voltage from the MEMs microphone.
 * 
 * Fluvio L. Lobo Fenoglietto 02/29/2016
 ==================================== */


// Variable definitions
int analogPin = 0; //this variable indicates the analog pin used by the MEMS microphone
int val; //this variable will be defined as the automatic mapping of the 3.3volts using integers between 0 and 1023
float volts; //this variable will be defined as the actual voltage (in mV) of the analog signal

void setup() {

  Serial.begin(9600); //begin serial communication at 9600bps

} //End of void-setup

void loop() {

  val = analogRead(analogPin); //read the analog output --automatically mapped to integers between 0 and 1023
  volts = val * (5.0 / 1023.0); //here the program determines the real voltage of the signal
  Serial.println(volts); //prints the voltage to the serial monitor

} //End of void-loop

