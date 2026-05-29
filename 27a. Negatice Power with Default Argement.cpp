#include <iostream>
using namespace std;

double power(double base, int exp = 2) {

      // Handle 0^0 and 0 with negative exponent
      if (base == 0) {
            if (exp == 0) {
                  cout << "Warning: 0^0 is undefined. Returning 1.\n";
                  return 1.0;
            };

            if (exp < 0) {
                  cout << "Error: 0 cannot be raised to a negative power.\n";
                  return 0.0;
            };

            return 0.0;
      };

      // Work with absolute value of exponent for the loop
      long absExp = exp;
      if (absExp < 0) absExp = -absExp;

      double result = 1.0;
      for (long long i = 0; i < absExp; ++i) {
            result *= base;
      };

      // If original exponent was negative, take reciprocals
      if (exp < 0) {
            result = 1.0 / result;
      };

      return result;
};

int main(){
      cout << power(5) << endl;
      cout << power(2, 10) << endl;
      cout << power(2, -3) << endl;
      cout << power(5, -1) << endl;
      cout << power(0,  5) << endl;

      return 0;
}







