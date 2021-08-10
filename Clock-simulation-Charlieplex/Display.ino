void Display (int Number,int Position){
for (int i = Number; i < Position+Number; i++) {
    
  
  DDRB = LEDS[i][0] ;
  PORTB= LEDS[i][1] ;
  waittime = micros();
  do {
    
  } while ((unsigned long)(micros() - waittime) < 500); 
  }

}









void HourLED (int number){
for (int i = 0; i < number; i++) {
    
  
  DDRB = LEDS[i][0] ;
  PORTB= LEDS[i][1] ;
  waittime = micros();
  do {
    
  } while ((unsigned long)(micros() - waittime) < 500); 
  }

}


void MinuteLED (int number){
for (int i = 12; i < number+12; i++) {
    
  
  DDRB = LEDS[i][0] ;
  PORTB= LEDS[i][1] ;
  waittime = micros();
  do {
    
  } while ((unsigned long)(micros() - waittime) < 500); 
  }

}

void MinuteStepLED (int number){
for (int i = 24; i < number+24; i++) {
    
  
  DDRB = LEDS[i][0] ;
  PORTB= LEDS[i][1] ;
  waittime = micros();
  do {
    
  } while ((unsigned long)(micros() - waittime) < 500); 
  }

}
