#include <iostream>
using namespace std;

class Fraction {
      int num, den;
      int gcd(int a, int b) {return b == 0 ? a : gcd(b, a%b);}
      void simplify() {
            int g = gcd(num, den);
            num /= g; den /= g;
            if (den < 0) {num = -num ; den = -den;}
      }
public:
      Fraction(int n=0, int d=1) : num(n), den(d) {simplify();}
      Fraction add (const Fraction& f) {
            return Fraction(num*f.den + f.num*den , den*f.den);
      }

      void print() {cout << num << "/" << den << endl;}
};

int main() {
      Fraction f1(2,4) , f2(3,6);
      Fraction sum = f1.add(f2);
      sum.print();

      return 0;
}

