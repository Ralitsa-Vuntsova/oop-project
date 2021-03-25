#include <iostream>
#include "BankAccount.h"

using std::cout;
using std::cin;

void BankAccount::setName(const std::string n) {
	name = n;
}

void BankAccount::setIban(const std::string ib) {
	iban = ib;
}

const std::string BankAccount::getName() const {
	return name;
}

const std::string BankAccount::getIban() const {
	return iban;
}

void BankAccount::input() {
	cout << "Please, enter bank name: ";
	cin >> name;

	cout << "Please, enter iban: ";
	cin >> iban;
}