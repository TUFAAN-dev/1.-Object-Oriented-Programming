#include<iostream>
#include<cmath>
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
      double area() const override {return 3.14159 * r * r;}
};

int main() {
      Shape* shapes[3];
      shapes[0] = new Rectangle(2,3);
      shapes[1] = new Circle(5);
      shapes[2] = new Rectangle(1,1);

      double total = 0;
      for (int i=0; i<3; ++i) total += shapes[i]->area();
      cout << "Total area: " << total << endl;
      for (int i=0; i<3; ++i) delete shapes[i];

      return 0;
}