#include <iostream>
#include "Cart.h"
#include "Products.h"

using std::cout;

Cart::Cart() : numberOfProducts(0) {}

const std::vector<Product> Cart::getCart() const {
	return cart;
}

const int Cart::getNumberOfProducts() const {
	return numberOfProducts;
}

void Cart::addProduct(const Product& pr) {
	if (pr.getCount() > 0) {
		cart.push_back(pr);
		numberOfProducts++;
	}
	else {
		cout << "Not in stock!" << std::endl;
	}
}

void Cart::add(const int& position) { // how to connect the productManager from Shop with this cart?
	Products mng = Products::instance();
	addProduct(mng.getProducts()[position]);
}

void Cart::remove(const int& position) {
	if (position >= 0 && position < numberOfProducts) {
		cart.erase(cart.begin() + position);
		numberOfProducts--;
	}
	else {
		cout << "Invalid number of product!" << std::endl;
	}
}

void Cart::print() const {
	for (int i = 0; i < numberOfProducts; i++) {
		cout << i << ", " << cart[i].getProduct() << ", " << cart[i] << std::endl;
		cout << std::endl;
	}
}