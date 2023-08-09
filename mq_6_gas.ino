int spin=A0;
int data;
int led = 10;
int buz = 6;
void setup()
{  
  Serial.begin(9600);   
  pinMode(spin,INPUT);
  pinMode(led, OUTPUT);
  pinMode(buz, OUTPUT);                         
 }
void loop()
{
  data = analogRead(spin);       
  Serial.print("Sensor Data:");
  Serial.println(data);
  delay(100);     
  if (data > 170)
  {
    digitalWrite(led, HIGH);
    digitalWrite(buz, HIGH);
  }                        
  else      
  {
    digitalWrite(led,LOW);
    digitalWrite(buz,LOW);
  }
}