// Simple Charlieplexing, Led by Led


// Define the position of the LED's on Port B. {pinoutmode,pin high)
// the first number defines the pinmode of Port B and the second number defines, wich Pin is High.
const byte LEDS[][2] = {
  {3,1},{3, 2},{5, 1},{5, 4},{18, 2}, {18, 16},                           
  {6, 2}, {6, 4},  {10, 2}, {10, 8},{36, 4}, {36, 32},
  {12, 4}, {12, 8}, {20, 4}, {20, 16}, {17, 1}, {17, 16},
  {24, 8}, {24, 16},{40, 8},{40, 32},  {34, 2}, {34, 32},
  {48, 16}, {48, 32}, {9, 1}, {9, 8},  {33, 1}, {33, 32}   
  
  
};

long int waittime = 0;

void setup() {
  DDRB = B00000000;           // Set Pinmode of port B all to Input (tri-state)
}

void loop() {
  for (int i = 0; i <= 29; i++) {
    
  
  DDRB = LEDS[i][0] ;   // Set the two needed Pins of Port B to output
  PORTB= LEDS[i][1] ;   // Set one of the 2 selected Pins high, while the other one remains low
  
  waittime = millis();
  do {
    
  } while ((unsigned long)(millis() - waittime) < 150); // wait for 150 milliseconds 
  }
}
