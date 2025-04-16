#include "9Order.h"
#include <iostream>

void Order::setName(const char* name) {
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

void Order::setProduct(const char** products, uint productsCount) {
	this->products = new char[productsCount];
}
