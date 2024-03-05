int sensorPin=4;
int sensorDurum=0;

int r_led=8;
int g_led=9;
int b_led=10;
int sayac=0;


void setup() {
  pinMode(sensorPin,INPUT);
  pinMode(r_led,OUTPUT);
  pinMode(g_led,OUTPUT);
  pinMode(b_led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  sensorDurum=digitalRead(sensorPin);

  Serial.println(sensorDurum);
  if(sensorDurum==0)
  {
    sayac++;
    delay(100);

    if(sayac>3)
    {
      sayac=1;
    }
  }

  if(sayac==1)
  {
    digitalWrite(r_led,1);
    digitalWrite(g_led,0);
    digitalWrite(b_led,0);

  }
  else if(sayac==2)
  {
    digitalWrite(r_led,0);
    digitalWrite(g_led,1);
    digitalWrite(b_led,0);

  }
  else if(sayac==3)
  {
    digitalWrite(r_led,0);
    digitalWrite(g_led,0);
    digitalWrite(b_led,1);

  }
  else
  {
    digitalWrite(r_led,0);
    digitalWrite(g_led,0);
    digitalWrite(b_led,0);


  }

}
