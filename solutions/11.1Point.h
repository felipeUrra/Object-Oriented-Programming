#pragma once

class Point {
private:
	int x;
	int y;

public:
	Point();
	Point(int, int);

	void setX(int);
	void setY(int);

	int getX();
	int getY();
};