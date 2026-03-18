#include <iostream>
#include <deque>
#include <vector>
struct Car {
    std::string getBrand() const {
        return brand;
    }
    int getNumber() const {
        return number;
    }
    void setBrand(std::string brand) {
        this->brand = brand;
    }
    void setNumber(int number) {
        this->number = number;
    }
    Car() : brand(""), number(0) {}
    explicit Car(std::string brand) : brand(brand), number(0) {}
    Car(const Car& car) : brand(car.brand), number(car.number) {}
    Car(std::string brand, int number) : brand(brand), number(number) { }
    void print() const {
        std::cout << brand << ' ' << number << '\n';
    }
private:
    std::string brand;
    int number;
};
int main() {
    Car car = Car("Audi", 777);
    Car car1 = (Car)std::string("Volvo");
    car.print();
    std::string b = car.getBrand();
    b = "fgrafbs";
    car.print();
}
