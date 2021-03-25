#include <iostream>
#include "Users.h"

using std::cout;
using std::cin;

Users::Users() : numberOfUsers(0) {}

Users &Users::instance() {
	static Users inst;
	return inst;
}

const std::vector<User> Users::getUsers() const {
	return users;
}

const int Users::getNumberOfUsers() const {
	return numberOfUsers;
}

User* Users::login() {
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

User* Users::registration() {
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