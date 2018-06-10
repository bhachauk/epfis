
const int buttonPin = 3;     // the number of the pushbutton pin
const int ledPin13 =  13;      // the number of the LED pin
const int ledPin12 =  12;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int n =0;
void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPin12, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() 
{
    // read the state of the pushbutton value:
      int buttonState = digitalRead(buttonPin);
      

  if ( buttonState == HIGH ) 
  
  {
  for (int i=0; i <= 100; i++)
  {

           Serial.println("1st pulse");
          digitalWrite(ledPin13, HIGH);
          digitalWrite(ledPin12, LOW);
          Serial.println("delay on");
          
             delayMicroseconds(2200);
           digitalWrite(ledPin12, HIGH);
           Serial.println(" on time");           
           delay(15);
          digitalWrite(ledPin13, LOW);
          digitalWrite(ledPin12, LOW);
          delay(80-2.2-15);
  }    
      }      
  else
  {
  }
  
  
}
