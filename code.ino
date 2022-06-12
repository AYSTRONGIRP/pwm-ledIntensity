//code starts
void setup()
{
TCCR1B &= ~(1<<WGM13);
TCCR1B |= (1<<WGM12);
TCCR1A &= ~(1<<WGM11);
TCCR1A |= (1<<WGM10); 
 
TCCR1A |= (1<<COM1B1);
TCCR1A &= ~(1<<COM1B0);

TCCR1B |= (1<<CS10) | (1<<CS11);
TCCR1B &= ~(1<<CS12);

DDRB |= (1<<DDB2);
}
void loop()
{
  for(int i=0; i<257; i++){
  OCR1B = i;  
  delay(2); 
  } 
  delay (2000);
}
