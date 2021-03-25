#include <iostream>
#include "User.h"

using std::cout;
using std::cin;

User::User() {}

void User::setUsername(const std::string name) {
	username = name;
}

void User::setPassword(const std::string pass){
	password = pass;
}

void User::setBankAccount(const BankAccount& account) {
	bankAccount = account;
}

void User::setCart(const Cart& cart) {
	this->cart = cart;
}

const std::string User::getUsername() const {
	return username;
}

const std::string User::getPassword() const {
	return password;
}

const BankAccount User::getBankAccount() {
	return bankAccount;
}

const Cart User::getCart() {
	return cart;
}

void User::addToCart() {
	int position;
	cout << "Please, enter the number of the product to add to your cart: ";
	std::cin >> position;
	cart.add(position);
}

void User::removeFromCart() {
	cout << "Please, enter the number of the product to remove from your cart: ";
	int position;
	cin >> position;
	cart.remove(position);
}

void User::input() {
	cout << "Please, enter username: ";
	cin >> username;

	cout << "Please, enter password: ";
	cin >> password;

	cout << "Please, enter bank account" << std::endl;
	bankAccount.input();
}

