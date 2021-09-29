int red= 11;
int green = 10;
int blue = 9;
int sensor = 2;
int sensorVal;
void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(sensor, INPUT);
}

void redc(){
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  }
  
void greenc(){  
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  }

void bluec(){
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  }

void off(){
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  }

void loop(){
  sensorVal = digitalRead(sensor);
  if (sensorVal == 1){
    redc();
    delay(200);
  }
  if (sensorVal == 1){
    greenc();
    delay(200);
    }
  if (sensorVal == 1){
    bluec();
    delay(200);
    }
  off();
   }
