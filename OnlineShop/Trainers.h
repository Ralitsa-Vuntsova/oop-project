#pragma once
#include "Product.h"

class Trainers : public Product {
public:
	Trainers();

	void input();
	std::ostream& print(std::ostream&) const;
};