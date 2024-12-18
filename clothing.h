// clothing.h
#ifndef CLOTHING_H
#define CLOTHING_H

#include "product_base.h"

class Clothing : public Product {
private:
    string size;

public:
    Clothing(const string& n, double p, const string& s);
    void display() const override;
    void changeSize(const string& newSize);
};

#endif // CLOTHING_H
