#include <iostream>
#include <iostream>
#include <string>
#include <vector>

struct Product {
    std::string name;
    int price;
    int quantity;
    inline static int countCreate = 0;
    inline static int countDelete = 0;
    Product() {
        std::cout << "Product()\n"; ++countCreate;
    }

    Product(std::string name, int price, int quantity) :
        name(name), price(price), quantity(quantity) {
        std::cout << "Product(std::string name, int price, int quantity)\n";
        ++countCreate;
    }
    void print() {
        std::cout << name << ' ' << price << ' ' << quantity << '\n';
    }
    ~Product() {
        std::cout << "~Product()\n";
        ++countDelete;
    }
    Product(const Product& other) : name(other.name), price(other.price), quantity(other.quantity) {
        std::cout << " Product(const Product& other)\n";
        ++countCreate;
    }
};

void sortByPrice(std::vector<Product*>& products) {
    std::sort(products.begin(), products.end(),
        [](Product* product1, Product* product2)
        {return (product1->price < product2->price ? true : false);});
}

void sortByName(std::vector<Product*>& products) {
    std::sort(products.begin(), products.end(),
        [](Product* product1, Product* product2)
        {return ((*product1).name < product2->name ? true : false);});
}

int totalCost(const std::vector<Product*>& products) {
    int costs = 0;
    std::cout << products.size() << '\n';
    for (size_t i = 0; i < products.size(); ++i) {
        costs += products[i]->price * products[i]->quantity;
    }
    return costs;
}
int main() {
    int size = 5;
    std::vector<Product*> v;
    v.reserve(size);
    v.emplace_back(new Product("Product5", 1500, 2));
    v.emplace_back(new Product("Product3", 4000, 100));
    v.emplace_back(new Product("Product4", 6000, 7));
    v.emplace_back(new Product("Product1", 1000, 10));
    v.emplace_back(new Product("Product2", 2000, 13));

    for (size_t i = 0; i < size; ++i) {
        v[i]->print();
    }
    std::cout << '\n';
    sortByPrice(v);
    for (size_t i = 0; i < size; ++i) {
        v[i]->print();
    }
    // sortByName(v);
    // for (size_t i = 0; i < size; ++i) {
    //     v[i].print();
    // }
    // std::cout << totalCost(v) << '\n';
    for (size_t i = 0; i < size; ++i) {
        delete v[i];
    }
    std::cout << Product::countCreate << '\n';
    std::cout << Product::countDelete << '\n';
    return 0;
}
