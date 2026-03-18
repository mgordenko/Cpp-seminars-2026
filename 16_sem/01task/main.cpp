#include <iostream>
#include "date.h"
#include <iostream>
#include <string>
#include <vector>

struct Product {
    std::string name;
    int price;
    int quantity;
    inline static int count = 0;
    inline static int count_del = 0;
    Product() {
        std::cout << "Product()\n";
        ++count;
    }
    Product(const Product& other) : name(other.name), price(other.price), quantity(other.quantity) {
        std::cout << " Product(const Product& other)\n";
        ++count;
    }
    Product(std::string name, int price, int quantity) : name(name), price(price), quantity(quantity) {
        std::cout << "Product(std::string name, int price, int quantity)\n";
        ++count;
    }
    void print() {
        std::cout << name << ' ' << price << ' ' << quantity << '\n';
    }
    ~Product() {
        std::cout << "~Product()\n";
        ++count_del;
    }
};

void sortByPrice(std::vector<Product*>& products) {
    std::sort(products.begin(), products.end(),
        [](Product* product1, Product* product2){return (product1->price < product2->price ? true : false);});
}

void sortByName(std::vector<Product*>& products) {
    std::sort(products.begin(), products.end(),
        [](Product* product1, Product* product2){return (product1->name < product2->name ? true : false);});
}

int totalCost(const std::vector<Product*>& products) {
    int costs = 0;
    std::cout << products.size() << '\n';
    for (size_t i = 0; i < products.size(); ++i) {
        costs += products[i]->price*products[i]->quantity;
    }
    return costs;
}
int main() {
    int size = 5;
    std::vector<Product*> v;
    v.reserve(size);
    v.push_back(new Product("Product5", 1500, 2));
    v.push_back(new Product("Product3", 4000, 100));
    v.push_back(new Product("Product4", 6000, 7));
    v.push_back(new Product("Product1", 1000, 10));
    v.push_back(new Product("Product2", 2000, 13));

    for (size_t i = 0; i < size; ++i) {
        v[i]->print();
    }
    std::cout << '\n';
    sortByPrice(v);
    for (size_t i = 0; i < size; ++i) {
        v[i]->print();
    }
    sortByName(v);
    for (size_t i = 0; i < size; ++i) {
        v[i]->print();
    }
    std::cout << totalCost(v) << '\n';
    for (size_t i = 0; i < size; ++i) {
        delete v[i];
    }
    std::cout << Product::count << '\n';
    std::cout << Product::count_del << '\n';
    return 0;
}