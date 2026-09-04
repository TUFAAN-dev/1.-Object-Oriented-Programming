#include <iostream>
#include <string>
using namespace std;

class Student {
      string name;
      static int count;
public:
      Student(const string& n) : name(n) {++count;}
      ~Student() {--count;}

      static int getCount() {return count;}
};

int Student::count = 0;
int main() {
      Student s1("A"), s2("B");
      cout << "Students: " << Student::getCount() << endl;
      {
            Student s3("C");
            cout << "Inside block: " << Student::getCount() << endl;
      }
      cout << "After block: " << Student::getCount() << endl;
      return 0;
}