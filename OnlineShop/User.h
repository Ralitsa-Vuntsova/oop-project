#pragma once
#include "BankAccount.h"
#include "Products.h"
#include "Cart.h"
#include <string>

class User {
private:
	std::string username;
	std::string password;

	BankAccount bankAccount;
	Cart cart;

public:
	User();

	void setUsername(const std::string);
	void setPassword(const std::string);
	void setBankAccount(const BankAccount&);
	void setCart(const Cart&);

	const std::string getUsername() const;
	const std::string getPassword() const;
	const BankAccount getBankAccount();
	const Cart getCart();

	void addToCart();
	void removeFromCart();
	void input();
};