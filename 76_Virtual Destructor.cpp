#include<iostream>
using namespace std;

class Base {
public:
      virtual ~Base() {cout << "Base destroyed\n";}
};

class Derived : public Base {
public:
      ~Derived() {cout << "Derived destroyed\n";}
};

int main() {
      Base* p = new Derived();
      delete p;   // Both destructors called
      return 0;
}