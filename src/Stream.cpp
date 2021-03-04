/**********************************************************************
项目名称/Project          : 零基础入门学用物联网
程序名称/Program name     : d_multi_ms
团队/Team                : 太极创客团队 / Taichi-Maker (www.taichi-maker.com)
作者/Author              : CYNO朔
日期/Date（YYYYMMDD）     : 20200703
程序目的/Purpose          : 
本程序旨在演示如何使用多个Ticker对象来让ESP8266处理多个任务。

如需了解本程序的详细说明，请参考以下函数：
http://www.taichi-maker.com/homepage/esp8266-nodemcu-iot/iot-c/esp8266-tips/tinker/
-----------------------------------------------------------------------
其它说明 / Other Description：
本程序为太极创客团队制作的免费视频教程《零基础入门学用物联网 》中一部分。该教程系统的
向您讲述ESP8266的物联网应用相关的软件和硬件知识。以下是该教程目录页：
http://www.taichi-maker.com/homepage/esp8266-nodemcu-iot/                    
***********************************************************************/
#include <Arduino.h>
#include <Ticker.h>
//#include <analogWrite.h>

Ticker ticker;
Ticker buttonTicker;


int count;
#define LED_BUILTIN2 D5

void sayHi(int hiTimes){
  count++;
  Serial.print("Hi ");
  Serial.println(count);

  if (count >= hiTimes) {
    ticker.detach();
    Serial.print("ticker.detach();");
  }
}


void buttonCheck(){

}

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN2, OUTPUT);

  
  ticker.attach(1, sayHi, 60);
  //buttonTicker.attach_ms(100, buttonCheck);
}

void loop() {
  for (int fadeValue = 0 ; fadeValue <= 1023; fadeValue += 5) {
    analogWrite(LED_BUILTIN2, fadeValue);
    delay(10);
  }

  for (int fadeValue = 1023 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(LED_BUILTIN2, fadeValue);
    delay(10);
  }
  delay(3000);
}


