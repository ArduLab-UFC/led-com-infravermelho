#define pinoLed 9 //PINO DIGITAL UTILIZADO PELO LED
#define pinoSensor 3 //TERMINAL D0 UTILIZADO PELO SENSOR 
#define buzzer 6

void setup(){
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLed, OUTPUT);
  pinMode(buzzer, OUTPUT); 
  digitalWrite(pinoLed, LOW); 
  Serial.begin(9600);
}

void loop(){

  if(digitalRead(pinoSensor) == 0){ 
      digitalWrite(pinoLed, HIGH);
      tone(buzzer,500);
      delay(1000);
      noTone(buzzer);
  }else{ 
    digitalWrite(pinoLed, LOW);
  
  }

  // if(analogRead(pinoSensor) < 700){ 
  //     digitalWrite(pinoLed, HIGH);
  //     tone(buzzer,500);
  //     delay(500);
  //     noTone(buzzer);
  // }else{ 
  //   digitalWrite(pinoLed, LOW);
  // }

  Serial.print("Sensor: ");
  Serial.println(digitalRead(pinoSensor));
  //Serial.println(analogRead(pinoSensor));
  Serial.println("-------------------------");
  delay(100);
}



