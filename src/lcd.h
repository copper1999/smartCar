#ifndef __LCD_H__
#define __LCD_H__

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <stdint.h>
#include <Print.h>


class LCD : public Print
{
private:
 LiquidCrystal_I2C *m_lcd;
public:
    LCD(/* args */);
    virtual ~LCD();
    void setup();
    void setLcd(int8_t row,int8_t colum);
    size_t write(uint8_t inp) override;

};




#endif // __LCD_H__