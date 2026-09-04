#include <iostream>
using namespace std;

class IntArray {
      int* data;
      int size;
public:
      IntArray(int s) : size(s) {data = new int[size]();}
      ~IntArray() {delete[] data;}
      int& operator[](int idx) {return data[idx];}
      int operator[](int idx) const {return data[idx];}
};

int main() {
      IntArray arr(5);
      for (int i=0; i<5; ++i) arr[i] = i*10;
      for (int i=0; i<5; ++i) cout << arr[i] << " ";
      cout << endl;

      return 0;
}