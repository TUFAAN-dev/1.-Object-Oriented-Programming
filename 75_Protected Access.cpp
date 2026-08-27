#include <iostream>
using namespace std;

class Base {
protected:
      int x;
public:
      Base(int val) : x(val) {}
};

class Derived : public Base {
public:
      Derived(int val) : Base(val) {}
            void showX() {cout << "x= " << x << endl;}
};

int main() {
      Derived d(42);
      d.showX();

      // d.x = 10; //error
      return 0;
}