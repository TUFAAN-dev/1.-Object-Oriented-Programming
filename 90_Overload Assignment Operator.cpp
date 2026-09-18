#include <iostream>
using namespace std;

class Array {
      int* data;
      int size;
public:
      Array(int s) : size(s) {data = new int[size]();}
      Array(const Array& other) : size(other.size) {
            data = new int[size];
            for(int i=0;i<size;++i) data[i] = other.data[i];
      }

      ~Array() {delete[] data;}
      Array& operator=(const Array& other) {
            if (this == &other) return *this;
            delete[] data;
            size = other.size;
            for(int i=0;i<size;++i) data[i] = other.data[i];
            return *this;
      }

      int& operator[](int& idx) {return data[idx];}

      void print() {for(int i=0;i<size;++i) cout << data[i] << " "; cout << endl;}
};

int main() {
      Array a(3);
      a[0]=10; a[1]=20; a[2]=30;
      Array b(2);
      b = a;
      b.print();
      return 0;
}