#include <iostream>
using namespace std;

int fib(int n) {
      if (n <= 1) return n;
      return fib(n-1) + fib(n-2);
};

int main() {
      int n;
      cout << "Enter N: ";
      cin >> n;

      if (n <= 45) {
      cout << "Fib(" << n << ") = " << fib(n) << endl;
      }
      else{
            cout << "Number too big. Keep it under 45.";
      };

      return 0;
}