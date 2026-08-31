#include<iostream>
using namespace std;

class Base {
public:
      virtual void foo() {cout << "Base::foo\n";}
};

class Derived : public Base {
public:
      void foo() override {cout << "Derived::foo\n";}
};

class FinalClass final : public Derived {
public:
      void foo() override {cout << "FinalClass::foo\n";}
};

// Class Error : public FinalClass {}; // Would not compile
int main() {
      FinalClass obj;
      obj.foo();
      return 0;
}