
#define seg7_A  2
#define seg7_B  3
#define seg7_C  4
#define seg7_D  5
#define seg7_E  6
#define seg7_F  7
#define seg7_HM 8
#define seg7_KP  9
#define seg7_DP  14

#define seg7_TR1  15
#define seg7_TR2  16
#define seg7_TR3  17
#define seg7_TR4  18
#define seg7_TR5  19

void setup() {
  Serial.begin( 115200 ); 

  pinMode(seg7_A, OUTPUT);
  pinMode(seg7_B, OUTPUT);
  pinMode(seg7_C, OUTPUT);
  pinMode(seg7_D, OUTPUT);
  pinMode(seg7_E, OUTPUT);
  pinMode(seg7_F, OUTPUT);
  pinMode(seg7_HM, OUTPUT);
  pinMode(seg7_KP, OUTPUT);
  pinMode(seg7_DP, OUTPUT);
  pinMode(seg7_TR1, OUTPUT);
  pinMode(seg7_TR2, OUTPUT);
  pinMode(seg7_TR3, OUTPUT);
  pinMode(seg7_TR4, OUTPUT);
  pinMode(seg7_TR5, OUTPUT);

 }

    
void loop() {
  SEG7_DATA("+1234");
}


void SEG7_DATA(char num[])
{
 int TIME=1;
//-----------------------------------------//
    digitalWrite(seg7_TR1, LOW );
    digitalWrite(seg7_TR2, HIGH);
    digitalWrite(seg7_TR3, HIGH);
    digitalWrite(seg7_TR4, HIGH);
    digitalWrite(seg7_TR5, HIGH);
    
    SEG7_NUM(num[0]);
     delay(TIME);
     SEG7_CLEAR();
     delay(TIME);
 //-----------------------------------------//
    digitalWrite(seg7_TR1, HIGH);
    digitalWrite(seg7_TR2, LOW);
    digitalWrite(seg7_TR3, HIGH);
    digitalWrite(seg7_TR4, HIGH);
    digitalWrite(seg7_TR5, HIGH);
    
    SEG7_NUM(num[1]);
     delay(TIME);
     SEG7_CLEAR();
     delay(TIME);
 //-----------------------------------------//
    digitalWrite(seg7_TR1, HIGH);
    digitalWrite(seg7_TR2, HIGH);
    digitalWrite(seg7_TR3, LOW);
    digitalWrite(seg7_TR4, HIGH);
    digitalWrite(seg7_TR5, HIGH);
    
    SEG7_NUM(num[2]);
     delay(TIME);
     SEG7_CLEAR();
     delay(TIME);
 //-----------------------------------------//
    digitalWrite(seg7_TR1, HIGH);
    digitalWrite(seg7_TR2, HIGH);
    digitalWrite(seg7_TR3, HIGH);
    digitalWrite(seg7_TR4, LOW);
    digitalWrite(seg7_TR5, HIGH);
    
    SEG7_NUM(num[3]);
     delay(TIME);
     SEG7_CLEAR();
     delay(TIME);
 //-----------------------------------------//
    digitalWrite(seg7_TR1, HIGH);
    digitalWrite(seg7_TR2, HIGH);
    digitalWrite(seg7_TR3, HIGH);
    digitalWrite(seg7_TR4, HIGH);
    digitalWrite(seg7_TR5, LOW);
    
    SEG7_NUM(num[4]);
    delay(TIME);
     SEG7_CLEAR();
     delay(TIME);
 //-----------------------------------------//
}
void SEG7_CLEAR()
{
    digitalWrite(seg7_A, HIGH);
    digitalWrite(seg7_B, HIGH );
    digitalWrite(seg7_C, HIGH );
    digitalWrite(seg7_D, HIGH);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, HIGH);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, HIGH);
    digitalWrite(seg7_DP, HIGH);
}
void SEG7_NUM(char num)
{
  if(num == '0')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, LOW);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, HIGH);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '1')
  {
    digitalWrite(seg7_A, HIGH);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, HIGH);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, HIGH);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, HIGH);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '2')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, HIGH );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, LOW);
    digitalWrite(seg7_F, HIGH);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '3')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, HIGH);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '4')
  {
    digitalWrite(seg7_A, HIGH);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, HIGH);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '5')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, HIGH );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '6')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, HIGH );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, LOW);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '7')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, HIGH);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, HIGH);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '8')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, LOW);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
  if(num == '9')
  {
    digitalWrite(seg7_A, LOW);
    digitalWrite(seg7_B, LOW );
    digitalWrite(seg7_C, LOW );
    digitalWrite(seg7_D, LOW);
    digitalWrite(seg7_E, HIGH);
    digitalWrite(seg7_F, LOW);
    digitalWrite(seg7_HM, HIGH);
    digitalWrite(seg7_KP, LOW);
    digitalWrite(seg7_DP, HIGH);
  }
}
