#ifndef __SRF05MANAGER_H__
#define __SRF05MANAGER_H__

#include <SRF05.h>
#include <Arduino.h>
#include <stdint.h>

class SRF05Manager
{
private:
    SRF05 *m_srf05;

public:
    SRF05Manager(/* args */);
    ~SRF05Manager();
    void setup();
    bool distance(double value);
};

#endif // __SRF05MANAGER_H__