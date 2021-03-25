#pragma once
#include "Product.h"

class Sneakers : public Product {
public:
	Sneakers();

	void input();
	std::ostream& print(std::ostream&) const;
};