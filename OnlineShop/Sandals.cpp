#include "Sandals.h"

Sandals::Sandals() : Product() {
	type = sandals;
};

void Sandals::input() {
	Product::input();
}

std::ostream& Sandals::print(std::ostream& out) const {
	return Product::print(out);
}