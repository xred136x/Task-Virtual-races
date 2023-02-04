#pragma once
#include<iostream>
class ITrack
{
	virtual const int getTurn()const =0;
	virtual const int getStretch()const=0;
	virtual void setTurn(int turn)=0;
	virtual void setStretch(int stretch)=0;
	virtual float routeCoefficient()=0;
	
	//virtual ~ITrack(){}
};

