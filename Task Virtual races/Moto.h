#pragma once
#include"IVehicle.h"
class Moto : public IVehicle
{
public:
	Moto(int maxSpeed);
	const int getMaxSpeed()const;
	void setMaxSpeed(int maxSpeed);
private:
	int _maxSpeed;
};

