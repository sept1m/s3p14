#include "product_base.h"
#include "clothing.h"
#include "food_product.h"
#include <vector>
#include <memory>
#include <limits>

// Function to find the most expensive product
Product* findMostExpensive(const vector<shared_ptr<Product>>& products) {
    Product* mostExpensive = nullptr;
    double maxPrice = 0.0;

    for (const auto& product : products) {
        if (product->getPrice() > maxPrice) {
            maxPrice = product->getPrice();
            mostExpensive = product.get();
        }
    }
    return mostExpensive;
}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<shared_ptr<Product>> products;

    int choice;
    do {
        cout << "\n1. ������� ������" << endl;
        cout << "2. ������� ������� �������" << endl;
        cout << "3. ������� ��� ������" << endl;
        cout << "4. ����� ����� ������� �����" << endl;
        cout << "0. �����" << endl;
        cout << "������� ��� �����: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, size;
                double price;
                cout << "������� ���: ";
                cin >> name;
                cout << "������� ����: ";
                cin >> price;
                cout << "������� ������: ";
                cin >> size;
                products.push_back(make_shared<Clothing>(name, price, size));
                break;
            }
            case 2: {
                string name;
                double price;
                int shelfLife;
                cout << "������� ���: ";
                cin >> name;
                cout << "������� ����: ";
                cin >> price;
                cout << "������� ���� ��������: ";
                cin >> shelfLife;
                products.push_back(make_shared<FoodProduct>(name, price, shelfLife));
                break;
            }
            case 3: {
                cout << "\n������ �������:" << endl;
                for (const auto& product : products) {
                    product->display();
                }
                break;
            }
            case 4: {
                Product* mostExpensive = findMostExpensive(products);
                if (mostExpensive) {
                    cout << "\n����� ������� �����:" << endl;
                    mostExpensive->display();
                }
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
