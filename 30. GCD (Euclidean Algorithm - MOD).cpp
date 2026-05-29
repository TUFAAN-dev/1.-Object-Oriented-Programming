#include <iostream>
using namespace std;

int gcd(int x, int y) {
      while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
      }
      return x;
};

int main() {
      int x,y;
      cout << "Enter x and y: ";
      cin >> x >> y;
      cout << "GCD = " << gcd(x,y) << endl;

      return 0;
}