#include <iostream>
#include <cstring>

class Bafla
{
public:
	// Custom constructor
	Bafla(char brand[], float weight, float productionCost, float sellPrice) {
		setBrand(brand);
		setWeight(weight);
		setProductionCost(productionCost);
		setSellPrice(sellPrice);
	}
	
	// Default constructor
	Bafla() : brand(nullptr), weight(0), productionCost(0), sellPrice(0) { }

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

	// brand
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

	// weight
	float getWeight() const {
		return weight;
	}

	void setWeight(float weight) {
		this->weight = weight;
	}

	// production cost
	float getProductionCost() const {
		return weight;
	}

	void setProductionCost(float productionCost) {
		this->productionCost = productionCost;
	}

	// sell price
	float getSellPrice() const {
		return sellPrice;
	}

	void setSellPrice(float sellPrice) {
		this->sellPrice = sellPrice;
	}

private:
	char* brand;
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
	// Custom constructor
	Store(Bafla* bafli, int maxAmountBafli, float revenues, float expenses) {
		setBafli(bafli);
		setMaxAmountBafli(maxAmountBafli);
		setRevenues(revenues);
		setExpenses(expenses);
	}

	// Default constructor
	Store() : bafli(nullptr), maxAmountBafli(0), revenues(0), expenses(0) { }

	// Copy constructor
	Store(const Store& other) {
		copyFrom(other);
	}

	// Assigment operator
	Store& operator=(const Store& other) {
		if (this != &other) {
			free();
			copyFrom(other);
		}
		return *this;
	}

	// Destructor
	~Store() {
		free();
	}


	// bafli
	const Bafla* getBafli() const{
		return bafli;
	}

	void setBafli(Bafla* bafli) {
		if (!bafli) {
			return;
		}

		if (this->bafli == bafli) {
			return;
		}

		if (this->bafli != nullptr) {
			delete[] this->bafli;
		}

		this->bafli = new Bafla[maxAmountBafli];
		this->bafli = bafli;
	}

	// maxAmountBafli
	int getMaxAmountBafli() const{
		return maxAmountBafli;
	}

	void setMaxAmountBafli(int maxAmountBafli) {
        this->maxAmountBafli = maxAmountBafli;
	}
	
	// revenues
	float getRevenues() const{
		return revenues;
	}

	void setRevenues(float revenues) {
		this->revenues = revenues;
	}

	// expenses
	float getExpenses() const{
		return expenses;
	}

	void setExpenses(float expenses) {
		this->expenses = expenses;
	}



private:
	Bafla* bafli;
	int maxAmountBafli;
	float revenues;
	float expenses;

private:
	void copyFrom(const Store& other) {
		this->maxAmountBafli = other.maxAmountBafli;
		this->revenues = other.revenues;
		this->expenses = other.expenses;

		this->bafli = new Bafla[other.maxAmountBafli];
		this->bafli = other.bafli;
	}

	void free() {
		delete[] bafli;
	}


};

int main()
{
    std::cout << "Hello World!\n";
}
