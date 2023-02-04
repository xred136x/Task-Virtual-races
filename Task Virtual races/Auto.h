#pragma once
#include"IVehicle.h"

class Auto : public IVehicle
{
public:
	Auto(int maxSpeed);
	const int getMaxSpeed()const override;
	void setMaxSpeed(int maxSpeed) override;
	
private:
	int _maxSpeed;

};

