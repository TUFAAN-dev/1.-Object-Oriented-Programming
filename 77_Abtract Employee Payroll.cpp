#include<iostream>
using namespace std;

class Employee {
public:
      virtual double calculateSalary() const = 0;
      virtual ~Employee() {}
};

class SalariedEmployee : public Employee {
      double monthly;
public:
      SalariedEmployee(double sal) : monthly(sal) {}
      double calculateSalary() const override {return monthly;}
};

class HourlyEmployee : public Employee {
      double rate;
      int hours;
public:
      HourlyEmployee(double r, int h) : rate(r) , hours(h) {}
      double calculateSalary() const override {return rate * hours;} 
};

int main() {
      Employee* e1 = new SalariedEmployee(40000);
      Employee* e2 = new HourlyEmployee(20, 160);

      cout << "Salaried: " << e1->calculateSalary() << endl;
      cout << "Hourly: " << e2->calculateSalary() << endl;

      delete e1; delete e2;

      return 0;
}

