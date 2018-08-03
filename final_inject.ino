//Init

const int buttonPin = 3;     // the number of the TDC_Input pin
const int ledPin13 =  13;      // the number of the LED pin
const int ledPin12 =  12;      // the number of the LED pin

// variables will change:

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

// All delay values are in millisecond.
void loop() 
{
    // read the state of the TDC_Input value:
      int buttonState = digitalRead(buttonPin);

  if ( buttonState == HIGH )
  {
      if( n == 1)
      {
          // turn LED on:
          Serial.println("2st pulse");
          digitalWrite(ledPin13, HIGH);
          digitalWrite(ledPin12, LOW);

          Serial.println("TDC Received.. Waiting for valve overlap...");
          delayMicroseconds(2200);
          digitalWrite(ledPin12, HIGH);
          Serial.println("Injection Starts ...");

          delay(15);
          digitalWrite(ledPin13, LOW);
          digitalWrite(ledPin12, LOW);
          delay(1);
          n = 0;
      }
    else
    {
        Serial.println("1st pulse");
        delay(500);
        n = 1;
        // Can be modified for injection requirements..
    }
  }   
  else
  {
        // Engine off state
        // Insert the code for requirement.
  }
}
