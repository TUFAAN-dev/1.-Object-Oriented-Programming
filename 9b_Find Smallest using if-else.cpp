#include <iostream>
using namespace std;

int main() {
      int A, B, C, D;

      cout << "Enter four numbers:" << endl;
      cin >> A >> B >> C >> D;

      // Decision
      if (A < B && A < C && A < D) {
            cout << "A is the smallest number." << endl;
      }
      else if (B < A && B < C && B < D) {
            cout << "B is the smallest number." << endl;
      }
      else if (C < A && C < B && C < D) {
            cout << "C is the smallest number." << endl;
      }
      else if (D < A && D < B && D < C) {

      }else {
            cout << "There is a tie for the smallest number." << endl;
            cout << "Those Numbers are" << _ << "and" << _ ;
      }

      return 0;
}