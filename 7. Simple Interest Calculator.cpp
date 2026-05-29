#include <iostream>
using namespace std;

int main() {
      double principal, rate, time, simple_interest;
      cout << "Enter the principal amount, rate and time (in months): " << endl;
      cin >> principal >> rate >> time;

      // Calculation
      simple_interest = (principal * rate * time ) / 100.0;
      
      cout << "Simple Interest: " << simple_interest << endl;
      
      return 0
}