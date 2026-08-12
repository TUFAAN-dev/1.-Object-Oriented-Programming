#include <iostream>
using namespace std;

int main() {
      double total_marks, percentage, result;

      cout << "Enter the total marks and percentage: " << endl;
      cin >> total_marks >> percentage;

      // Calculation
      result = (total_marks * percentage) / 100.0;

      cout << "Result: " << result << endl;

      return 0;
}