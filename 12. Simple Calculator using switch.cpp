#include <iostream>
#include <cmath>
using namespace std;

int main() {
      int   num1, num2;
      char  op;

      cout << "Enter the equation:" << endl;
      cin >> num1 >> op >> num2;

      switch (op) {
            case '+':
                  cout << "The Sum is:" << num1 + num2 << endl;
                  break;
            case '-':
                  cout << "The Difference is:" << num1 - num2 << endl;
                  break;
            case '*':
                  cout << "The product is:" << num1 * num2 << endl;
                  break;
            case '/':        // Considering edge cases
                  if (num2 != 0) {
                        cout << "The quotient is:" << num1 / num2 << endl;
                  }
                  else {
                        cout << "Division by zero is not allowed. Please enter a valid divisor." << endl;
                  }
                  break;
            case '%':        // Considering edge cases                 
                  if (num2 != 0) {
                        cout << "The remainder is:" << num1 % num2 << endl;
                  }
                  else {
                        cout << "Division by zero is not allowed. Please enter a valid divisor." << endl;
                  }
                  break;
            case '^':
                  cout << "The result is:" << pow(num1, num2) << endl;
                  break;
            default:
                  cout << "The operator is invalid. Please enter a valid operator." << endl;
      }

}