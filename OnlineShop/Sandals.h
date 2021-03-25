#pragma once
#include "Product.h"

class Sandals : public Product {
public:
	Sandals();

	void input();
	std::ostream& print(std::ostream&) const;
};