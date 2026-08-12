#include <iostream>
using namespace std;

int main() {
      int Number;

      cout << "Enter a Number:" << endl;
      cin >> Number;

      // Decision 
      if (Number % 2 == 0){
            cout << "The number is Even." << endl;
      }
      else {
            cout << "The number is Odd." << endl;
      }

      return 0;

}