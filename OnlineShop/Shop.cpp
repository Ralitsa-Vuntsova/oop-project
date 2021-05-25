#include <iostream>
#include "Shop.h"

Shop::Shop() {
	user = nullptr;
}

Shop&Shop::instance() {
	static Shop inst;
	return inst;
}

const UserHandler Shop::getUserHandler() const {
	return userHandler;
}

const ProductHandler Shop::getProductHandler() const {
	return productHandler;
}

void Shop::add() {
	productHandler.add();
}

void Shop::addToCart() {
	user->addToCart(productHandler);
}

void Shop::remove() {
	productHandler.remove();
}

void Shop::removeFromCart() {
	user->removeFromCart();
}

void Shop::print() const {
	productHandler.print();
}

void Shop::printCart() const {
	user->getCart().print();
}

User* Shop::login() {
	user = userHandler.login();
	if (user == nullptr) {
		std::cout << "Wrong username or password!" << std::endl;
		return nullptr;
	}
	return user;
}

User* Shop::registration() {
	user = userHandler.registration();
	if (user == nullptr) {
		std::cout << "Username already taken!" << std::endl;
		return nullptr;
	}
	return user;
}
