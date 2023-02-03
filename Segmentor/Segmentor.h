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
	void discharge(int first){
		pinMode(first, OUTPUT);
		digitalWrite(first, LOW);
		_firstSeg = first;
	}
	void discharge(int first, int second){
		pinMode(first, OUTPUT);
		digitalWrite(first, LOW);
		_firstSeg = first;
		pinMode(second, OUTPUT);
		digitalWrite(second, LOW);
		_secondSeg = second;
	}
	void discharge(int first, int second, int third){
		pinMode(first, OUTPUT);
		digitalWrite(first, LOW);
		_firstSeg = first;
		pinMode(second, OUTPUT);
		digitalWrite(second, LOW);
		_secondSeg = second;
		pinMode(third, OUTPUT);
		digitalWrite(third, LOW);
		_thirdSeg = third;
	}
	void discharge(int first, int second, int third, int four){
		pinMode(first, OUTPUT);
		digitalWrite(first, LOW);
		_firstSeg = first;
		pinMode(second, OUTPUT);
		digitalWrite(second, LOW);
		_secondSeg = second;
		pinMode(third, OUTPUT);
		digitalWrite(third, LOW);
		_thirdSeg = third;
		pinMode(four, OUTPUT);
		digitalWrite(four, LOW);
		_fourSeg = four;
	}
	void one(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
    }
    void two(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, HIGH);
    }
    void three(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
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
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void five(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void six(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void seven(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
    }
    void eight(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, HIGH);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void nine(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, HIGH);
      digitalWrite(_pinC, HIGH);
      digitalWrite(_pinD, HIGH);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, HIGH);
      digitalWrite(_pinG, HIGH);
    }
    void zero(){
	  digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      digitalWrite(_pinC, LOW);
      digitalWrite(_pinD, LOW);
      digitalWrite(_pinE, LOW);
      digitalWrite(_pinF, LOW);
      digitalWrite(_pinG, LOW);
	  delayMicroseconds(100);
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
	void displayOne(int value){
		int firstNumber = value%10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(5);
		digitalWrite(_firstSeg, LOW);
	}
	void displayTwo(int value){
		int firstNumber = value%10;
		int secondNumber = value%100/10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(5);
		digitalWrite(_firstSeg, LOW);
		digitalWrite(_secondSeg, HIGH);
		chooseNumber(secondNumber);
		delay(5);
		digitalWrite(_secondSeg, LOW);
	}
	void displayThree(int value){
		int firstNumber = value%10;
		int secondNumber = value%100/10;
		int thirdNumber = value/100%10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(5);
		digitalWrite(_firstSeg, LOW);
		digitalWrite(_secondSeg, HIGH);
		chooseNumber(secondNumber);
		delay(5);
		digitalWrite(_secondSeg, LOW);
		digitalWrite(_thirdSeg, HIGH);
		chooseNumber(thirdNumber);
		delay(5);
		digitalWrite(_thirdSeg, LOW);
	}
	void displayFour(int value){
		int firstNumber = value%10;
		int secondNumber = value%100/10;
		int thirdNumber = value/100%10;
		int fourNumber = value/1000%10;
		digitalWrite(_firstSeg, HIGH);
		chooseNumber(firstNumber);
		delay(5);
		digitalWrite(_firstSeg, LOW);
		digitalWrite(_secondSeg, HIGH);
		chooseNumber(secondNumber);
		delay(5);
		digitalWrite(_secondSeg, LOW);
		digitalWrite(_thirdSeg, HIGH);
		chooseNumber(thirdNumber);
		delay(5);
		digitalWrite(_thirdSeg, LOW);
		digitalWrite(_fourSeg, HIGH);
		chooseNumber(fourNumber);
		delay(5);
	}
};
