#include<iostream>
using namespace std;

int reverse(int n) {
      int rev = 0;
      while (n != 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
      };
      return rev;
};

int main() {
      int digit;
      cout << "Enter digit" << endl;
      cin >> digit;

      cout << "The reverse of digits is:" << reverse(digit) << endl;
}