#include "move.h"
#include <Arduino.h>

#define speed_Coeff 4

void Move::setup()
{
    pinMode(m_enAPin, OUTPUT);
    pinMode(m_in1Pin, OUTPUT);
    pinMode(m_in2Pin, OUTPUT);
    pinMode(m_in3Pin, OUTPUT);
    pinMode(m_in4Pin, OUTPUT);
    pinMode(m_enBPin, OUTPUT);
}

void Move::goAhead(int speedCar)
{
    digitalWrite(m_in1Pin, LOW);
    digitalWrite(m_in2Pin, HIGH); // LEFT tien
    digitalWrite(m_in3Pin, LOW);
    digitalWrite(m_in4Pin, HIGH); // RIGHT tien
    analogWrite(m_enAPin, speedCar);
    analogWrite(m_enBPin, speedCar);
}

void Move::goBack(int speedCar)
{
    digitalWrite(m_in1Pin, HIGH);
    digitalWrite(m_in2Pin, LOW); // LEFT lui
    digitalWrite(m_in3Pin, HIGH);
    digitalWrite(m_in4Pin, LOW); // RIGHT lui
    analogWrite(m_enAPin, speedCar);
    analogWrite(m_enBPin, speedCar);
}

void Move::goLeft(int speedCar)
{
    digitalWrite(m_in1Pin, HIGH);
    digitalWrite(m_in2Pin, LOW); // LEFT lui
    digitalWrite(m_in3Pin, LOW);
    digitalWrite(m_in4Pin, HIGH); // RIGHT tien
    analogWrite(m_enAPin, speedCar);
    analogWrite(m_enBPin, speedCar);
}

void Move::goRight(int speedCar)
{
    digitalWrite(m_in1Pin, LOW);
    digitalWrite(m_in2Pin, HIGH); // LEFT tien
    digitalWrite(m_in3Pin, HIGH);
    digitalWrite(m_in4Pin, LOW); // RIGHT lui
    analogWrite(m_enAPin, speedCar);
    analogWrite(m_enBPin, speedCar);
}

void Move::goAheadRight(int speedCar)
{
    digitalWrite(m_in1Pin, LOW);
    digitalWrite(m_in2Pin, HIGH); // LEFT tien
    digitalWrite(m_in3Pin, LOW);
    digitalWrite(m_in4Pin, HIGH); // RIGHT tien
    analogWrite(m_enAPin, speedCar);
    analogWrite(m_enBPin, speedCar / speed_Coeff);
}

void Move::goAheadLeft(int speedCar)
{
    digitalWrite(m_in1Pin, LOW);
    digitalWrite(m_in2Pin, HIGH); // LEFT tien
    digitalWrite(m_in3Pin, LOW);
    digitalWrite(m_in4Pin, HIGH);                  // RIGHT tien
    analogWrite(m_enAPin, speedCar / speed_Coeff); // banh trai quay cham hon
    analogWrite(m_enBPin, speedCar);
}

void Move::goBackRight(int speedCar)
{
    digitalWrite(m_in1Pin, HIGH);
    digitalWrite(m_in2Pin, LOW); // LEFT lui
    digitalWrite(m_in3Pin, HIGH);
    digitalWrite(m_in4Pin, LOW); // RIGHT lui
    analogWrite(m_enAPin, speedCar);
    analogWrite(m_enBPin, speedCar / speed_Coeff);
}

void Move::goBackLeft(int speedCar)
{
    digitalWrite(m_in1Pin, HIGH);
    digitalWrite(m_in2Pin, LOW); // LEFT lui
    digitalWrite(m_in3Pin, HIGH);
    digitalWrite(m_in4Pin, LOW);                   // RIGHT lui
    analogWrite(m_enAPin, speedCar / speed_Coeff); // banh trai quay cham hon
    analogWrite(m_enBPin, speedCar);
}

void Move::stopCar()
{
    digitalWrite(m_in1Pin, LOW);
    digitalWrite(m_in2Pin, LOW);
    digitalWrite(m_in3Pin, LOW);
    digitalWrite(m_in4Pin, LOW);
    analogWrite(m_enAPin, 0);
    analogWrite(m_enBPin, 0);
}