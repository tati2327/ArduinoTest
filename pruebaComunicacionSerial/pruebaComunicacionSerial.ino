int led = 11;
char value;
int bright;

char buffer[1] = {0};

void setup() {                
  //pinMode(led, OUTPUT);     
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    char value = Serial.read();
         
    Serial.print("Recibido: ");
    Serial.println(value);

    switch(value){
      case '1':
        bright = 10;   
        delay(1500);
        break;
     case '2':
        bright = 50;   
        delay(1500);
        break;
     case '3':
        bright = 100;   
        delay(1500);
        break;
     case '4':
        bright = 200;   
        delay(1500);
        break;
    case '5':
        bright = 255;   
        delay(1500);
        break;
    default:
        bright = 0;   
        delay(1500);
        break;
    }
    analogWrite(led, bright);
    delay(1500);
    /*if(value == 1){int
      digitalWrite(led, HIGH);   
      delay(500);              
      digitalWrite(led, LOW);   
      delay(500);               
      Serial.print("Recibido: ");
      Serial.println(value);
      Serial.flush();
    }*/
  }
}
