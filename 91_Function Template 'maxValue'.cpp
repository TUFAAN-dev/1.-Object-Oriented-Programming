#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a,T b) {return (a>b) ? a:b;}

int main() {
      cout << maxValue(3,7) << endl;
      cout << maxValue(3.14, 2.71) << endl;
      cout << maxValue('z', 'a') << endl;
      return 0;
}