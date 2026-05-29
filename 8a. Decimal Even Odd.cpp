#include <iostream>
#include <cmath>
using namespace std;

int main() {
      float num;
      cout << "Enter a decimal number: " << endl;;
      cin >> num; 

      int integerNum = static_castint>(floor(num));
      if (integerNum< % 2 == 0) {
            cout << "The number is even." << endl;
      } else {
            cout << "The number is odd." << endl;
      }
      return 0;
}
