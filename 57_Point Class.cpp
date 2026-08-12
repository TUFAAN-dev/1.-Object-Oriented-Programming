#include<iostream>
#include<cmath>
using namespace std;

class Point {
    double x , y;
public:
    void setPoint(double xVal, double yVal) {x = xVal; y = yVal;}
    double distanceFromOrigin() {return sqrt(x*x + y*y);}
};

int main() {
    Point p;
    p.setPoint(4,9);
    cout << "Distance from Origin: " << p.distanceFromOrigin() << endl;

    return 0;
}