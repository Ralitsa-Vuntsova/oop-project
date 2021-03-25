#include <iostream>
#include <iomanip>
#include "Products.h"

using std::cout;
using std::cin;

Products::Products() : numberOfProducts(0) {}

void Products::add() {
	cout << "Please, enter type of product to add: ";
	std::string typeOfProduct;
	cin >> typeOfProduct;

	if (typeOfProduct == "boots") {
		Boots product;
		std::cout << "Please, enter a new product" << std::endl;
		product.input();
		addProduct(product);
	}
	else if (typeOfProduct == "sneakers") {
		Sneakers product;
		cout << "Please, enter a new product" << std::endl;
		product.input();
		addProduct(product);
	}
	else if (typeOfProduct == "sandals") {
		Sandals product;
		cout << "Please, enter a new product" << std::endl;
		product.input();
		addProduct(product);
	}
	else if (typeOfProduct == "trainers") {
		Trainers product;
		cout << "Please, enter a new product" << std::endl;
		product.input();
		addProduct(product);
	}
}

void Products::addProduct(const Product& product) {
	products.push_back(product);
	numberOfProducts++;
}

void Products::remove() {
	cout << "Please, enter the number of the product to remove: ";
	int position;
	cin >> position;
	removeProduct(position);
	numberOfProducts--;
}

void Products::removeProduct(const int& position) {
	if (position >= 0 && position < numberOfProducts) {
		products.erase(products.begin() + position);
	}
	else {
		cout << "Invalid number of product!" << std::endl;
	}
}

Products &Products::instance() {
	static Products inst;
	return inst;
}

const std::vector<Product> Products::getProducts() const {
	return products;
}

const int Products::getNumberOfProducts() const {
	return numberOfProducts;
}

void Products::print() const {
	for (int i = 0; i < numberOfProducts; i++) {
		cout << i << ") " << products[i].getProduct() << ", " << products[i] << std::endl;
	}
}