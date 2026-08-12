#include <iostream>
#include <string>

using namespace std;

int main() {
      int     obt_marks, total_marks;
      float   OOP, MVC, DLD, DS;
      float   percentage;
      string  grades;
      
      // OOP
      cout << "Enter your OOP Marks:" << endl;
      cin >> obt_marks;
      cout << "Enter total Marks:" << endl;
      cin >> total_marks;
      percentage = (obt_marks * 100) / total_marks;
      cout << "Your OOP Percentage is:" << percentage << "%" << endl;
      OOP = percentage;
      if (OOP == 100 && OOP >= 90) {
            cout << "Your Grade is A+" << endl;
      }
      else if (OOP < 90 && OOP >= 80) {
            cout << "Your Grade is A" << endl;
      }
      else if (OOP < 80 && OOP >= 70) {
            cout << "Your Grade is B+" << endl;
      }
      else if (OOP < 70 && OOP >= 60) {
            cout << "Your Grade is B" << endl;
      }
      else if (OOP < 60 && OOP >= 50) {
            cout << "Your Grade is C+" << endl;
      }
      else if (OOP < 50 && OOP >= 40) {
            cout << "Your Grade is C" << endl;
      }
      else if (OOP <= 40) {
            cout << "Your Grade is F. Hope you do better next time <3" << endl;
      }

      // DLD
      cout << "Enter your DLD Marks:" << endl;
      cin >> obt_marks;
      cout << "Enter total Marks:" << endl;
      cin >> total_marks;
      percentage = (obt_marks * 100) / total_marks;
      cout << "Your DLD Percentage is:" << percentage << "%" << endl;
      DLD = percentage;
      if (DLD == 100 && DLD >= 90) {
            cout << "Your Grade is A+" << endl;
      }
      else if (DLD < 90 && DLD >= 80) {
            cout << "Your Grade is A" << endl;
      }
      else if (DLD < 80 && DLD >= 70) {
            cout << "Your Grade is B+" << endl;
      }
      else if (DLD < 70 && DLD >= 60) {
            cout << "Your Grade is B" << endl;
      }
      else if (DLD < 60 && DLD >= 50) {
            cout << "Your Grade is C+" << endl;
      }
      else if (DLD < 50 && DLD >= 40) {
            cout << "Your Grade is C" << endl;
      }
      else if (DLD <= 40) {
            cout << "Your Grade is F. Hope you do better next time <3" << endl;
      }

      // MVC
      cout << "Enter your MVC Marks:" << endl;
      cin >> obt_marks;
      cout << "Enter total Marks:" << endl;
      cin >> total_marks;
      percentage = (obt_marks * 100) / total_marks;
      cout << "Your MVC Percentage is:" << percentage << "%" << endl;
      MVC = percentage;
      if (MVC == 100 && MVC >= 90) {
            cout << "Your Grade is A+" << endl;
      }
      else if (MVC < 90 && MVC >= 80) {
            cout << "Your Grade is A" << endl;
      }
      else if (MVC < 80 && MVC >= 70) {
            cout << "Your Grade is B+" << endl;
      }
      else if (MVC < 70 && MVC >= 60) {
            cout << "Your Grade is B" << endl;
      }
      else if (MVC < 60 && MVC >= 50) {
            cout << "Your Grade is C+" << endl;
      }
      else if (MVC < 50 && MVC >= 40) {
            cout << "Your Grade is C" << endl;
      }
      else if (MVC <= 40) {
            cout << "Your Grade is F. Hope you do better next time <3" << endl;
      }


      // DS
      cout << "Enter your DS Marks:" << endl;
      cin >> obt_marks;
      cout << "Enter total Marks:" << endl;
      cin >> total_marks;
      percentage = (obt_marks * 100) / total_marks;
      cout << "Your DS Percentage is:" << percentage << "%" << endl;
      DS = percentage;
      if (DS == 100 && DS >= 90) {
            cout << "Your Grade is A+" << endl;
      }
      else if (DS < 90 && DS >= 80) {
            cout << "Your Grade is A" << endl;
      }
      else if (DS < 80 && DS >= 70) {
            cout << "Your Grade is B+" << endl;
      }
      else if (DS < 70 && DS >= 60) {
            cout << "Your Grade is B" << endl;
      }
      else if (DS < 60 && DS >= 50) {
            cout << "Your Grade is C+" << endl;
      }
      else if (DS < 50 && DS >= 40) {
            cout << "Your Grade is C" << endl;
      }
      else if (DS <= 40) {
            cout << "Your Grade is F. Hope you do better next time <3" << endl;
      }


      // Do same for other subjects

      // Calculating Grades
      percentage = (OOP + DLD + MVC + DS) / 4;
      
      if (percentage == 100 && percentage >= 90) {
            grades = 'A+';
      }
      else if (percentage < 90 && percentage >= 80) {
            grades = 'A';
      }
      else if (percentage < 80 && percentage >= 70) {
            grades = 'B+';
      }
      else if (percentage < 70 && percentage >= 60) {
            grades = 'B';
      }
      else if (percentage < 60 && percentage >= 50) {
            grades = 'C+';
      }
      else if (percentage < 50 && percentage >= 40) {
            grades = 'C';
      }
      else if (percentage <= 40) {
            grades = 'F';
      }
      cout << "Your Overall Course Grades is:" << grades << endl;

}

