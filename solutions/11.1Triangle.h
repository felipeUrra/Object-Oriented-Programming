#pragma once
#include "11.1Shape.h"

class Triangle : public Shape {
public:
	Triangle();
	Triangle(const Point*);
	Triangle(const Triangle&);
	Triangle& Triangle(const Triangle&);
	~Triangle();

	uint8_t getPerimeter() override;
	uint8_t getArea() override;
	bool isPointInside(const Point&) override;
};