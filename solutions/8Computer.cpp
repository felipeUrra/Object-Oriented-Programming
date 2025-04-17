#include "8Computer.h"
#include <iostream>
#include <cstring>

void Computer::copyFrom(const Computer& other) {
	this->setSerialNumber(other.serialNumber);
	this->setBrand(other.brand);
	this->setProcessor(other.processor);
	this->setVideo(other.video);
	this->setHardDrive(other.hardDrive);
	this->setBatteryLife(other.batteryLife);
	this->setPrice(other.price);
}

void Computer::free() {
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

void Computer::setVideo(uint video) {
    this->video = video;
}

void Computer::setHardDrive(uint hardDrive) {
	this->hardDrive = hardDrive;
}

void Computer::setWeight(uint weight) {
    this->weight = weight;
}

void Computer::setBatteryLife(uint baterryLifef) {
    this->batteryLife = batteryLife;
}

void Computer::setPrice(double price) {
    this->price = price;
}

void Computer::setQuantity(uint quantity) {
    this->quantity = quantity;
}

//getters
const char* Computer::getBrand() const{
	return brand;
}

uint Computer::getQuantity() const{
	return quantity;
}

double Computer::getPrice() const{
	return price;
}

const char* Computer::getProcessor() const{
	return processor;
}

uint Computer::getVideo() const{
	return video;
}

uint Computer::getHardDrive() const{
	return hardDrive;
}

uint Computer::getBatteryLife() const{
	return batteryLife;
}

uint Computer::getWeight() const{
	return weight;
}

uint Computer::getHar

Computer::Computer(uint serialNumber, const char* brand, const char* processor, uint video, uint hardDrive, uint weight, uint batteryLife, double price, uint quantity) {
    setSerialNumber(serialNumber);
    setBrand(brand);
    setProcessor(processor);
    setVideo(video);
	setHardDrive(hardDrive)
    setWeight(weight);
    setBatteryLife(batteryLife);
    setPrice(price);
    setQuantity(quantity);
}

// Big four
Computer::Computer() : serialNumber(0), brand(nullptr), processor(nullptr),
 video(0), hardDrive(0), weight(0), batteryLife(0), price(0), quantity(0) {};

Computer::Computer(const Computer& other) {
	copyFrom(ohter);
}

Computer& Computer::operator=(const Computer& other) {
	if(this != &ohter) {
		free();
		copyFrom(other);
	}
	return *this;
}

Computer::~Computer() {
	free();
}
