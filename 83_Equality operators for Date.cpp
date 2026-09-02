#include <iostream>
using namespace std;

class Date {
      int d,m,y;
public:
      Date(int day = 1, int month = 1, int year = 2000) : d(day), m(month), y(year) {}

      bool operator == (const Date& other) const {return d==other.d && m==other.m, y==other.y;}
      bool operator != (const Date& other) const {return !(*this == other);}
      void print() {cout << d << "/" << m << "/" << y;}
};

int main() {
      Date d1(10,2,2024), d2(10,3,2024), d3(1,1,2024);
      cout << (d1 == d2) << endl;
      cout << (d1 != d2) << endl;

      return 0;
}