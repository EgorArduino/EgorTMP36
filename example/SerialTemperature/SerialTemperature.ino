#include <EgorTMP36.h> // Подключаем библиотеку

ETMP36 myTMP36(A0); // Указываем порт датчика

void setup() {
  Serial.begin(9600); // Включаем монитор порта

}

void loop() {
  float celsius = myTMP36.getTempC(); // записываем значение цельсия с датчика в переменную
  float fahrenheit = myTMP36.getTempF(); // записываем значение френгейт с датчика в переменную
  Serial.print("По целсии: "); 
  Serial.print(celsius); 
  Serial.print(" По френгеййту: "); //
  Serial.println(fahrenheit); 
  delay(500); // Ожидание 500 мс
  

}
