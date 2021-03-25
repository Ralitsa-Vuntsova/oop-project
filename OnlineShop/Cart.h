#pragma once
#include "Product.h"
#include <vector>

class Cart {
private:
	std::vector<Product> cart; // products that you have in the cart
	int numberOfProducts;

	void addProduct(const Product&);

public:
	Cart();

	const std::vector<Product> getCart() const;
	const int getNumberOfProducts() const;

	void add(const int&); // add product to the cart by position
	void remove(const int& pos); // remove product from the cart by position
	void print() const;
};