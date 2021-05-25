#pragma once
#include "User.h"
#include "UserHandler.h"
#include "ProductHandler.h"

class Shop { // test purposes only
private:
	User* user;
	UserHandler userHandler = UserHandler::instance();
	ProductHandler productHandler = ProductHandler::instance();

	Shop();

public:
	static Shop& instance();

	const UserHandler getUserHandler() const;
	const ProductHandler getProductHandler() const;

	void add();
	void addToCart();
	void remove();
	void removeFromCart();
	void print() const;
	void printCart() const;

	User* login();
	User* registration();
};


