#include<iostream>
using namespace std;

int main() {
      int n, rev;
      cout << "Enter Integer: " << endl;
      cin >> n;

      int temp = n;
      while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
      }
      cout << "Reversed = " << rev << endl;
      
      return 0;
}