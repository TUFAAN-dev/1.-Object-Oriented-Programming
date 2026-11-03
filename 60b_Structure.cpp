#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
      string name;
      int age;
      float gpa;
};

class StudentManager {
private:
    std::vector<Student> students;
public:
    void addStudent(const string& name, int age, float gpa) {
        Student student;
        student.name = name;
        student.age = age;
        student.gpa = gpa;
        students.push_back(student);
    }

    void displayStudents() const {
        for (const auto& student : students) {
            cout << "Name: " << student.name << ", Age: " << student.age << ", GPA: " << student.gpa << endl;
        }
    };
};

int main() {
      StudentManager manager;
      manager.addStudent("Alishba", 20, 3.8);
      manager.addStudent("Danish", 22, 3.5);
      
      cout << "Student List:" << endl;
      manager.displayStudents();
      
      return 0;
}