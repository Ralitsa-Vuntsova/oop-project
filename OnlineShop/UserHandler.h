#pragma once
#include "User.h"
#include <vector>

class UserHandler { // to help manage all the users in the shop
private:
	std::vector<User> users;
	int numberOfUsers;

	UserHandler();

public:
	static UserHandler& instance();

	const std::vector<User> getUsers() const;
	const int getNumberOfUsers() const;

	User* login(); 
	User* registration(); 
};
