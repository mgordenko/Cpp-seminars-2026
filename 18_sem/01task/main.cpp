#include <iostream>
#include <string>
#include <vector>

class Fraction {
    int numerator;
    int denominator;

    void reduce() {
        for (int i = numerator; i > 1; --i) {
            if ((numerator % i == 0) && (denominator % i == 0)) {
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

    friend Fraction operator+(const Fraction& a, const Fraction& b);
    friend std::ostream& operator<<(std::ostream&, const Fraction& b);
    friend Fraction operator-(const Fraction& a, const Fraction& b);
    friend Fraction operator*(const Fraction& a, const Fraction& b);
    friend Fraction operator/(const Fraction& a, const Fraction& b);
    friend bool operator==(const Fraction& a, const Fraction& b);
    friend bool operator!=(const Fraction& a, const Fraction& b);
    friend bool operator<(const Fraction& a, const Fraction& b);
    friend bool operator>(const Fraction& a, const Fraction& b);
    friend bool operator<=(const Fraction& a, const Fraction& b);
    friend bool operator>=(const Fraction& a, const Fraction& b);
};

Fraction operator+(const Fraction& a, const Fraction& b) {
    Fraction new_fraction = Fraction(a.numerator * b.denominator + b.numerator * a.denominator, a.denominator * b.denominator);
    new_fraction.reduce();
    return new_fraction;
}

Fraction operator-(const Fraction& a, const Fraction& b) {
    Fraction new_fraction = Fraction(a.numerator * b.denominator - b.numerator * a.denominator, a.denominator * b.denominator);
    new_fraction.reduce();
    return new_fraction;
}

Fraction operator*(const Fraction& a, const Fraction& b) {
    Fraction new_fraction = Fraction(a.numerator * b.numerator, a.denominator * b.denominator);
    new_fraction.reduce();
    return new_fraction;
}

Fraction operator/(const Fraction& a, const Fraction& b) {
    Fraction new_fraction = Fraction(a.numerator * b.denominator, a.denominator * b.numerator);
    new_fraction.reduce();
    return new_fraction;
}

bool operator==(const Fraction& a, const Fraction& b) {
    return a.numerator * b.denominator == a.denominator* b.numerator;
}

bool operator!=(const Fraction& a, const Fraction& b) {
    return not (a == b);
}

bool operator>(const Fraction& a, const Fraction& b) {
    return a.numerator * b.denominator > a.denominator * b.numerator;
}

bool operator<(const Fraction& a, const Fraction& b) {
    return a.numerator * b.denominator < a.denominator * b.numerator;
}

bool operator>=(const Fraction& a, const Fraction& b) {
    return not (a < b);
}

bool operator<=(const Fraction& a, const Fraction& b) {
    return not (a > b);
}

std::ostream& operator<<(std::ostream& os, const Fraction& b) {
    os << b.numerator << '/' << b.denominator << '\n';
    return os;
}

int main() {
    Fraction f1(2, 3);
    Fraction f2(4, 6);
    std::cout << (f1 == f2) << ' ' << (f1 > f2);
    return 0;
}