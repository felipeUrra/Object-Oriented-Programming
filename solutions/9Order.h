#pragma once

typedef unsigned int uint;

class Order
{
private:
	char* name;
	char** products; // tiene que ser string*, por lo que tengo que crear esta clase
	uint productsCount;

	void copyFrom(const Order&);
	void free();

public:
	Order();
	Order(const char*, const char**, uint);
	Order(const Order&);
	Order& operator=(const Order&);
	~Order();

	void setName(const char*);
	void setProducts(const char**, uint);

	const char* getName() const;
	const products** getProducts() const;
	uint getProductsCount() const;

	void addProduct(const char*);
	void calcDeliveryTime();
};
