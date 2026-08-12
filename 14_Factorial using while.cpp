#include <iostream>
using namespace std;

int main() {
      int n;
      cout << "Enter a number:" << endl;
      cin >> n;

      long long Factorial = 1;
      int i = 1;

      while (i <= n) {        // Is i equal to less than 'n' (let's take n=5)? Yes...
            Factorial *= i;   // Then, multiply i=1 to Factorial and then store it in Factorial again. 
            i++;              // increment of 1. 1st loop(i=1), 2nd(i=2), 3rd(i=3), 4th(i=4), 5th(i=5) and stops
      }

      cout << n << "! = " << Factorial << endl;

      return 0;
}