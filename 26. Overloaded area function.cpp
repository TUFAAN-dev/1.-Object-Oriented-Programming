#include <iostream>
#include <cmath>
using namespace std;

//Circle
double area(double radius) {
      return M_PI * radius * radius;
};

// Rectangle (int , int to differentiate from triangle)
int area(int length, int width) {
      return length * width;
};

// Triangle (double, double)
double area(double base, double height) {
      return 0.5 * base * height;
};

int main() {
      cout << "Circle r=3: " << area (3.0) << endl;
      cout << "Rectangle 4*5: " << area (4,5) << endl;
      cout << "Triangle b=4, h=5: " << area (4.0, 5.0) << endl;

      return 0;
}