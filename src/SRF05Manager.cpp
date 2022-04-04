#include "SRF05Manager.h"

SRF05Manager::SRF05Manager(/* args */)
{
    m_srf05 = new SRF05(13, 12);
}

SRF05Manager::~SRF05Manager()
{
    delete m_srf05;
}

void SRF05Manager::setup()
{
    m_srf05->setCorrectionFactor(1.035);
    m_srf05->setModeAverage(10);
}

bool SRF05Manager::distance(double value)
{
    bool temp = false;
    if (m_srf05->getCentimeter() <= value)
    {
        temp=true;
    }
    return temp;
}