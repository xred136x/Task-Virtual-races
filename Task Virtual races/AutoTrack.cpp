#include "AutoTrack.h"
#include"IVehicle.h"
AutoTrack::AutoTrack(int turn, int stretch): _turn(turn), _stretch(stretch)
{
}
const int AutoTrack::getTurn() const
{
    return _turn;
}

const int AutoTrack::getStretch() const
{
    return _stretch;
}

void AutoTrack::setTurn(int turn)
{
    _turn = turn;
}

void AutoTrack::setStretch(int stretch)
{
    _stretch = stretch;
}

float AutoTrack::routeCoefficient()
{
    return _stretch / _turn;
}

void AutoTrack::MidleSpeed(IVehicle* a, IVehicle* m)
{
   float Auto = a->getMaxSpeed() * routeCoefficient();
   float Moto = m->getMaxSpeed() * routeCoefficient();
   if (Auto > Moto)
       std::cout << "Auto is Win!!!\n";
   else
       std::cout << "Moto is Win!!!\n";
}
