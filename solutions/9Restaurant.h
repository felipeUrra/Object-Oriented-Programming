#pragma once
#include "9Order.h"

typedef unsigned int uint;

class Restaurant
{
private:
	char[25] name;
	char** products;
	uint productsCount;

	void copyFrom(const Restaurant&);
	void free();

public:
	Restaurant();
	Restaurant(const char*, const char**, uint);
	Restaurant(const Restaurant&);
	const Restaurant& operator=(const Restaurant&);
	~Restaurant();

	void setName(const char*);
	void setProduct(const char**);

	const char* getName() const;
	const products** getProducts() const;
	uint getProductsCount() const;

	
	void addProduct(char*);
	void getOrder(const Order&);
};
