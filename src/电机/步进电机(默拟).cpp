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
//const int ENAPin = 5; //define Enable Pin
#define DIRPin  D5//define Direction pin
#define PULPin  D6//define Pulse pin
//const int BUTTON = 8; //define Button pin
 
//1秒一圈 1步一圈 0.5步就是半圈
//占空比多少无所谓，主要是持续时间
void motor(float steps){
  analogWrite(PULPin, int(255/2));
  delay(int(steps*1000));
  analogWrite(PULPin, 0);
}
 
void setup()
{
  //pinMode (ENAPin, OUTPUT);
  pinMode(PULPin, OUTPUT);//pwm
  pinMode(DIRPin, OUTPUT);//方向
  //pinMode (BUTTON, INPUT);

  analogWriteFreq(200);//电机1秒=1圈  
  motor(0.5);
}

 
void loop()
{
  
}
 
