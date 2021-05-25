#include <iostream>
#include "Product.h"

using std::cout;
using std::cin;

Product::Product() : SKU(0), price(0), count(0) {
	type = others;
}

void Product::setSKU(const int SKU) {
	this->SKU = SKU;
}

void Product::setBrand(const std::string br) {
	brand = br;
}

void Product::setModel(const std::string mod) {
	model = mod;
}

void Product::setColor(const std::string col) {
	color = col;
}

void Product::setPrice(double price) {
	this->price = price;
}

void Product::setCount(int count) {
	this->count = count;
}

void Product::setProduct(product type) {
	this->type = type;
}

const int Product::getSKU() const {
	return SKU;
}

const std::string Product::getBrand() const {
	return brand;
}

const std::string Product::getModel() const {
	return model;
}

const std::string Product::getColor() const {
	return color;
}

const double Product::getPrice() const {
	return price;
}

const int Product::getCount() const {
	return count;
}

const product Product::getProduct() const {
	return type;
}

void Product::input() {
	cout << "Please, enter SKU: ";
	cin >> SKU;

	cout << "Please, enter brand: ";
	cin >> brand;

	cout << "Please, enter model: ";
	cin >> model;

	cout << "Please, enter color: ";
	cin >> color;

	cout << "Please, enter price: ";
	cin >> price;

    cout << "Please, enter count: ";
	cin >> count;
}

std::ostream& Product::print(std::ostream& out) const {
	out << getSKU() << ", " << getBrand() << ", " << getModel() << ", " << getColor() << ", " << getPrice() << ", " << getCount();
	return out;
}

bool operator==(const Product& lhs, const Product& rhs) {
	return lhs.getBrand() == rhs.getBrand() && lhs.getColor() == rhs.getColor() && lhs.getCount() == rhs.getCount() && lhs.getModel() == rhs.getModel() && lhs.getPrice() == rhs.getPrice() && lhs.getProduct() == rhs.getProduct() && lhs.getSKU() == rhs.getSKU();
}

std::ostream& operator<<(std::ostream& out, const Product& pr) {
	return pr.print(out);
}