#include <iostream>
using namespace std;

int main() {
      int* p = new int;
      *p = 77;
      cout << "Dynamic Value: " << *p << endl;
      delete p;
      return 0;
}