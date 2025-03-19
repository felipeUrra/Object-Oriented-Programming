#include <iostream>

class Bafla
{
public:
	// Default constructor
	Bafla(char brand[], float weight, float productionCost, float sellPrice) {
		setBrand(brand);
		setWeight(weight);
		setProductionCost(productionCost);
		setSellPrice(sellPrice);
	}

	// Copy constructor
	Bafla(const Bafla& other) {
		copyFrom(other);
	}
	
	// Assigment operator
	Bafla& operator=(const Bafla& other) {
		if (this != &other) {
			free();
			copyFrom(other);
		}
		return *this;
	}

	// Destructor
	~Bafla()
	{
		free;
	}

	const char* getBrand() const {
		return brand;
	}

	void setBrand(const char* brand) {
		if (!brand) {
			return;
		}

		if (this->brand == brand) {
			return;
		}
		
		if (this->brand != nullptr) {
			delete[] this->brand;
		}

		this->brand = new char[strlen(brand) + 1];
		strcpy(this->brand, brand);
	}

	float getWeight() const {
		return weight;
	}

	void setWeight(float weight) {
		this->weight = weight;
	}

	float getProductionCost() const {
		return weight;
	}

	void setProductionCost(float productionCost) {
		this->productionCost = productionCost;
	}

	float getSellPrice() const {
		return sellPrice;
	}

	void setSellPrice(float sellPrice) {
		this->sellPrice = sellPrice;
	}

private:
	char* brand = nullptr;
	float weight;
	float productionCost;
	float sellPrice;

private:
	void copyFrom(const Bafla& other) {
		this->brand = new char[strlen(other.brand) + 1];
		strcpy(this->brand, other.brand);

		this->weight = other.weight;
		this->productionCost = other.productionCost;
		this->sellPrice = other.sellPrice;
	}

	void free() {
		delete[] brand;
	}
};






class Store
{
public:
	Store();
	~Store();



	const Bafla* getBafli() const{
		return bafli;
	}

	void setBafli(const char* bafli) {

	}

	int getMaxAmountBafli() const{
		return maxAmountBafli;
	}

	void setMaxAmountBafli() {

	}

private:
	Bafla* bafli;
	int maxAmountBafli;
	float revenues;
	float expenses;
};

Store::Store()
{
}

Store::~Store()
{
}

int main()
{
    std::cout << "Hello World!\n";
}
