#include "Header1.h"
#include <iostream>

Computer::copyFrom(const Computer& other) {
	this->setSerialNumber(other.serialNumber);
	this->setBrand(other.brand);
	this->setProcessor(other.processor);
	this->setVideo(other.video);
	this->setHardDrive(other.hardDrive);
	this->setBatteryLife(other.batteryLife);
	this->setPrice(other.price);
}

Computer::free() {
	delete[] brand;
	delete[] processor;
}

//setters
void Computer::setSerialNumber(uint serialNumber) {
	this->serialNumber = serialNumber;
}

void Computer::setBrand(const char* brand) {
	if (!brand || this->brand == brand) return;

	delete[] this->brand;
	this->brand = new char[strlen(brand) + 1];
	strcpy(this->brand, brand);
}

void Computer::setProcessor(const char* processor) {
	if (!processor || this->processor == processor) return;

	delete[] this->processor;
	this->processor = new char[strlen(processor) + 1];
	strcpy(this->brand, brand);
}
