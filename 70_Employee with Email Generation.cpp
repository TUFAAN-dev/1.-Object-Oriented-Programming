#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Employee {
      int id;
      string name, dept;
public:
      Employee(int i, const string& n, const string& d) : id(i) , name(n) , dept(d) {}
      Employee(const Employee& e) : id(e.id) , name(e.name) , dept(e.dept) {}

      string GenerationEmail() {
            string email = name;
            replace(email.begin() , email.end(), ' ', '.');
            for (auto& c : email) c = tolower(c);
            return email + "@company.com";
      }

      void display() { cout << id << " " << name << "email: " << GenerationEmail() << endl;}  
};

int  main() {
      Employee e1(302, "John Wick" , "Killer");
      Employee e2 = e1;
      e2.display();

      return 0;
}