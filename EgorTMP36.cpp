/*

* EgorTMP36 - эта библиотека предназначена для паралельной работы с датчиком TMP36
* Создателя этой библиотеки зовут Егор Фадеев
* Версия: v1.0
* Последние обновление: 28.06.2019

* Конструктор  имеет параметр пина датчика 
*
*    ETMP36(int pin);
*


*/

#include "Arduino.h"
#include "EgorTMP36.h"


ETMP36::ETMP36(uint8_t pin)
{
   _pin = pin;
}

void ETMP36::getValues()
{
	_value = analogRead(_pin);
	_volts = _value * .004882814;
	_tempC = (_volts - .5) * 100;  
	_tempF = (_tempC * 1.8) + 32; 
}

float ETMP36::getTempC()
{
	getValues();
	return _tempC;
}

float ETMP36::getTempF()
{
	getValues();
	return _tempF;
}

float ETMP36::getVoltage()
{
	getValues();
	return _volts;
}