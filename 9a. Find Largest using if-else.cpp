#include <iostream>
using namespace std;

int main() {
      int A, B, C;

      cout << "Enter three numbers:" << endl;
      cin >> A >> B >> C;

      // Decision
      if (A > B && A > C) {
            cout << A << " is the greatest number." << endl;
      }
      else if (B > A && B > C) {
            cout << B << " is the greatest number." << endl;
      }
      else if (C > A && C > B) {
            cout << C << " is the greatest number." << endl;
      }
      else {
            cout << "There is a tie for the greatest number." << endl;
      }

      return 0;
}