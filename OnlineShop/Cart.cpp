#include <iostream>
#include "Cart.h"
#include "ProductHandler.h"

using std::cout;

Cart::Cart() : numberOfProducts(0) {}

const std::vector<Product> Cart::getCart() const {
	return cart;
}

const int Cart::getNumberOfProducts() const {
	return numberOfProducts;
}

void Cart::addProduct(const Product& pr, int position, int count, ProductHandler productHandler) {
	if (pr.getCount() >= count) {
		// changing the count of the product in the shop and then add it to the cart
		Product productToShop;
		Product productToCart;

		productToShop.setSKU(pr.getSKU());
		productToShop.setBrand(pr.getBrand());
		productToShop.setColor(pr.getColor());
		productToShop.setModel(pr.getModel());
		productToShop.setPrice(pr.getPrice());
		productToShop.setCount(pr.getCount() - count);
		productToShop.setProduct(pr.getProduct());

		productToCart.setSKU(pr.getSKU());
		productToCart.setBrand(pr.getBrand());
		productToCart.setColor(pr.getColor());
		productToCart.setModel(pr.getModel());
		productToCart.setPrice(pr.getPrice());
		productToCart.setCount(count);
		productToCart.setProduct(pr.getProduct());

		productHandler.removeProduct(position);
		productHandler.addProduct(productToShop);
		
		cart.push_back(productToCart);
		numberOfProducts++;
	}
	else {
		cout << "Not in stock!" << std::endl;
	}
}

void Cart::add(const int& position, ProductHandler productHandler) {
	int count;
	cout << "Please, enter the count of the product you want:" << std::endl;
	std::cin >> count;

	addProduct(productHandler.getProducts()[position], position, count, productHandler);
}

void Cart::remove() {
	cout << "Please, enter the number of the product to remove from cart: ";
	int position;
	std::cin >> position;
	removeProduct(position);
	numberOfProducts--;
}

void Cart::removeProduct(const int& position) {
	if (position >= 0 && position < numberOfProducts) {
		cart.erase(cart.begin() + position);
		numberOfProducts--;
	}
	else {
		cout << "Invalid number of product!" << std::endl;
	}
}

void Cart::print() const {
	for (int i = 0; i < numberOfProducts; i++) {
		cout << i << ") " << cart[i] << std::endl;
		cout << std::endl;
	}
}