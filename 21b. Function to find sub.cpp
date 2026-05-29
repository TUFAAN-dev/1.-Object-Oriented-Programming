#include<iostream>
using namespace std;

int sub(int a, int b) {
      return a - b;
}

int main() {
      int a, b;

      cout << "Enter a and b" << endl;
      cin >> a >> b;
      
      cout << "The Sub is:" << sub(a,b) << endl;
}