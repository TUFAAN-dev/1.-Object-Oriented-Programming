#include <iostream>
#include <string>
using namespace std;

class Time {
      int h, m, s;

      void normalize() {
            m += s / 60; s %= 60;
            h += m / 60; m %= 60;
            h %= 24;
      }
public:
      Time() : h(0), m(0), s(0) {}
      Time(int hh, int mm, int ss) : h(hh) , m(mm) , s(ss) {normalize();}
      Time(const Time& t) : h(t.h) , m(t.m) , s(t.s) {}
      void print24() {printf("%02d:%02d:%02d\n", h, m, s);}
};

int main () {
      Time t1(23,59,70);
      Time t2 = t1;
      t1.print24();
      t2.print24();

      return 0;
}