#include "food_product.h"

FoodProduct::FoodProduct(const string& n, double p, int sl) : Product(n, p), shelfLife(sl) {}

void FoodProduct::display() const {
    cout << "[�������� �������] ���: " << name << ", ����: " << price << ", ���� ��������: " << shelfLife << " ����" << endl;
}

void FoodProduct::changeShelfLife(int newShelfLife) {
    shelfLife = newShelfLife;
}
