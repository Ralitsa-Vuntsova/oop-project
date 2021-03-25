#pragma once
#include "Product.h"

class Boots : public Product {
public:
	Boots();

	void input();
	std::ostream& print(std::ostream&) const;
};