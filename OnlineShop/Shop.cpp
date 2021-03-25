#include <iostream>
#include "Shop.h"

Shop::Shop() {
	user = nullptr;
}

Shop & Shop::instance() {
	static Shop inst;
	return inst;
}

const Products Shop::getProductManager() const {
	return productManager;
}

void Shop::add() {
	productManager.add();
}

void Shop::addToCart() {
	user->addToCart();
}

void Shop::remove() {
	productManager.remove();
}

void Shop::removeFromCart() {
	user->removeFromCart();
}

void Shop::print() const {
	productManager.print();
}

void Shop::printCart() const {
	user->getCart().print();
}

User* Shop::login() {
	user = userManager.login();
	if (user == nullptr) {
		std::cout << "Wrong username!" << std::endl;
		return nullptr;
	}
	return user;
}

User* Shop::registration() {
	user = userManager.registration();
	if (user == nullptr) {
		std::cout << "Username taken!" << std::endl;
		return nullptr;
	}
	return user;
}
