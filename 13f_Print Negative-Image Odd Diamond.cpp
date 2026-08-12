#include<iostream>
using namespace std;

int main() {
      int n;
      cout << "Enter N: ";
      cin >> n;

      // Upper half
      if (n >= 2 && n <=10) {
      for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                  cout << "#";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                  cout << " ";
            }
            for (int j = n; j >= i; j--) {
                  cout << "#";
            }
            cout << endl;
      }
      // Lower half
      for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= n - i + 1; j++) {
                  cout << "#";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                  cout << " ";
            }
            for (int j = n; j >= i; j--) {
                  cout << "#";
            }
            cout << endl;
      }
      }else{
            cout << "Invalid number" << endl;
      }

      return 0;
}

