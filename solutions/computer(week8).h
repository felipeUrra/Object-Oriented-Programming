#pragma once

typedef unsigned int uint;
typedef unsigned double udouble;

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
	udouble price;
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
	void setPrice(uint);

public:
	Computer();
	Computer(uint, const char*,const char*, uint, uint, uint, uint, uint, udouble, uint);
	Computer(const Computer&);
	Computer& Computer(const Computer&);
	~Computer();

	uint getSerialNumber() const;
	const char* getBrand() const;
	const char* getProcessor() const;
	uint getVideo() const;
	uint getHardDrive() const;
	uint getWeight() const;
	uint getBatteryLife() const;
	udouble getPrice() const;
	uint getQuantity() const;

	void setQuantity(uint);
};
