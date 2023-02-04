#include<iostream>
#include "IVehicle.h"
#include"ITrack.h"
#include"Auto.h"
#include"Moto.h"
#include"MotoTrack.h"
#include"AutoTrack.h"

int main() {
	IVehicle* pAuto = new Auto(300);
	IVehicle* pMoto = new Moto(250);

	AutoTrack a1(8, 16);
	MotoTrack m1(12, 5);
	a1.MidleSpeed(pAuto, pMoto);
	m1.MidleSpeed(pAuto, pMoto);
	return 0;
}