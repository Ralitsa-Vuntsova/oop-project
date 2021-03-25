#pragma once
#include "Product.h"
#include "Boots.h"
#include "Sneakers.h"
#include "Sandals.h"
#include "Trainers.h"
#include <vector>

class Products { // to help manage all the products in the shop
private:
	std::vector<Product> products;
	int numberOfProducts;

	Products();

	void addProduct(const Product&);
	void removeProduct(const int&);

public:
	static Products& instance();

	const std::vector<Product> getProducts() const;
	const int getNumberOfProducts() const;

	void add(); // add product to the shop
	void remove(); // remove product from the shop
	void print() const;
};
