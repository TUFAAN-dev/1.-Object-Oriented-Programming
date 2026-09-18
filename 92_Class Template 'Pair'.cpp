#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
      T1 first;
      T2 second;
public:
      Pair(T1 a, T2 b) : first(a), second(b) {}
      void display() {cout << first << " and " << endl;}
};

int main() {
      Pair<int, double> p1(5,3.14);
      Pair<string, char> p2("Hello", 'A');
      p1.display();
      p2.display();
      return 0; 
}