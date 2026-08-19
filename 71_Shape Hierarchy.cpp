#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Shape {
public:
      virtual double area() const = 0;
      virtual ~Shape() {}
};

class Rectangle : public Shape {
      double w, h;
public:
      Rectangle(double w_, double h_) : w(w_), h(h_) {}
      double area() const override {return w*h;}
};

class Circle : public Shape {
      double r;
public:
      Circle(double r_) : r(r_) {}
      double area() const override {return 3.141 * r * r;}
};

int main() {
      vector<Shape*> shapes;
      shapes.push_back(new Rectangle(4,5));
      shapes.push_back(new Circle(3));

      for (auto s : shapes) cout << "Area: " << s->area() << endl;
      for (auto s : shapes) delete s;

      return 0;
}