#pragma once
#include<iostream>
class IVehicle
{
public:
	virtual const int getMaxSpeed() const = 0;
	virtual void setMaxSpeed(int maxSpeed) = 0;
	virtual ~IVehicle(){}
};

