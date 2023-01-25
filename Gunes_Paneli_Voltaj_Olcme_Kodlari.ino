const int voltageSensor = 34;
float vOUT = 0.0;
float vIN = 0.0;
float R1 = 30000.0;
float R2 = 7500.0;
int value = 0;
 
//float Watt;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
 // int adc = analogRead(A2);
  //float voltage = adc * 5 / 1023.0;
  //float current = (voltage - 2.5) / 0.066;
  //if (current < 0.12) {
 //   current = 0;
 // }
  //lcd.setCursor(0, 0);
  //lcd.print("Akım :");
  //lcd.print(current);
  //lcd.print("A ");
  //Serial.print("Current : ");
  //Serial.println(current);
  //delay(100);
 
  value = analogRead(voltageSensor);
  vOUT = (value * 5.0) / 6080.0;
  vIN = vOUT / (R2 / (R1 + R2));

 
  Serial.print("Voltage : ");
  Serial.println(vIN);  
   delay(1100);
 
  
//Watt=(vIN*current); 
 
//lcd.setCursor(0, 0);
  //lcd.print("Watt :");
  //lcd.print(Watt);
  //lcd.print("W ");
 // Serial.print("Watt : ");
  //Serial.println(Watt);  
  //delay(2500);

}