#pragma once
#include <iostream>
#include <string>

enum product {
	boots,
	sneakers,
	sandals,
	trainers,
	others
};

class Product {
protected:
	int SKU; // stock keeping unit
	std::string brand;
	std::string model;
	std::string color;
	double price;
	int count; // number of products in stock
	product type;

public:
	Product();

	void setSKU(const int);
	void setBrand(const std::string);
	void setModel(const std::string);
	void setColor(const std::string);
	void setPrice(const double);
	void setCount(const int);
	void setProduct(const product);

	const int getSKU() const;
	const std::string getBrand() const;
	const std::string getModel() const;
	const std::string getColor() const;
	const double getPrice() const;
	const int getCount() const;
	const product getProduct() const;

	virtual void input();
	virtual std::ostream& print(std::ostream&) const;
};

bool operator==(const Product&, const Product&);
std::ostream& operator<<(std::ostream&, const Product&);