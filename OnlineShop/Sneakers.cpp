#include "Sneakers.h"

Sneakers::Sneakers() : Product() {
	type = sneakers;
};

void Sneakers::input() {
	Product::input();
}

std::ostream& Sneakers::print(std::ostream& out) const {
	return Product::print(out);
}