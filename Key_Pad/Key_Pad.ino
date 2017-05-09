#include <LiquidCrystal.h>

#include <Keypad.h>

const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'=','0','E','/'},
};
byte rowPins[ROWS]={37,36,35,34};
byte colPins[COLS]={41,40,39,38};
Keypad keypad=Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

LiquidCrystal panel(12,11,30,31,32,33);

int keypress;
void setup() {
  // put your setup code here, to run once:
 panel.begin(16,2);
 panel.clear();
 
}

void loop() {
  // put your main code here, to run repeatedly:
char key=keypad.getKey();
if(key!=NO_KEY)
{
  if(key=='1')
  {
  keypress=1; 
  panel.print(keypress);
  
  }
  if(key=='2')
  {
  keypress=2; 
  panel.print(keypress);
  
  }
  if(key=='3')
  {
  keypress=3; 
  panel.print(keypress);
  
  }
  if(key=='+')
  {
   
  panel.print(key);
  
  }
  if(key=='4')
  {
  keypress=4; 
  panel.print(keypress);
  
  }
  if(key=='5')
  {
  keypress=5; 
  panel.print(keypress);
  
  }
  if(key=='6')
  {
  keypress=6; 
  panel.print(keypress);
  
  }
  if(key=='-')
  {
  
  panel.print(key);
  
  }
  if(key=='7')
  {
  keypress=7; 
  panel.print(keypress);
  
  }
  if(key=='8')
  {
  keypress=8; 
  panel.print(keypress);
  
  }
  if(key=='9')
  {
  keypress=9; 
  panel.print(keypress);
  
  }
  if(key=='*')
  {
   
  panel.print(key);
  
  }
  if(key=='=')
  {
   
  panel.print(key);
  
  }
  if(key=='0')
  {
  keypress=0; 
  panel.print(keypress);
  
  }
  if(key=='E')
  {
   
  panel.print("\b");
  
  }
  if(key=='/')
  {
  
  panel.print(key);
  
  }
}


}
