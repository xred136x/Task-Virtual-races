#include "MotoTrack.h"
#include"IVehicle.h"

MotoTrack::MotoTrack(int turn, int stretch): _turn(turn), _stretch(stretch)
{
}

const int MotoTrack::getTurn() const
{
    return _turn;
}

const int MotoTrack::getStretch() const
{
    return _stretch;
}

void MotoTrack::setTurn(int turn)
{
    _turn = turn;
}

void MotoTrack::setStretch(int stretch)
{
    _stretch = stretch;
}

float MotoTrack::routeCoefficient()
{
    return _turn/_stretch;
}

void MotoTrack::MidleSpeed(IVehicle* a, IVehicle* m)
{
    float Auto = a->getMaxSpeed() * routeCoefficient();
    float Moto = m->getMaxSpeed() * routeCoefficient();
    if (Auto > Moto)
        std::cout << "Auto is Win!!!\n";
    else
        std::cout << "Moto is Win!!!\n";
}
