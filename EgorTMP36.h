/*

* EgorTMP36 - эта библиотека предназначена для паралельной работы с датчиком TMP36
* Создателя этой библиотеки зовут Егор Фадеев
* Версия: v1.0
* Последние обновление: 28.06.2019

* Конструктор  имеет параметр пина датчика 
*
*    ETMP36(uint8_t pin);
*


*/
#ifndef EgorTMP36_h
#define EgorTMP36_h

#include <Arduino.h>

class ETMP36{
  public: 
    ETMP36(uint8_t pin);
	float getVoltage();
	float getTempC();
	float getTempF();
  private:
    uint8_t _pin;
	float _tempC;
	float _tempF;
	float _volts;
	uint8_t _value;
	void getValues();
};

#endif