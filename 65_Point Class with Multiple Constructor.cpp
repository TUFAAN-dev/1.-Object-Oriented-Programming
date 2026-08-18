#include <iostream>
#include <cmath>
using namespace std;

class Point {
      double x,y;
public:
      Point() : x(0), y(0) {}
      Point(double xVal, double yVal) : x(xVal) , y(yVal) {}
      Point(const Point& p) : x(p.x), y(p.y) {}

      double distance(const Point& other) {
            return sqrt((x-other.x) * (x-other.x) + (y-other.y) * (y-other.y));
      }

      void print() {cout << "(" << x << "," << y << ")";}
};

int main() {
      Point p1(3,4) , p2(0,0);
      cout << "Distance: " << p1.distance(p2) << endl;
      Point p3 = p1;
      p3.print();

      return 0;
}