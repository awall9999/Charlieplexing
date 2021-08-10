const byte LEDS[][2] = {
  {18, 16}, {18, 2}, {5, 4}, {5, 1}, {3, 2}, {3,1},
  {36, 32}, {36, 4}, {10, 8}, {10, 2}, {6, 4}, {6, 2},
  {17, 16}, {17, 1}, {20, 16}, {20, 4}, {12, 8}, {12, 4},
  {34, 32}, {34, 2}, {40, 32}, {40, 8}, {24, 16}, {24, 8}, 
  {33, 32}, {33, 1}, {9, 8}, {9, 1},{48, 32}, {48, 16}
    
  
  
};

long int waittime = 0;
long int scrolltime = 0;


void Display (int Number,int Position){
for (int i = Number; i < Position+Number; i++) {
    
  
  DDRB = LEDS[i][0] ;
  PORTB= LEDS[i][1] ;
  waittime = micros();
  do {
    
  } while ((unsigned long)(micros() - waittime) < 500); 
  }

}

void setup() {
  DDRB = B00000000;
}

void loop() {
  int hour = random(0,13);
  int minute = random(0,12);
  int five = random(0,5);
  
  scrolltime = millis();
  do{
  Display(0,hour);
  Display(12,minute);
  Display(24,five);
    }while ((unsigned long)(millis() - scrolltime) < 1000);
  
}
