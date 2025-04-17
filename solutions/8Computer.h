#pragma once

typedef unsigned int uint;

class Computer
{
private:
	static uint lastSerialNumber;
	
	uint serialNumber;
	char* brand;
	char* processor;
	uint video;
	uint hardDrive;
	uint weight;
	uint batteryLife;
	double price;
	uint quantity;

	void copyFrom(const Computer&);
	void free();

	void setSerialNumber(uint);
	void setBrand(const char*);
	void setProcessor(const char*);
	void setVideo(uint);
	void setHardDrive(uint);
	void setWeight(uint);
	void setBatteryLife(uint);
	void setPrice(double);

public:
	Computer();
	Computer(uint, const char*, const char*, uint, uint, uint, uint, double, uint);
	Computer(const Computer&);
	Computer& operator=(const Computer&);
	~Computer();

	uint getSerialNumber() const;
	const char* getBrand() const;
	const char* getProcessor() const;
	uint getVideo() const;
	uint getHardDrive() const;
	uint getWeight() const;
	uint getBatteryLife() const;
	double getPrice() const;
	uint getQuantity() const;

	void setQuantity(uint);
};
