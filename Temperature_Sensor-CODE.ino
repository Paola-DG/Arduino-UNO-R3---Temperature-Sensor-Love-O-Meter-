// Constants and Variables
const int sensorPin = A0;
const float baselineTemp = 20.0;


void setup() {
  // Initialize the serial port to the desired speed
  Serial.begin(9600);

  // Initialize the digital pin directions and turn off
  for(int pinNumber = 2; pinNumber < 5; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  // Read the temperature sensor
  int sensorVal = analogRead(sensorPin);

  // Send the temperature sensor values to the computer
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  // Convert sensor reading to voltage
  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(" , Volts: ");
  Serial.print(voltage);
  
  // Convert the voltage to temperature and send the value to the computer
  Serial.print(" , degrees C: ");
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);

  if(temperature < (baselineTemp + 2)){ // Turn off LEDs for a LOW temperature
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }else if(temperature >= (baselineTemp + 2) && temperature < (baselineTemp + 4)){ // Turn on one LED for a LOW temperature
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }else if(temperature >= (baselineTemp + 4) && temperature < (baselineTemp + 6)){ // Turn on two LEDs for a MEDIUM temperature
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }else if(temperature >= (baselineTemp + 6)){ // Turn on three LEDs for a high temperature
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

  delay(2500);
  
}