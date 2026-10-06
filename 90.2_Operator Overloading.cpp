#include<iostream>
using namespace std;

class Complex {
private:
      double real_, imag_;
public:
      Complex operator+(const Complex& other) const {
            return Complex{real_ + other.real_, imag_ + other.imag_};
      }
};

int main() {
      Complex cmp;

}