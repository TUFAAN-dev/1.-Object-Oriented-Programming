#include<iostream>
using namespace std;

inline void increment(int* p) {(*p)++;}

int main() {
      int val = 10;
      increment(&val);
      cout << "After increment: " << val << endl;
      return 0;
}

