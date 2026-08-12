#include <iostream>
using namespace std;

double power(double base, int exp = 2) {
      double result = 1.0;
      for (int i = 0; i < exp; ++i) result *= base;
      return result;
};

int main(){
      cout << "5^2 = " << power(5) << endl;
      cout << "2^10= " << power(2,10) << endl;

      return 0;
}