#include <iostream>
using namespace std;

int main() {
      int x = 42;
      int* ptr = &x;

      cout << "Value of x: " << *ptr << endl;
      return 0;
}