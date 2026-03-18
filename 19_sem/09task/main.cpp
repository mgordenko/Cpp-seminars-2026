#include <iostream>

class Fraction {
    int numerator;
    int denominator;
    void reduce() {
        for (int i = numerator; i > 1; --i) {
            if (numerator % i == 0 && denominator % i == 0) {
                numerator /= i;
                denominator /= i;
            }
        }
    }
public:
    Fraction(int num, int denom = 1) : numerator(num), denominator(denom) {
        reduce();
    }
    int getNumerator() const {
        return numerator;
    }
    int getDenominator() const {
        return denominator;
    }
    Fraction operator+(const Fraction& b) { // this
        int num = numerator * b.denominator + b.numerator * denominator;
        int denom = denominator * b.denominator;
        return Fraction(num, denom);
    }
    friend std::ostream& operator<<(std::ostream& os, const Fraction& a);
    friend std::istream& operator>>(std::istream& os, Fraction& a);
};
bool operator==(const Fraction& a, const Fraction& b) {
    return a.getNumerator() == b.getNumerator() && a.getDenominator() == b.getDenominator();
}
std::ostream& operator<<(std::ostream& os, const Fraction& a) {
    std::cout << a.getNumerator() << '/' << a.getDenominator() << '\n';
    return os;
}
std::istream& operator>>(std::istream& is, Fraction& a) {
    std::cin >> a.numerator >> a.denominator;
    a.reduce();
    return is;
}
int main() {
    Fraction f1(10, 20);
    std::cout << f1 << f1;
    Fraction f2(5, 15);
    Fraction f3 = f1 + f2;
    std::cin >> f3;
    std::cout << f3;
}