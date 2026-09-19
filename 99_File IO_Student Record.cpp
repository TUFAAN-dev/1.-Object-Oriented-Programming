#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student {
      string name;
      int marks;
};

int main() {
      // Write
      ofstream out("Student.text");
      out << "Alice 85\nBob 90\nCharlie 78\n";
      out.close();

      // Read
      ifstream in("student.txt");
      string line;
      while (getline(in, line))
            cout << line << endl;
      in.close();
      return 0;
}