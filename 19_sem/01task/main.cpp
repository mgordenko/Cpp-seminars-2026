#include <iostream>
#include <vector>

class Employee {
private:
  std::string name;
  int id;
public:
  Employee(std::string name, int id) : name(name), id(id) {
    std::cout << "Create Employee" << '\n';
  }

  std::string GetName() const {
    return name;
  }

  int GetId() const {
    return id;
  }

  virtual double calculateSalary() const = 0;

  virtual void printInfo() const {
    std::cout << "name = " << name << ", id = " << id << '\n';
  }

  virtual ~Employee() {
    std::cout << "Destroy Employee" << '\n';
  }
};

class SalariedEmployee : public Employee {
private:
  double monthlySalary;
public:
  SalariedEmployee(std::string name, int id, double monthlySalary) : Employee(name, id), monthlySalary(monthlySalary) {
    std::cout << "Create SalariedEmployee" << '\n';
  }

  double calculateSalary() const override {
    return monthlySalary;
  }

  void printInfo() const override {
    std::cout << "name = " << GetName() << ", id = " << GetId() << ", monthlySalary = " << monthlySalary << '\n';
  }

  ~SalariedEmployee() override {
    std::cout << "Destroy SalariedEmployee" << '\n';
  }
};

class HourlyEmployee : public Employee {
private:
  double hourlyRate;
  int hoursWorked;
public:
  HourlyEmployee(std::string name, int id, double hourlyRate, int hoursWorked) : Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {
    std::cout << "Create HourlyEmployee" << '\n';
  }

  double calculateSalary() const override {
    return hourlyRate * hoursWorked;
  }

  void printInfo() const override {
    std::cout << "name = " << GetName() << ", id = " << GetId() << ", hourlyRate = " << hourlyRate << ", hoursWorked = " << hoursWorked << '\n';
  }

  ~HourlyEmployee() override {
    std::cout << "Destroy HourlyEmployee" << '\n';
  }
};

class CommissionEmployee : public Employee {
private:
  double baseSalary;
  double sales;
  double commissionRate;
public:
  CommissionEmployee(std::string name, int id, double baseSalary, double sales, double commissionRate) : Employee(name, id), baseSalary(baseSalary), sales(sales), commissionRate(commissionRate) {
    std::cout << "Create CommissionEmployee" << '\n';
  }

  double calculateSalary() const override {
    return baseSalary + sales * commissionRate;
  }

  void printInfo() const override {
    std::cout << "name = " << GetName() << ", id = " << GetId() << ", baseSalary = " << baseSalary << ", sales = " << sales << ", commissionRate = " << commissionRate << '\n';
  }

  ~CommissionEmployee() override {
    std::cout << "Destroy CommissionEmployee" << '\n';
  }
};

int main() {
  int id = 0;
  std::vector<Employee*> employees;
  employees.push_back(new SalariedEmployee("Employee", id++, 60000));
  employees.push_back(new HourlyEmployee("Employee", id++, 3000, 5));
  employees.push_back(new CommissionEmployee("Employee", id++, 30000, 5, 2000));

  int salary = 0;

  for (Employee* employee : employees) {
    salary += employee->calculateSalary();
    employee->printInfo();
  }

  std::cout << "Salary sum: " << salary << '\n';

  for (Employee* employee : employees) {
    delete employee;
  }

  return 0;
}
