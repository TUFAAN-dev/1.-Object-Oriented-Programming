#include <iostream>
#include <cstring>            // Know the difference between string and cstring headerfile
using namespace std;

class Student {
      char* name;
      double marks;
public:
      Student(const char* n, double m) : marks(m) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
      }

      Student(const Student& other) : marks (other.marks) {
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
      }

      ~Student() { delete[] name;}

      void display() {cout << name << "Marks: " << marks << endl;}
};

int main () {
      Student s1("John" , 85);
      Student s2 = s1;
      s1.display();
      s2.display();

      return 0;
};