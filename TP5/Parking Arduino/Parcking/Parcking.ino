

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char msg;
int LED1=9;
int LED2=8;

void setup() {
  Serial.begin(9600); // put your setup code here, to run once:
pinMode (LED1,OUTPUT);
pinMode (LED2,OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
   
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("   TP5 PARKING     ");
  lcd.setCursor(0,1);
  lcd.print("      UAS     ");
  if(Serial.available())// put your main code here, to run repeatedly:
{
 msg = Serial.read();
if(msg =='a') {
  lcd.setCursor(0,0);
  lcd.print("PAYEZ VOTRE       ");digitalWrite(LED1,HIGH);
   lcd.setCursor(0,1);
  lcd.print("TICKET                ");
  delay(3000);
  lcd.setCursor(0,0);
  lcd.print("AU REVOIR        ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
  
  delay(2000);
  digitalWrite(LED1,LOW);
  lcd.setCursor(0,0);
  lcd.print("                ");
  
}
if(msg =='b') {
  lcd.setCursor(0,0);
  lcd.print("PRENDRE UN          ");
  lcd.setCursor(0,1);
  lcd.print(" TICKET               ");
  digitalWrite(LED2,HIGH);
  delay(3000);
  lcd.setCursor(0,0);
  lcd.print("BIENVENUE         ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
  delay(2000);
  digitalWrite(LED2,LOW);

}
}}
