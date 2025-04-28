#pragma once
#include "customString.h"

class Ticket {
private:
	CustomString stagingName;
	double price;

public:
	Ticket();
	Ticket(CustomString, double);

	void setStagingName(const char*);
	void setPrice(double);

	char* getStagingName();
	double getPrice();
};
