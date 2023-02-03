# Segmentor

Библиотека для работы с семисегментным индикатором с общим катодом.
- От одного до четырех сегментов (точки не включены в библиотеку, возможно появится в дальнейшем).
- Библиотека работает на задержках (7-8 милисекунд для 1 разрядного, 28-32 миллисекунды для 4 разрядного) , что может плохо сказатся на быстродействии системы (в будующем будет доработано).

## Инициализация
```cpp
Segmentor segment(A, B, C, D, E, F, G); //инициализация A-G пины сегментника
segment.disgarge(1sig);// обязательная функция инициализации разрядов, писать данную функцию в setup()
segment.disgarge(1sig, 2sig);//если у вас 2-х разрядный сегментник
segment.disgarge(1sig, 2sig, 3sig);//3-х разрядный
segment.disgarge(1sig, 2sig, 3sig, 4sig);//4-х разрядный

```
## Использование
```cpp
void one();// выведет цифру 1
void two();// 2
void three();// 3
void four();// 4
void five();// 5
void six();// 6
void seven();// 7
void eight();// 8
void nine();// 9
void zero();// 0

void chooseNumber(value);// функция выводит подаваемое в нее число (тип числа int)
void displayOne(value);// функция выводит подаваемое ей число на 1 индикатор (тип числа int)
void displayTwo(value);// функция выводит подаваемое ей число на 2 индикатора (тип числа int)
void displayThree(value);// функция выводит подаваемое ей число на 3 индикатора (тип числа int)
void displayFour(value);// функция выводит подаваемое ей число на 4 индикатора (тип числа int)
```

## Примеры
```cpp
#include <Segmentor.h> //library initialization
Segmentor segment(2, 3, 4, 5, 6, 7, 8); //segmentor initialization

unsigned int currentTime = millis();
int value = 0;
void setup() {
  segment.discharge(9, 10, 11); // 7-segmentor discharge (from 1 to 4)
  
}

void loop() {
  if (currentTime - millis() >= 500){
    currentTime = millis();
    value ++;
  }
  segment.displayThree(value); //output
}
```
