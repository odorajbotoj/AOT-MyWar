#include "pitches.h"

/* 定义:蜂鸣器的输出引脚 */
int buzzer = 11;
void play(int note,int t)
{
  tone(buzzer, note);
  delay(t);
  noTone(buzzer);
}
void st(int t)
{
  delay(t);
}
void st1ms()
{
  st(1);
}
void setup()
{
  pinMode(buzzer, OUTPUT);
}

/* 原曲为1=E,本程序取1=C */

void loop()
{
  play(NOTE_A4,1000);
  play(NOTE_GS4,1000);
  play(NOTE_A4,1000);
  play(NOTE_C5,500);
  play(NOTE_E5,500);
  play(NOTE_A4,1000);
  play(NOTE_GS4,1000);
  play(NOTE_A4,1000);
  st1ms();
  play(NOTE_A4,250);
  play(NOTE_G4,250);
  play(NOTE_F4,250);
  play(NOTE_E4,250);

  play(NOTE_A3,750);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_C4,250);
  play(NOTE_A3,500);
  st1ms();
  play(NOTE_A3,250);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,500);
  play(NOTE_C4,250);
  play(NOTE_B3,250);
  play(NOTE_A3,750);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_C4,250);
  play(NOTE_A3,500);
  st1ms();
  play(NOTE_A3,250);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,1000);

  play(NOTE_A3,750);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_C4,250);
  play(NOTE_A3,500);
  st1ms();
  play(NOTE_A3,250);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,250);
  st1ms();
  play(NOTE_E4,500);
  play(NOTE_C4,250);
  play(NOTE_B3,250);
  play(NOTE_A3,500);
  play(NOTE_A4,500);
  play(NOTE_A3,500);
  play(NOTE_A4,500);
  play(NOTE_A3,250);
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,750);
  st1ms();

  play(NOTE_A4,125);
  play(NOTE_B4,125);

  play(NOTE_C5,250);
  play(NOTE_B4,250);
  play(NOTE_D5,250);
  play(NOTE_C5,250);
  play(NOTE_E5,250);
  play(NOTE_D5,250);
  play(NOTE_F5,250);
  play(NOTE_E5,250);
  
  play(NOTE_D5,250);
  play(NOTE_E5,250);
  play(NOTE_C5,250);
  play(NOTE_B4,250);
  play(NOTE_C5,250);
  play(NOTE_E5,250);
  play(NOTE_B4,250);
  play(NOTE_E5,250);
  play(NOTE_A4,250);
  play(NOTE_E4,250);
  play(NOTE_A4,250);
  play(NOTE_B4,250);
  play(NOTE_C5,250);
  play(NOTE_E4,250);
  play(NOTE_B4,250);
  play(NOTE_E4,250);
  play(NOTE_A4,250);
  play(NOTE_E4,250);
  play(NOTE_A4,250);
  play(NOTE_E4,250);
  play(NOTE_A4,250);
  play(NOTE_C5,250);
  
  play(NOTE_E3,500);

  play(NOTE_C4,500);
  play(NOTE_D4,250);
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_C4,500);
  play(NOTE_A3,250);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_B3,500);
  play(NOTE_F3,250);
  st1ms();
  play(NOTE_F3,250);
  play(NOTE_E3,500);
  st1ms();
  play(NOTE_E3,250);
  play(NOTE_C4,500);
  play(NOTE_D4,250);
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_C4,500);
  play(NOTE_A3,250);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_G4,500);
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,500);
  play(NOTE_E3,500);
  play(NOTE_C4,500);
  play(NOTE_D4,250);
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_C4,500);
  play(NOTE_A3,250);
  st1ms();
  play(NOTE_A3,250);
  play(NOTE_B3,500);
  play(NOTE_F3,250);
  st1ms();
  play(NOTE_F3,250);
  play(NOTE_E3,750);

  play(170,250);
  st1ms();
  play(170,250);
  st1ms();
  play(170,250);
  st1ms();
  play(170,250);
  st1ms();
  play(170,250);
  st1ms();
  play(170,750);

  st(1000);

  play(NOTE_B4,250);
  play(NOTE_A4,250);
  play(NOTE_G4,250);
  play(NOTE_FS4,250);
  play(NOTE_B3,750);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_D4,250);
  play(NOTE_B3,500);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,500);
  play(NOTE_D4,250);
  play(NOTE_CS4,250);
  play(NOTE_B3,750);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_D4,250);
  play(NOTE_B3,500);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,1000);

  play(NOTE_B3,750);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_D4,250);
  play(NOTE_B3,500);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,500);
  play(NOTE_D4,250);
  play(NOTE_CS4,250);
  play(NOTE_B3,500);
  play(NOTE_B4,500);
  play(NOTE_B3,500);
  play(NOTE_B4,500);
  play(NOTE_B3,250);
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  play(NOTE_A4,250);
  play(NOTE_G4,250);
  play(NOTE_FS4,250);

  play(NOTE_B3,750);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_D4,250);
  play(NOTE_B3,500);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,500);
  play(NOTE_D4,250);
  play(NOTE_CS4,250);
  play(NOTE_B3,750);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_D4,250);
  play(NOTE_B3,500);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,750);

  play(NOTE_B3,750);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_D4,250);
  play(NOTE_B3,500);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,250);
  st1ms();
  play(NOTE_FS4,500);
  play(NOTE_D4,250);
  play(NOTE_CS4,250);
  play(NOTE_B3,500);
  play(NOTE_B4,500);
  play(NOTE_B3,500);
  play(NOTE_B4,500);
  play(NOTE_B3,250);
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,750);

  play(NOTE_FS5,125);
  play(NOTE_A5,125);
  play(NOTE_B5,500);
  st1ms();
  play(NOTE_B5,500);
  play(NOTE_FS4,250);
  play(NOTE_E4,250);
  play(NOTE_D4,500);
  play(NOTE_CS4,1000);
  play(NOTE_D4,500);
  play(NOTE_CS4,500);
  play(NOTE_B3,500);
  play(NOTE_B4,500);
  play(NOTE_B3,500);
  play(NOTE_B4,500);
  play(NOTE_B3,250);
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,250);
  st1ms();
  play(NOTE_B4,750);

  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();

  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_C4,250);
  st1ms();
  play(NOTE_C4,250);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_B3,250);
  st1ms();
  play(NOTE_C4,250);
  st1ms();
  play(NOTE_C4,250);
  st1ms();

  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_A4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();
  play(NOTE_GS4,250);
  st1ms();

  play(NOTE_A3,500);
  play(NOTE_A4,500);
  play(NOTE_A3,500);
  play(NOTE_A4,500);
  play(NOTE_A3,500);
  play(NOTE_A4,500);
  play(NOTE_A3,500);
  play(NOTE_A4,500);

  st(5000);
}
/*END*/
