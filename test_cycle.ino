// Note:
// Test cycle code is used for measuring the fuel injection amount
// for a ON Time. It means to measure Fuel Injection rate (volume/s) in
// steady state condition (Engine off).


// In this code proximity sensory input is used as a switch to on/off the
// experiment.

const int buttonPin = 3;     // the number of the TDC_Input pin
const int ledPin13 =  13;      // the number of the LED pin
const int ledPin12 =  12;      // the number of the LED pin
int buttonState = 0;         // variable for reading the TDC_Input status
int n =0;

void setup() {

  Serial.begin(9600);

  // initialize the LED pin as an output:
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPin12, OUTPUT);

  // initialize the TDC_Input pin as an input:
  pinMode(buttonPin, INPUT);

}

void loop() 
{
    // read the state of the TDC_Input value:
    int buttonState = digitalRead(buttonPin);

    if ( buttonState == HIGH )
    {
        for (int i=0; i <= 100; i++)
        {
            Serial.println("1st pulse");
            // Put delay for First revolution
            // delay(40)
            // First revolution completed.

            // Indicate 2nd Revolution
            digitalWrite(ledPin13, HIGH);
            digitalWrite(ledPin12, LOW);

            Serial.println("Valve Overlap Time...");
            delayMicroseconds(2200);

            // Injecting in second revolution
            digitalWrite(ledPin12, HIGH);
            Serial.println("Injection Time");

            // Put the ON Time
            delay(15);

            digitalWrite(ledPin13, LOW);
            digitalWrite(ledPin12, LOW);

            // Delay need to be provide for OFF Time for Average Engine cycle
            // time 80 ms. 2.2 ms is for valve overlap time. 15 ms is ON Time.
            delay(80-2.2-15);
        }
    }
    else
    {
        // Nothing to do
    }
}
