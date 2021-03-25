#pragma once
#include "User.h"
#include <vector>

class Users { // to help manage all the users in the shop
private:
	std::vector<User> users;
	int numberOfUsers;

	Users();

public:
	static Users& instance();

	const std::vector<User> getUsers() const;
	const int getNumberOfUsers() const;

	User* login(); // checks if user has registration
	User* registration(); // checks if user has registration, if not creates new account
};
