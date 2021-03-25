#include "Boots.h"

Boots::Boots() : Product() {
	type = boots;
}

void Boots::input() {
	Product::input();
}

std::ostream& Boots::print(std::ostream& out) const {
	out << "SKU: " << SKU << std::endl;
	out << "Brand: " << brand << std::endl;
	out << "Model: " <<  model << std::endl;
	out << "Color: " << color << std::endl;
	out << "Price: " << price << std::endl;
	out << "Count: " << count << std::endl;

	return out;
}
