#include "product_base.h"

Product::Product(const string& n, double p) : name(n), price(p) {}

Product::~Product() {}

void Product::display() const {
    cout << "���: " << name << ", ����: " << price << endl;
}

double Product::getPrice() const {
    return price;
}
