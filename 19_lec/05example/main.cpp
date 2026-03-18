#include <iostream>
#include <vector>
#include <utility>

class Animal {
    std::string name_;
    public:
    Animal(std::string name) : name_(std::move(name)) {}
    Animal(const Animal& other) : name_(other.name_) {}
    Animal& operator=(const Animal& other) {
        name_ = other.name_;
    }
    virtual void say() const = 0;
    std::string getName() const { return name_; }
    virtual ~Animal() {
        std::cout << "~Animal()\n";
    }
};
class Dog : public Animal {
    public:
    Dog(std::string name) : Animal(name) {}
    void say() const {
        std::cout << "Dog's say\n";
    }
    virtual ~Dog() {
        std::cout << "~Dog()\n";
    }
};
class Cat : public Animal {
public:
    Cat(std::string name) : Animal(name) {}
    void say() const {
        std::cout << "Cat's say\n";
    }
    virtual ~Cat() {
        std::cout << "~Cat()\n";
    }
};
int main() {
    std::vector<Animal*> animals;
    animals.push_back(new Cat("cat1"));
    animals.push_back(new Cat("cat2"));
    animals.push_back(new Dog("dog1"));
    animals.push_back(new Dog("dog2"));
    for (auto animal : animals) {
        animal->say();
    }
    for (auto animal : animals) {
        delete animal;
    }
    return 0;
}