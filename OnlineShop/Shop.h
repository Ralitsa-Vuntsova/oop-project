#pragma once
#include "User.h"
#include "Users.h"
#include "Products.h"

class Shop { // to use in main
private:
	User* user;
	Users userManager = Users::instance();
	Products productManager = Products::instance();

	Shop();

public:
	static Shop& instance();

	const Products getProductManager() const;

	void add();
	void addToCart();
	void remove();
	void removeFromCart();
	void print() const;
	void printCart() const;

	User* login();
	User* registration();
};


