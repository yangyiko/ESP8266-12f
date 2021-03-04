// https://blog.csdn.net/Aspiration_H/article/details/107535299
//   ticker1.attach_ms(500, [],(){Serial.printf("%d: callback1 triggered!\r\n")}, millis());}); //匿名函数方式
// 2定时器启用方法：
// void Ticker::once(float seconds, callback_function_t callback); xx秒后只执行一次
// 其中入口参数：seconds—秒数 ；callback—回调函数；
// void Ticker::once(float seconds, void (*callback)(TArg), TArg arg); xx秒后只执行一次
// 其中入口参数：seconds—秒数 ；callback—回调函数；arg—回调函数参数；
// void Ticker::once_ms(uint32_t milliseconds, callback_function_t callback) ；xx毫秒后只执行一次
// 其中入口参数：milliseconds—毫秒数 ；callback—回调函数；
// void Ticker::once_ms(uint32_t milliseconds, void (*callback)(TArg), TArg arg) xx毫秒后只执行一次
// 其中入口参数：milliseconds—毫秒数 ；callback—回调函数；arg—回调函数参数；
// void Ticker::attach(float seconds, callback_function_t callback)； 每隔xx秒周期性执行
// 其中入口参数：seconds—秒数 ；callback—回调函数；
// void Ticker::attach(float seconds, void (*callback)(TArg), TArg arg) 每隔xx秒周期性执行
// 其中入口参数：seconds—秒数 ；callback—回调函数；arg—回调函数参数；
// void Ticker::attach_ms_scheduled(uint32_t milliseconds, callback_function_t callback) ；每隔xx毫秒周期性执行
// 其中入口参数：milliseconds—毫秒数 ；callback—回调函数；
// void Ticker::attach_ms(uint32_t milliseconds, void (*callback)(TArg), TArg arg)；每隔xx毫秒周期性执行
// 其中入口参数：milliseconds—毫秒数 ；callback—回调函数；arg—回调函数参数；
// 核心函数：
// ————————————————
// 版权声明：本文为CSDN博主「chen20171013」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/chen20171013/article/details/107655991

//   ticker2.once(2, callback2, 2333333); //2秒后调用一次callback2
// ————————————————
// 版权声明：本文为CSDN博主「Newbie_H」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/Aspiration_H/article/details/107535299

// /**********************************************************************
// 项目名称/Project          : 零基础入门学用物联网
// 程序名称/Program name     : d_multi_ms
// 团队/Team                : 太极创客团队 / Taichi-Maker (www.taichi-maker.com)
// 作者/Author              : CYNO朔
// 日期/Date（YYYYMMDD）     : 20200703
// 程序目的/Purpose          : 
// 本程序旨在演示如何使用多个Ticker对象来让ESP8266处理多个任务。

// 如需了解本程序的详细说明，请参考以下函数：
// http://www.taichi-maker.com/homepage/esp8266-nodemcu-iot/iot-c/esp8266-tips/tinker/
// -----------------------------------------------------------------------
// 其它说明 / Other Description：
// 本程序为太极创客团队制作的免费视频教程《零基础入门学用物联网 》中一部分。该教程系统的
// 向您讲述ESP8266的物联网应用相关的软件和硬件知识。以下是该教程目录页：
// http://www.taichi-maker.com/homepage/esp8266-nodemcu-iot/                    
// ***********************************************************************/
// #include <Arduino.h>
// #include <Ticker.h>
// //#include <analogWrite.h>

// Ticker ticker;
// Ticker buttonTicker;


// int count;

// void sayHi(int hiTimes){
//   count++;
//   Serial.print("Hi ");
//   Serial.println(count);

//   if (count >= hiTimes) {
//     ticker.detach();
//     Serial.print("ticker.detach();");
//   }
// }


// void buttonCheck(){

// }

// void setup() {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);

  
//   ticker.attach(1, sayHi, 60);
//   //buttonTicker.attach_ms(100, buttonCheck);
// }

// void loop() {
//   for (int fadeValue = 0 ; fadeValue <= 1023; fadeValue += 5) {
//     analogWrite(LED_BUILTIN, fadeValue);
//     delay(10);
//   }

//   for (int fadeValue = 1023 ; fadeValue >= 0; fadeValue -= 5) {
//     analogWrite(LED_BUILTIN, fadeValue);
//     delay(10);
//   }
//   delay(3000);
// }


