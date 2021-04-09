int RedLed = D6;
int BlueLed = D5;
int GreenLed = D4;

void setup()
{
   pinMode(RedLed, OUTPUT);
   pinMode(BlueLed, OUTPUT);
   pinMode(GreenLed, OUTPUT);
   
   Particle.function("ledsets",LedController);


}



int LedController(String color) 
{

    if (color=="Red") 
    {
        digitalWrite(RedLed, HIGH);
        digitalWrite(BlueLed, LOW);
        digitalWrite(GreenLed, LOW);
        
        return 1;
    }
    else if (color=="Blue") 
    {
        digitalWrite(RedLed, LOW);
        digitalWrite(BlueLed, HIGH);
        digitalWrite(GreenLed, LOW);

        return 1;
    }

    else if (color=="Green") 
    {
        digitalWrite(RedLed, LOW);
        digitalWrite(BlueLed, LOW);
        digitalWrite(GreenLed, HIGH);

        return 1;
    
    }
    else if (color=="colorful")
    {
       digitalWrite(RedLed, HIGH);
       digitalWrite(BlueLed, HIGH);
       digitalWrite(GreenLed, HIGH);
       
       return 1;
    }
    else if (color=="turnOff")
    {
       digitalWrite(RedLed, LOW);
       digitalWrite(BlueLed, LOW);
       digitalWrite(GreenLed, LOW);
       
       return 1;
    }
    

}
