#include <iostream>
#include <vector>

class Payment {
    double amount;
    std::string data;
    public:
        Payment(double amount, std::string data) : amount(amount), data(std::move(data)) { }
        double getAmount() const { return amount; }
        std::string getData() const { return data; }
        virtual std::string getType() const {
            return "Payment";
        }
        virtual void process() {
            std::cout << "Payment::process()\n";
        }
        virtual ~Payment() {
            std::cout << "~Payment()\n";
        }
};
class CreditCardPayment : public Payment {
    std::string cardNumber;
    std::string cardHolder;
    public:
        CreditCardPayment(double amount, std::string data, std::string cardNumber, std::string cardHolder)
            : Payment(amount, std::move(data)), cardNumber(std::move(cardNumber)), cardHolder(std::move(cardHolder)) { }
        std::string getType() const override {
            return "Credit Card";
        }
        void process() override {
            std::cout << "CreditCardPayment::process()\n";
        }
        virtual ~CreditCardPayment() {
            std::cout << "~CreditCardPayment()\n";
        }
};
class PayPalPayment : public Payment {
    std::string email;
    public:
        PayPalPayment(double amount, std::string data, std::string email) : Payment(amount, std::move(data)), email(std::move(email)) { }
        std::string getType() const override {
            return "Pay Pal";
        }
        void process() override {
            std::cout << "PayPalPayment::process()\n";
        }
        virtual ~PayPalPayment() {
            std::cout << "~PayPalPayment()\n";
        }
};
class CashPayment : public Payment {
    public:
        CashPayment(double amount, std::string data) : Payment(amount, std::move(data)) { }
        std::string getType() const override {
            return "Cash";
        }
        void process() override {
            std::cout << "CashPayment::process()\n";
        }
        virtual ~CashPayment() {
            std::cout << "~CashPayment()\n";
        }
};
int main() {
    std::vector<Payment*> payments;
    payments.push_back(new Payment(1000, "10.02.2026"));
    payments.push_back(new Payment(2000, "20.02.2026"));
    payments.push_back(new CreditCardPayment(3000, "28.02.2026", "2000300002423532", "Anna"));
    payments.push_back(new PayPalPayment(4000, "19.02.2026", "grfugj@xample.com"));
    for (auto payment : payments) {
        std::cout << payment->getType() << '\n';
        payment->process();
    }
    for (auto payment : payments) {
        delete payment;
    }
}