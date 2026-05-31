// STATEMENT
/*
Student with private name, roll number, marks. 
Public methods to input data, display, and return grade.
*/

#include<iostream>
#include<string>
using namespace std;

class Student {
      string name;
      int roll;
      double marks;
public:
      void input() {
            cout << "Name: "; cin >> name;
            cout << "Roll no.: "; cin >> roll;
            cout << "Marks: "; cin >> marks;
      };
      void display() {
            cout << name << " (Roll " << roll << ") , Marks: " << marks << endl;
      };
      char grade() {
            if (marks >= 90) return 'A';
            else if (marks >= 80) return 'B';
            else if (marks >= 70) return 'C';
            else if (marks >= 60) return 'D';
            else return 'F';
      }

};

int main() {
      Student s;
      s.input();
      s.display();
      cout << "Grade: " << s.grade() << endl;
}