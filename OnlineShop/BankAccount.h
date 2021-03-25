#pragma once
#include <string>

class BankAccount {
private:
	std::string name;
	std::string iban;

public:
	BankAccount() {};

	void setName(const std::string);
	void setIban(const std::string);

	const std::string getName() const;
	const std::string getIban() const;

	void input();
};