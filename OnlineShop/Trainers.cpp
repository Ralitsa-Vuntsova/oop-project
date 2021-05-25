#include "Trainers.h"

Trainers::Trainers() : Product() {
	type = trainers;
};

void Trainers::input() {
	Product::input();
}

std::ostream& Trainers::print(std::ostream& out) const {
	return Product::print(out);
}