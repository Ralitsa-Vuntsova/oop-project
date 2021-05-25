#include "Boots.h"

Boots::Boots() : Product() {
	type = boots;
}

void Boots::input() {
	Product::input();
}

std::ostream& Boots::print(std::ostream& out) const {
	return Product::print(out);
}
