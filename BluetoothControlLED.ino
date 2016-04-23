#define LED_PIN1  2  //
#define LED_PIN2  3
#define LED_PIN3  4
#define LED_PIN4  5

#define LED_PIN5  6
#define LED_PIN6  7
#define LED_PIN7  8
#define LED_PIN8  9


int inByte1 = 0;         // incoming serial byte
int inByte2 = 0;
byte bit0 = B00000001;   // 1
byte bit1 = B00000010;   // 2
byte bit2 = B00000100;   // 4
byte bit3 = B00001000;   // 8
byte bit4 = B00010000;   // 16
byte bit5 = B00100000;   // 32
byte bit6 = B01000000;   // 64
byte bit7 = B10000000;   // 128

byte bitDelay = 100; 
  
boolean status_unlock;
boolean status_bluetooth;

long interval = 100;           // interval at which to blink (milliseconds)
long previousMillis = 0;        // will store last time LED was updat
int minite,sec;


void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
 
  
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);

  pinMode(LED_PIN5, OUTPUT);
  pinMode(LED_PIN6, OUTPUT);
  pinMode(LED_PIN7, OUTPUT);
  pinMode(LED_PIN8, OUTPUT);
  
  digitalWrite(LED_PIN1, LOW);  // switch on LED
  digitalWrite(LED_PIN2, LOW);  // switch on LED
  digitalWrite(LED_PIN3, LOW);  // switch on LED
  digitalWrite(LED_PIN4, LOW);  // switch on LED
    
  digitalWrite(LED_PIN5, LOW);  // switch on LED
  digitalWrite(LED_PIN6, LOW);  // switch on LED
  digitalWrite(LED_PIN7, LOW);  // switch on LED
  digitalWrite(LED_PIN8, LOW);  // switch on LED 
  
  Serial.print("Arduino control LEDs Start");
  Serial.print('\n');
}

void loop()
{
  while (Serial.available() > 0) {   
       
    inByte1 = Serial.parseInt(); // get incoming byte:  

    char c = Serial.read();

    if ( (c == '\n') || (c == '\r')) {

              Serial.println(" ");
        
              if (inByte1 & bit0){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN1,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN1,LOW);                   // send 0
              }

              if (inByte1 & bit1){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN2,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN2,LOW);                   // send 0
              }

              if (inByte1 & bit2){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN3,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN3,LOW);                   // send 0
              }

              if (inByte1 & bit3){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN4,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN4,LOW);                   // send 0
              }

              if (inByte1 & bit4){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN5,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN5,LOW);                   // send 0
              }

              if (inByte1 & bit5){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN6,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN6,LOW);                   // send 0
              }

              if (inByte1 & bit6){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN7,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN7,LOW);                   // send 0
              }

              if (inByte1 & bit7){                             // if bitwise AND resolves to true
                digitalWrite(LED_PIN8,HIGH);                  // send 1
              }
              else{                                           // if bitwise and resolves to false
                digitalWrite(LED_PIN8,LOW);                   // send 0
              }
              Serial.print(inByte1);
              Serial.print(" OK");
              
    }

     //delay(inByte2 * bitDelay);                    //delay
     //Serial.println("OK");
    
  } // if(Serial
    
} //Loop


