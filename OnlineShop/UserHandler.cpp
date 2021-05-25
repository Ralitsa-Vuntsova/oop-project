#include <iostream>
#include "UserHandler.h"

using std::cout;
using std::cin;

UserHandler::UserHandler() : numberOfUsers(0) {}

UserHandler&UserHandler::instance() {
	static UserHandler inst;
	return inst;
}

const std::vector<User> UserHandler::getUsers() const {
	return users;
}

const int UserHandler::getNumberOfUsers() const {
	return numberOfUsers;
}

User* UserHandler::login() {
	std::string usern;
	cout << "Please, enter your username: ";
	cin >> usern;

	std::string passw;
	cout << "Please, enter your password: ";
	cin >> passw;

	for (int i = 0; i < numberOfUsers; i++) {
		if (usern == users[i].getUsername()) {
			if (passw == users[i].getPassword()) {
				return &users[i];
			}
		}
	}

	return nullptr;
}

User* UserHandler::registration() {
	User newUser;
	newUser.input();

	for (int i = 0; i < numberOfUsers; i++) {
		if (newUser.getUsername() == users[i].getUsername()) {
			return nullptr;
		}
	}
	
	users.push_back(newUser);
	numberOfUsers++;

	return &newUser;
}