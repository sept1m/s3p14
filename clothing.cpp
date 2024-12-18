#include "clothing.h"

Clothing::Clothing(const string& n, double p, const string& s) : Product(n, p), size(s) {}

void Clothing::display() const {
    cout << "[Одежда] Имя: " << name << ", Цена: " << price << ", Размер: " << size << endl;
}

void Clothing::changeSize(const string& newSize) {
    size = newSize;
}
