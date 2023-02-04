#pragma once
#include<iostream>
#include"ITrack.h"
#include"IVehicle.h"
class AutoTrack : public ITrack
{
public:
	AutoTrack(int turn, int stretch);
	const int getTurn()const override;
	const int getStretch()const override;
	void setTurn(int turn) override;
	void setStretch(int stretch) override;
	float routeCoefficient()override;
	void MidleSpeed(IVehicle* a, IVehicle* m);
		

private:
	int _turn;
	int _stretch;
};

