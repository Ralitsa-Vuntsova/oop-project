#pragma once
#include "Product.h"
#include "Boots.h"
#include "Sneakers.h"
#include "Sandals.h"
#include "Trainers.h"
#include <vector>

class ProductHandler { // to help manage all the products in the shop
private:
	std::vector<Product> products;
	int numberOfProducts;

	ProductHandler();
public:
	static ProductHandler& instance();
	
	const std::vector<Product> getProducts() const;
	const int getNumberOfProducts() const;

	void add(); 
	void addProduct(const Product&); // add product to the shop (by product)
	void remove(); 
	void removeProduct(const int&); // remove product from the shop (by position)
	void print() const;
};
