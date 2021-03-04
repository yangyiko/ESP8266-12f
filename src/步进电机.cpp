//https://blog.csdn.net/renyuanxingxing/article/details/80376170
//https://item.taobao.com/item.htm?spm=a1z0k.7385961.1997985097.d4918997.2e31588dhxTAy2&id=559875365452&_u=t2dmg8j26111 淘宝地址
//

//本次实验电机驱动采用共阴极接线方式
//将步进电机的参数写到一个子函数中，并加入限位开关，触动限位开关可实现步进电机停转
#include <Arduino.h>
#include <Ticker.h>
// //#include <analogWrite.h>

Ticker ticker;
//#include <Ticker.h>
//#include <analogWrite.h>
//20180519 by xcx
//const int ENAPin = 5; //define Enable Pin
#define DIRPin  D5//define Direction pin
#define PULPin  D6//define Pulse pin
//const int BUTTON = 8; //define Button pin
 
void motor(float steps){
  analogWrite(PULPin, int(255/2));
  delay(int(steps*1000));
  analogWrite(PULPin, 0);
}
 
void setup()
{
  //pinMode (ENAPin, OUTPUT);
  pinMode(PULPin, OUTPUT);
  pinMode(DIRPin, OUTPUT);
  //pinMode (BUTTON, INPUT);

  analogWriteFreq(200);//电机1秒=1圈  
  motor(0.5);
}



//步进电机子函数
//函数：StepperMotor    功能：控制步进电机是否脱机、方向、步数
//参数：ENA---脱机状态，true为脱机
//      DIR---方向控制
//      steps---步进的步数，若steps为0，则电机上电电磁锁死，不转
//无返回值
void StepperMotor(boolean ENA, boolean DIR, int steps)
{
  // digitalWrite(ENAPin, ENA);
  //digitalWrite(DIRPin, DIR);
  for (int i = 0; i < steps; i++) //Forward XXXX steps
  {
    digitalWrite(PULPin, HIGH);
    delayMicroseconds(50);
    digitalWrite(PULPin, LOW);
    delayMicroseconds(50);
  }

  
}
 
void loop()
{
  // if (digitalRead(BUTTON))//如果检测按钮为高电平，步进电机则转，否则不转
  // {
   // StepperMotor(false, true, 32);//此时3200由于在这个循环中，只要不修改成0，则修改他的值没什么影响，转速不会改变
  // }
  // else
  // StepperMotor(false, true, 0);//电机停转

  //  for (int fadeValue = 0 ; fadeValue <= 1023; fadeValue += 5) {
    // analogWrite(PULPin, int(255/2));
   // delay(10);
  // }
}
 
