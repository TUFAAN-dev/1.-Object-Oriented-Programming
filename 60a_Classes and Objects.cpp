#include<iostream>
#include<string>
using namespace std;

class Student {
private:
      int Roll_no;
      string Name;
      float Marks;
public:
      void setData(int R, string N, float M) {
            Roll_no = R;
            Name = N;
            Marks = M; 
      }

      void display() {
            cout << "Roll No: " << Roll_no << endl;
            cout << "Name:    " << Name << endl;
            cout << "Marks:   " << Marks << endl;
      }

      char getGrades() {
            if (Marks == 100 || Marks >= 80) return 'A';
            else if (Marks >= 60) return 'B';
            else if (Marks >= 40) return 'C';
            else return 'F';
      }
};

int main() {
      Student s1;
      Student s2;
      Student* s3 = new Student;

      s1.setData(101, "Danish", 75);
      s1.display();
      cout << "Grades: " << s1.getGrades() << endl;

      s2.setData(102, "Alishba", 75);
      s2.display();
      cout << "Grades: " << s2.getGrades() << endl;

      s3->setData(103, "Ali", 75);
      s3->display();
      cout << "Grades: " << s3->getGrades() << endl;
      delete s3; // Free the dynamically allocated memory

      return 0; 
}