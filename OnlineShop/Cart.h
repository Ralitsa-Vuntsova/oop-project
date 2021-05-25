#pragma once
#include "Product.h"
#include "ProductHandler.h"
#include <vector>

class Cart {
private:
	std::vector<Product> cart; // products that you have in the cart
	int numberOfProducts;

	void addProduct(const Product&, int, int, ProductHandler); // add product to the cart (by product)
	void removeProduct(const int&); // remove product from the cart (by position)

public:
	Cart();

	const std::vector<Product> getCart() const;
	const int getNumberOfProducts() const;

	void add(const int&, ProductHandler);
	void remove();
	void print() const;

	friend class Shop;
};