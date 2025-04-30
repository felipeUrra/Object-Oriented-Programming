#pragma once
#include "11.1Point.h"
#include <stdint.h>

class Shape {
private:
	Point* points;

public:
	virtual uint8_t getPerimeter() const = 0;
	virtual uint8_t getArea() const = 0;
	virtual bool isPointInside(const Point&) const = 0;
};