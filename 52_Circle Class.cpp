// STATEMENT
/*
Class Circle with private radius. Public methods to set radius, get area, and circumference
*/

#include<iostream>
#include<cmath>
using namespace std;

class Circle {
      double radius;
public:
      void setRadius(double r) {radius = r;}
      double area() {return M_PI * radius * radius;}
      double circumference() {return 2 * M_PI * radius;}
};

int main() {
      Circle c;
      c.setRadius(4.0);
      cout << "Area: " << c.area() << ", Circumference: " << c.circumference() << endl;
      return 0;
}