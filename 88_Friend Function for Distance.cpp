#include <iostream>
#include <cmath>
using namespace std;

class Point {
      double x,y;
public:
      Point(double a, double b) : x(a), y(b) {}
      friend double distance(const Point& p1, const Point& p2);
};

double distance(const Point& p1, const Point& p2) {
      double dx = p1.x - p2.x, dy = p1.y - p2.y;
      return sqrt(dx*dx + dy*dy);
}

int main() {
      Point p1(0,0), p2(3,4);
      cout << "Distance: " << distance(p1,p2) << endl;
      return 0;
}