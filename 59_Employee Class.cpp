#include <iostream>
#include <string>
using namespace std;

class Employee {
      string Name; 
      int id;
      double Salary;
public:
      void setData (const string& n, int i, double s) {Name = n; id = i; Salary = s;}
      void display () {cout << Name << "(ID: " << id << ") Salary :" << Salary << endl;}
      void giveRaise (int Raise) {Salary += Raise;}
};

int main() {
      Employee emp;
      emp.setData("Alishba", 101, 50000);
      emp.display();
      emp.giveRaise(10000);
      emp.display();

      return 0;
}



