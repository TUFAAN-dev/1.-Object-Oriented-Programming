#include<iostream>
using namespace std;

int main() {
      int n;
      cout << "Enter N:" << endl;
      cin >> n;

      for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i * 2 + 4; j++ ) {
                  cout << "#";
            };
            cout << endl;
      }
}