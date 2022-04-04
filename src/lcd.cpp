#include "lcd.h"

LCD::LCD(/* args */)
{
    m_lcd = new LiquidCrystal_I2C(0x27, 16, 2);
}

LCD::~LCD()
{
    delete m_lcd;
}

void LCD::setup()
{
    m_lcd->init();
    m_lcd->backlight();
}

size_t LCD::write(uint8_t inp)
{
    return m_lcd->write(inp);
}

void LCD::setLcd(int8_t row,int8_t colum)
{
    m_lcd->setCursor(colum,row);
}
