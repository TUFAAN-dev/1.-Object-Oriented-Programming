#include <iostream>
#include <string>
using namespace std;
class Person {
      string name;
      int age;
public:
      Person(const string& n, int a) : name(n), age(a) {}
      virtual void display() const {
            cout << name << ", " << age << "years old\n" << endl;
      }
      virtual ~Person() {}
};

class Student : public Person {
protected:
      int Roll_no;
      double marks;
public:
      Student(const string& n, int a, int r, double m) : Person(n,a), Roll_no(r), marks(m) {}
      void display() const override {
            Person::display();
            cout << "Roll No: " << Roll_no << ", Marks: " << marks << endl;
      }
};

class GraduateStudent : public Student {
      string thesis;
public:
      GraduateStudent(const string& n, int a, int r, double m, const string& t) : Student(n,a,r,m), thesis(t) {}
      void display() const override {
            Person::display();
            cout << "Thesis" << thesis << endl;
      }
};

int main() {
      GraduateStudent gs("Danish_Ali" , 22, 37, 88.5, "Aurora_OS");
      gs.display();
      
      return 0;
}


