#include "Auto.h"

Auto::Auto(int maxSpeed): _maxSpeed(maxSpeed){}

const int Auto::getMaxSpeed()const
{
    return _maxSpeed;
}

void Auto::setMaxSpeed(int maxSpeed)
{
    _maxSpeed = maxSpeed;
}
