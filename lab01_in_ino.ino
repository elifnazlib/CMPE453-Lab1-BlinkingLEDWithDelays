int redPin = 3;       // Red LED connected to digital pin 3           
int bluePin = 6;      // Blue LED connected to digital pin 6
int yellowPin = 9;    // Yellow LED connected to digital pin 9                

void setup()	// Run once, when the sketch starts                   
{
  // Setting the digital pins as output
  pinMode(redPin, OUTPUT);       
  pinMode(bluePin, OUTPUT);      
  pinMode(yellowPin, OUTPUT); 
}

void loop()	// Run over and over again             
{
  // ON the all LEDs together and wait for 3000ms
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(yellowPin, HIGH);
  delay(3000); 

  // OFF the red and yellow LEDs and ON the blue LED together and wait for 4000ms
  digitalWrite(redPin, LOW);     
  digitalWrite(yellowPin, LOW); 
  digitalWrite(bluePin, HIGH);
  delay(4000); 

  // OFF the blue LED and ON the yellow and red LEDs together and wait for 5000ms
  digitalWrite(redPin, HIGH);     
  digitalWrite(yellowPin, HIGH); 
  digitalWrite(bluePin, LOW);
  delay(5000); 

  // OFF the all LEDs and wait for 2000ms
  digitalWrite(redPin, LOW);     
  digitalWrite(yellowPin, LOW); 
  digitalWrite(bluePin, LOW);
  delay(2000);

  // Return to the beginning            
}
