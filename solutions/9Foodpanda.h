#pragma once
#include "Restaurant.h"

typedef unsigned int uint;

class Foodpanda
{
private:
	Restaurant* restaurant;
	uint restaurantsCount;

	void copyFrom(const Restaurant&);
	void free();

public:
	Foodpanda();
	Foodpanda(const Restaurant*, uint);
	Foodpanda(const Foodpanda&);
	const Foodpanda& operator=(const Foodpanda&);
	~Foodpanda();

	void setRestaurants(const Restaurant*);
	
	const Restaurant* getRestaurants() const;
	uint getRestaurantsCount() const;

	void addProductToRestaurant(const char*, const char*); // parameters: name, product
	void addRestaurant(const Restaurant&);
	void addOrderToRestaurant(const Order&);
};
