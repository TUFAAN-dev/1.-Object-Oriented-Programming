#include <iostream>
using namespace std;

class Complex {
      double real, img;
public:
      Complex(double r = 0, double i = 0) : real(r) , img(i) {}
      Complex operator+(const Complex& other) const {
            return Complex(real + other.real, img + other.img);
      }

      void print() const { cout << real << " + " << img << "i" << endl;}
};

int main() {
      Complex a(2,3), b(1,4);
      Complex c = a + b;
      c.print();
      return 0;
}