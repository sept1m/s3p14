// food_product.h
#ifndef FOOD_PRODUCT_H
#define FOOD_PRODUCT_H

#include "product_base.h"

class FoodProduct : public Product {
private:
    int shelfLife;

public:
    FoodProduct(const string& n, double p, int sl);
    void display() const override;
    void changeShelfLife(int newShelfLife);
};

#endif // FOOD_PRODUCT_H
