#include "Moto.h"

Moto::Moto(int maxSpeed):_maxSpeed(maxSpeed)
{
}

const int Moto::getMaxSpeed() const
{
    return _maxSpeed;
}

void Moto::setMaxSpeed(int maxSpeed)
{
    _maxSpeed = maxSpeed;
}
