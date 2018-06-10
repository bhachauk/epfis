
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
   
      
      if( n == 1)
      {
          // turn LED on:
          
           Serial.println("1st pulse");
          digitalWrite(ledPin13, HIGH);
          digitalWrite(ledPin12, LOW);
          Serial.println("delay on");
           //delay(1000);
            //for (int i=0; i <= 100; i++)
            //{
             delayMicroseconds(2200);
            //}
    
          //digitalWrite(ledPin13, HIGH);
           digitalWrite(ledPin12, HIGH);
           Serial.println(" on time");
           //delay(3000);
           delay(15);
          //for (int i=0; i <= 200; i++)
          //{
             // delayMicroseconds(15000);
          //}
          digitalWrite(ledPin13, LOW);
          digitalWrite(ledPin12, LOW);
          delay(1);
          
          n = 0;
          
    
          
      }   
    
  
     else 
    {
           //digitalWrite(ledPin1, LOW);
          //digitalWrite(ledPin2, HIGH);
           Serial.println(" 2nd pulse");
          //delay(500);
          delay(1);
         buttonState =n++;
         
        Serial.println (buttonState);
      }
  }   
  else
  {
  }
  
  
}
