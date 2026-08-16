#include <iostream>
#include <string>
using namespace std;

class Rectangle {
      double Length, Width;
public:
      Rectangle() : Length(0), Width(0) {cout << "Default Constructed\n";}
      Rectangle(double l, double w) : Length(l), Width(w) {cout << "Parameterized Constructor\n";}
      ~Rectangle() {cout << "Destroyed\n";}
      double area() {return Length * Width;}
};

int main () {
      Rectangle r1;
      Rectangle r2(5,2);
      cout << "Area: " << r2.area() << endl;

      return 0;
}