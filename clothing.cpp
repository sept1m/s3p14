#include "clothing.h"

Clothing::Clothing(const string& n, double p, const string& s) : Product(n, p), size(s) {}

void Clothing::display() const {
    cout << "[������] ���: " << name << ", ����: " << price << ", ������: " << size << endl;
}

void Clothing::changeSize(const string& newSize) {
    size = newSize;
}
