/* ==========================
 * Analog Audio Read
 * 
 * The following script was designed to test the capabilities of the SparkFun MEMs Microphone ADMP401
 * The script simply reads the output voltage from the MEMs microphone.
 * 
 * Fluvio L. Lobo Fenoglietto
 ========================= */

int analogPin = 0;
double val;
double volts;

void setup() {

  Serial.begin(9600);

}

void loop() {

  val = analogRead(analogPin);
  volts = val/1024;
  Serial.println(volts);

}
