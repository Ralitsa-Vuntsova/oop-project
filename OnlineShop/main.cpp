#include <iostream>
#include "Shop.h"

using std::cout;
using std::cin;
using std::endl;

// Menu to test
int main() {
	Shop shop = Shop::instance();
	User* user = nullptr;

	char key;

	// Test for login and registration
	do { // first do this then check the condition
		cout << "L = login" << endl;
		cout << "R = registration" << endl;
		cout << "Choose L or R: ";
		cin >> key;

		switch (key) {
		case 'L':
			user = shop.login();
			break;
		case 'R':
			user = shop.registration();
			break;
		default:
			cout << "Wrong input!" << endl;
		}
	} while (user == nullptr);

	// Test for shop
	do {
		cout << "A = Add new product to shop." << endl;
		cout << "R = Remove product from shop." << endl;
		cout << "P = Print available products." << endl;
		cout << "Q = Quit" << endl;
		cout << "Choose A, R, P or Q: ";
		cin >> key;

		switch (key) {
		case 'A':
			shop.add();
			break;
		case 'R':
			shop.remove();
			break;
		case 'P':
			shop.print();
			break;
		case 'Q':
			break;
		default:
			cout << "Wrong input!" << endl;
		}
	} while (key != 'Q');

	// Test for user - still doesn't work :(
	do {
		cout << "a = Add new product to cart." << endl;
		cout << "r = Remove product from cart." << endl;
		cout << "p = Print products in cart." << endl;
		cout << "q = Quit" << endl;
		cout << "Choose a, r, p or q: ";
		cin >> key;

		switch (key) {
		case 'a':
			shop.addToCart();
			break;
		case 'r':
			shop.removeFromCart();
			break;
		case 'p':
			shop.printCart();
			break;
		case 'q':
			break;
		default:
			cout << "Wrong input!" << endl;
		}
	} while (key != 'q');

	system("pause");
	return 0;
}