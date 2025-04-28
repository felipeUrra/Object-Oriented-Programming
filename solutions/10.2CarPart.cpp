#include "10.2CarPart.h"

CarPart::CarPart() : id(0), brand(), description() {}

CarPart::CarPart(uint id, CustomString brand, CustomString description) {
	this->id = id;
	this->brand = brand;
	this->description = description;
}