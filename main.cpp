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
        cout << "\n1. Создать одежду" << endl;
        cout << "2. Создать продукт питания" << endl;
        cout << "3. Вывести все товары" << endl;
        cout << "4. Найти самый дорогой товар" << endl;
        cout << "0. Выход" << endl;
        cout << "Введите ваш выбор: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, size;
                double price;
                cout << "Введите имя: ";
                cin >> name;
                cout << "Введите цену: ";
                cin >> price;
                cout << "Введите размер: ";
                cin >> size;
                products.push_back(make_shared<Clothing>(name, price, size));
                break;
            }
            case 2: {
                string name;
                double price;
                int shelfLife;
                cout << "Введите имя: ";
                cin >> name;
                cout << "Введите цену: ";
                cin >> price;
                cout << "Введите срок хранения: ";
                cin >> shelfLife;
                products.push_back(make_shared<FoodProduct>(name, price, shelfLife));
                break;
            }
            case 3: {
                cout << "\nСписок товаров:" << endl;
                for (const auto& product : products) {
                    product->display();
                }
                break;
            }
            case 4: {
                Product* mostExpensive = findMostExpensive(products);
                if (mostExpensive) {
                    cout << "\nСамый дорогой товар:" << endl;
                    mostExpensive->display();
                }
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
