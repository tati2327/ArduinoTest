

int led = 13;
int valor;


void setup() {                
  pinMode(led, OUTPUT);     
  Serial.begin(9600);
}


void loop() {
  digitalWrite(led, LOW);
  while(Serial.available()>0){
  digitalWrite(led, HIGH);   
  delay(500);              
  digitalWrite(led, LOW);   
  delay(500);               
  Serial.print("Recibido: ");
  Serial.println(valor);
  Serial.flush(); 
  }
}

/*int incomingByte = 0;   // for incoming serial data
int led = 11;
int bright;

void setup(){
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
  pinMode(led, OUTPUT);
}

void loop(){
  // send data only when you receive data:
  if (Serial.available() > 0){
      // read the incoming byte:
      incomingByte = Serial.read();
      //char id = incomingByte[0];
     
      switch (incomingByte){
        case 1:
          bright = 10;
          break;
        case 2:
          bright = 50;
          break;
        case 3:
          bright = 255;
          break;
        default:
          bright = 0;
          break;
       }

      analogWrite(led, bright);

      Serial.print(incomingByte);
    }
}*/


/*const int ledPIN = 9;
int incomingByte = 0;
 
void setup() {
  Serial.begin(9600);    //iniciar puerto serie
  pinMode(ledPIN , OUTPUT);  //definir pin como salida
}
 
void loop(){

  //Envia datos solo si recibe datos
  if(Serial.available()>0){
    //Leyendo los datos de entrada
    incomingByte = Serial.read();

    Serial.print("Se recibio: ");
    Serial.println(incomingByte);
  }
  
  digitalWrite(ledPIN , HIGH);   // poner el Pin en HIGH
  delay(1000);                   // esperar un segundo
  digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
  delay(1000);                   // esperar un segundo
}*/
 
 
 
 /*// Práctica encender y apagar dos LED
int bytes = 0;
const int LED1=13;
const int LED2=12;

char buffer[100] = {0};

void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop(){
  if(Serial.available() > 0){
    bytes = Serial.read();
    digitalWrite(LED1,HIGH);
    delay(1000);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delay(1000);  
    digitalWrite(LED2,LOW);
  }

    digitalWrite(LED1,HIGH);
    delay(1000);
    digitalWrite(LED1,LOW);
    delay(1000);
}*/

/*char incomingByte = 0;   // for incoming serial data
const int led = 13;
int bright;

void setup(){
  //Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
  pinMode(led,OUTPUT);
}

void loop(){
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(led,LOW);

  // send data only when you receive data:
  if (Serial.available() > 0){
      // read the incoming byte:
      incomingByte = Serial.read();

      switch (incomingByte){
      case '1':
        bright = 10;
        break;
      case '2':
        bright = 50;
        break;
      case '3':
        bright = 255;
        break;

      default:
        bright = HIGH;
        break;
        }

      digitalWrite(led, bright);
      delay(1000);
      digitalWrite(led,HIGH);

      Serial.println(incomingByte);
    }
}*/
