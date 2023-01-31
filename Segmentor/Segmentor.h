#pragma once
#include <Arduino.h>

class Segmentor{
  private:
    int _pinA;
    int _pinB;
    int _pinC;
    int _pinD;
    int _pinE;
    int _pinF;
    int _pinG;
	int _firstSeg;
	int _secondSeg;
	int _thirdSeg;
	int _fourSeg;
	int _fiveSeg;
  public:
    Segmentor(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG){
      pinMode(pinA, OUTPUT);
      pinMode(pinB, OUTPUT);
      pinMode(pinC, OUTPUT);
      pinMode(pinD, OUTPUT);
      pinMode(pinE, OUTPUT);
      pinMode(pinF, OUTPUT);
      pinMode(pinG, OUTPUT);
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      _pinA = pinA;
      _pinB = pinB;
      _pinC = pinC;
      _pinD = pinD;
      _pinE = pinE;
      _pinF = pinF;
      _pinG = pinG;
    }
	Segmentor(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int first, int second){
	  pinMode(pinA, OUTPUT);
      pinMode(pinB, OUTPUT);
      pinMode(pinC, OUTPUT);
      pinMode(pinD, OUTPUT);
      pinMode(pinE, OUTPUT);
      pinMode(pinF, OUTPUT);
      pinMode(pinG, OUTPUT);
	  pinMode(first, OUTPUT);
	  pinMode(second, OUTPUT);
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
	  digitalWrite(first, LOW);
	  digitalWrite(second, LOW);
      _pinA = pinA;
      _pinB = pinB;
      _pinC = pinC;
      _pinD = pinD;
      _pinE = pinE;
      _pinF = pinF;
      _pinG = pinG;
	  _firstSeg = first;
	  _secondSeg = second;
	}
	Segmentor(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int first, int second, int third){
	  pinMode(pinA, OUTPUT);
      pinMode(pinB, OUTPUT);
      pinMode(pinC, OUTPUT);
      pinMode(pinD, OUTPUT);
      pinMode(pinE, OUTPUT);
      pinMode(pinF, OUTPUT);
      pinMode(pinG, OUTPUT);
	  pinMode(first, OUTPUT);
	  pinMode(second, OUTPUT);
	  pinMode(third, OUTPUT);
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
	  digitalWrite(first, LOW);
	  digitalWrite(second, LOW);
	  digitalWrite(third, LOW);
      _pinA = pinA;
      _pinB = pinB;
      _pinC = pinC;
      _pinD = pinD;
      _pinE = pinE;
      _pinF = pinF;
      _pinG = pinG;
	  _firstSeg = first;
	  _secondSeg = second;
	  _thirdSeg = third;
	}
	Segmentor(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int first, int second, int third, int four){
	  pinMode(pinA, OUTPUT);
      pinMode(pinB, OUTPUT);
      pinMode(pinC, OUTPUT);
      pinMode(pinD, OUTPUT);
      pinMode(pinE, OUTPUT);
      pinMode(pinF, OUTPUT);
      pinMode(pinG, OUTPUT);
	  pinMode(first, OUTPUT);
	  pinMode(second, OUTPUT);
	  pinMode(third, OUTPUT);
	  pinMode(four, OUTPUT);
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
	  digitalWrite(first, LOW);
	  digitalWrite(second, LOW);
	  digitalWrite(third, LOW);
      digitalWrite(four, LOW);
	  _pinA = pinA;
      _pinB = pinB;
      _pinC = pinC;
      _pinD = pinD;
      _pinE = pinE;
      _pinF = pinF;
      _pinG = pinG;
	  _firstSeg = first;
	  _secondSeg = second;
	  _thirdSeg = third;
	  _fourSeg = four;
	}
    void one(){
      digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
    }
    void two(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, HIGH);
    }
    void three(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, HIGH);
    }
    void four(){
      digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void five(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void six(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void seven(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
    }
    void eight(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void nine(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void zero(){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, LOW);
    }
    void chooseNumber(int k){
      switch(k){
        case 0:
          zero();
          break;
        case 1:
          one();
          break;
        case 2:
          two();
          break;
        case 3:
          three();
          break;
        case 4:
          four();
          break;
        case 5:
          five();
          break;
        case 6:
          six();
          break;
        case 7:
          seven();
          break;
        case 8:
          eight();
          break;
        case 9: 
          nine();
          break;   
      }
    }
	displayOne(int value){
		int firstNumber = value%10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(7);
		digitalWrite(_firstSeg, LOW);
	}
	displayTwo(int value){
		int firstNumber = value%10;
		int secondNumber = value%100/10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(7);
		digitalWrite(_firstSeg, LOW);
		digitalWrite(_secondSeg, HIGH);
		chooseNumber(secondNumber);
		delay(7);
		digitalWrite(_secondSeg, LOW);
	}
	displayThree(int value){
		int firstNumber = value%10;
		int secondNumber = value%100/10;
		int thirdNumber = value/100%10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(7);
		digitalWrite(_firstSeg, LOW);
		digitalWrite(_secondSeg, HIGH);
		chooseNumber(secondNumber);
		delay(7);
		digitalWrite(_secondSeg, LOW);
		digitalWrite(_thirdSeg, HIGH);
		chooseNumber(thirdNumber);
		delay(7);
		digitalWrite(_thirdSeg, LOW);
	}
	displayFour(int value){
		int firstNumber = value%10;
		int secondNumber = value%100/10;
		int thirdNumber = value/100%10;
		int fourNumber = value/1000%10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(7);
		digitalWrite(_firstSeg, LOW);
		digitalWrite(_secondSeg, HIGH);
		chooseNumber(secondNumber);
		delay(7);
		digitalWrite(_secondSeg, LOW);
		digitalWrite(_thirdSeg, HIGH);
		chooseNumber(thirdNumber);
		delay(7);
		digitalWrite(_thirdSeg, LOW);
		digitalWrite(_fourSeg, HIGH);
		chooseNumber(fourNumber);
		delay(7);
	}
};
