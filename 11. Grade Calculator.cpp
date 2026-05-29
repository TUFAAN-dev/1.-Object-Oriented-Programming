#include <iostream>
using namespace std;

int main() {
      int grades;

      cout << "Enter your Marks" << endl;
      cin >> grades;

      // Decision
      if (grades >= 90) {
            cout << "Your Grades are A+" << endl;
      }
      else if (grades < 90 && grades >= 80) {
            cout << "Your Grades are A" << endl;
      }
      else if (grades < 80 && grades >= 70) {
            cout << "Your Grades are B+" << endl;
      }
      else if (grades < 70 && grades >= 60) {
            cout << "Your Grades are B" << endl;
      }
      else if (grades < 60 && grades >= 50) {
            cout << "Your Grades are C+" << endl;
      }
      else if (grades >= 50 && grades < 60) {
            cout << "Your Grades are C" << endl;
      }
      else if(grades < 50) {
            cout << "Your Grades are F. Hope you do better next time <3" << endl;
      }
      else {
            cout << "Invalid Grade. Please enter a valid grade." << endl;
      }

      return 0;
      
}



