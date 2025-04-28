#include "10.1Ticket.h"
#include <iostream>

Ticket::setStagingName(CustomString stagingName) {
	this->stagingName = stagingName;
}

Ticket::setPrice(double price) {
	this->price = price;
}

Ticket::Ticket() : stagingName(nullptr), price(0) {}

Ticket::Ticket(const char* stagingName, double price) {
	setStagingName(stagingName);
	setPrice(price);
}

double Ticket::getPrice() {
	return price;
}

char* Ticket::getPrice() {
	return stagingName.getData();
}
