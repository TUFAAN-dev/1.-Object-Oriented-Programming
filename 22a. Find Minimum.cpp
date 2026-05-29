#include <iostream>
using namespace std;

int min(int a, int b) {
      return (a > b) ? a : b;
};

int main() {
      int a, b;
      cout << "Enter a and b" << endl;
      cin >> a >> b;

      cout << "The Minimum is" << min(a,b) << endl;  
}