#pragma once
#include "customString.h"

typedef unsigned int uint;

class CarPart {
private:
	uint id ; //cambiarlo por uint_8
	CustomString brand;
	CustomString description;

public:
	CarPart();
	CarPart(uint, CustomString, CustomString);
};