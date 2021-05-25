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

	// Test: registration
	cout << "Please, register:" << std::endl;
	user = shop.registration();

	// Test: login
	cout << "Please, log in:" << std::endl;
	user = shop.login();

	// Test: adding, removing and printing products to/from the shop
	// Note: We can't add products with the same properties again,
	// or, for example, same brand and model but with different count!
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

	// Test: adding, removing and printing to/from the cart of a user
	// Note: When we remove from the cart, we remove all the counts of a product!
	do {
		cout << "A = Add new product to cart." << endl;
		cout << "R = Remove product from cart." << endl;
		cout << "P = Print products in cart." << endl;
		cout << "Q = Quit" << endl;
		cout << "Choose A, R, P or Q: ";
		cin >> key;

		switch (key) {
		case 'A':
			shop.addToCart();
			break;
		case 'R':
			shop.removeFromCart();
			break;
		case 'P':
			shop.printCart();
			break;
		case 'Q':
			break;
		default:
			cout << "Wrong input!" << endl;
		}
	} while (key != 'Q');

	system("pause");
	return 0;
}