//code for 7segment display from serial input

int a=15,b=2,c=4,d=5,e=18,f=19,g=21;
int num;
void setup() 
{
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(13,OUTPUT);

  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

   Serial.println("PLEASE ENTER A NUMBER FROM 0-9:");
}

void loop() 
{
  if(Serial.available()>0) //checking if we have anything input
  {
    if (isDigit(Serial.peek())) 
    {
      num=Serial.parseInt();
      //print number in 7segment display
      switch(num)
      {
        case 0:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(a,HIGH);
          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(e,HIGH);
          digitalWrite(f,HIGH);
          Serial.println("you havev just enterred number 0");
          break;
        }

        case 1:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          Serial.println("you havev just enterred number 1");
          break;
        }

        case 2:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(b,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(a,HIGH);
          digitalWrite(e,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 2");
          break;
        }
        case 3:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(b,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(a,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 3");
          break;
        }
        case 4:
       {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(f,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 4");
          break;
        }

        case 5:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(a,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(f,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 5");
          break;
        }

        case 6:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(a,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(e,HIGH);
          digitalWrite(f,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 6");
          break;
        }
        case 7:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(a,HIGH);
          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          Serial.println("you havev just enterred number 7");
          break;
        }

        case 8:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(a,HIGH);
          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(e,HIGH);
          digitalWrite(f,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 8");
          break;
        }

        case 9:
        {
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);


          digitalWrite(a,HIGH);
          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(f,HIGH);
          digitalWrite(g,HIGH);
          Serial.println("you havev just enterred number 9");
          break;
        }
       default:
        {
          if(num>9 || num<0)
          {
            digitalWrite(a,LOW);
            digitalWrite(b,LOW);
            digitalWrite(c,LOW);
            digitalWrite(d,LOW);
            digitalWrite(e,LOW);
            digitalWrite(f,LOW);
            digitalWrite(g,LOW);

            Serial.println("\ninvalid choice");
            Serial.println("choose again");
            //FOR BUZZER
            digitalWrite(13,HIGH);
            delay(100);
            digitalWrite(13,LOW);
            delay(100);
            digitalWrite(13,HIGH);
            delay(100);
            digitalWrite(13,LOW);
            delay(100);
            digitalWrite(13,HIGH);
            delay(700);
            digitalWrite(13,LOW);
          }
        } 
      }

    }
    else//if entered numbner is char this will excute
    {
      delay(10);//esp 32 is veryb fast 
      Serial.println("bruh i meant number from 0-9");
      Serial.println("enter again");

      //FOR BUZZER
      digitalWrite(13,HIGH);
      delay(100);
      digitalWrite(13,LOW);
      delay(100);
      digitalWrite(13,HIGH);
      delay(100);
      digitalWrite(13,LOW);
      delay(100);
      digitalWrite(13,HIGH);
      delay(700);
      digitalWrite(13,LOW);

      while(Serial.available() > 0) 
      {

        Serial.read(); 
      }
      return;
    }
  }

}
