// product_base.h
#ifndef PRODUCT_BASE_H
#define PRODUCT_BASE_H

#include <string>
#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    double price;

public:
    Product(const string& n = "", double p = 0.0);
    virtual ~Product();

    virtual void display() const;
    virtual double getPrice() const;
};

#endif // PRODUCT_BASE_H
