#include<iostream>
using namespace std;

class Rectangle {
      private:
            double length, width;
      public:
            void setDimensions(double l, double w) {
                  length = l;
                  width  = w;
            }

            double area() {return length * width;}
            double perimeter() {return 2 * (length + width);}
};

int main() {
      Rectangle Rect;
      Rect.setDimensions(5.9, 3.0);
      cout << "Area : " << Rect.area() << ", Perimeter : " << Rect.perimeter() << endl;

      return 0;
}