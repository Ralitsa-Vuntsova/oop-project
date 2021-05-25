#include <iostream>
#include <iomanip>
#include "ProductHandler.h"

using std::cout;
using std::cin;

ProductHandler::ProductHandler() : numberOfProducts(0) {}

void ProductHandler::add() {
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
	else {
		cout << "Wrong input!" << std::endl;
	}
}

void ProductHandler::addProduct(const Product& product) {
	products.push_back(product);
	numberOfProducts++;
}

void ProductHandler::remove() {
	cout << "Please, enter the number of the product to remove: ";
	int position;
	cin >> position;
	removeProduct(position);
	numberOfProducts--;
}

void ProductHandler::removeProduct(const int& position) {
	if (position >= 0 && position < numberOfProducts) {
		products.erase(products.begin() + position);
	}
	else {
		cout << "Invalid number of product!" << std::endl;
	}
}

ProductHandler&ProductHandler::instance() {
	static ProductHandler inst;
	return inst;
}

const std::vector<Product> ProductHandler::getProducts() const {
	return products;
}

const int ProductHandler::getNumberOfProducts() const {
	return numberOfProducts;
}

void ProductHandler::print() const {
	for (int i = 0; i < numberOfProducts; i++) {
		cout << i << ") " << products[i] << std::endl;
	}
}