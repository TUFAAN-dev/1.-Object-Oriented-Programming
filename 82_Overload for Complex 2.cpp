#include <iostream>
using namespace std;

class Complex {
      double re, im;
public:
      Complex(double r=0, double i=0) : re(r), im(i) {
            friend ostream& operator<<(ostream& os, const Complex& c);
            friend istream& operator>>(istream& is, Complex& c); 
      };

      ostream& operator<<(ostream& os, const Complex& c) {
            OS << c.re << "+" << c.im << "i";
            return os;
      }

      istream& operator>>(istream& is, Complex& c) {
            is >> c.re >> c.im;
            return is;
      }
};

int main() {
      Complex c1;
      cout << "Enter complex (real imag): ";
      cin >> c1;
      cout << "You entered: " << c1 << endl;

      return 0;
};