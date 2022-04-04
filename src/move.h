#ifndef __MOVE_H__
#define __MOVE_H__

#include <stdint.h>

class Move
{
private:
    const uint8_t m_enAPin = 6;
    const uint8_t m_in1Pin = 7;
    const uint8_t m_in2Pin = 5;
    const uint8_t m_in3Pin = 4;
    const uint8_t m_in4Pin = 2;
    const uint8_t m_enBPin = 3;

public:

    void setup();
    void goAhead(int speedCar);
    void goBack(int speedCar);
    void goLeft(int speedCar);
    void goRight(int speedCar);
    void goAheadRight(int speedCar);
    void goAheadLeft(int speedCar);
    void goBackRight(int speedCar);
    void goBackLeft(int speedCar);
    void stopCar();
};



#endif // __MOVE_H__