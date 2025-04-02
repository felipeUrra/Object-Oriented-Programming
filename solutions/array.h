#pragma once

class Array
{
private:
	unsigned int row;
	unsigned int col;

public:
	Array();
	
	Array(int, int);
	Array(const Array&);
	Array& operator=(const Array&);
	~Array();

};
