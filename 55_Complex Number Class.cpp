#include <iostream>
using namespace std;

class Complex {
      double real, img;
public:
      void set(double r, double i) {real = r; img = i;}

      void display() {cout << real << " + " << img << "i" << endl;}

      Complex add(const Complex& other) {
            Complex res;
            res.real = real + other.real;
            res.img  = img + other.img;
            return res;
      }
};

int main() {
      Complex c1, c2;
      c1.set(3,4);
      c2.set(1,2);
      Complex Sum = c1.add(c2);
      Sum.display();
      return 0;
}