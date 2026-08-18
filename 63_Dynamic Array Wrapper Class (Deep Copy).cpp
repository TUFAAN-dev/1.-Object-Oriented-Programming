#include <iostream>
using namespace std;

class Array {
      int* data;
      int size;
public:
      Array(int s) : size(s) {data = new int[size]();}
      Array(const Array& other) : size(other.size) {
            data = new int[size];
            for (int i = 0; i < size; ++i) data[i] = other.data[i];
      }

      ~Array() {delete[] data;}
      int& at(int idx) {return data[idx];}
      void print() {for (int i=0; i<size; ++i) cout << data[i] << " ";
      cout << endl;}
};

int main() {
      Array a(5);
      for (int i=0; i<5; i++) a.at(i)=i*10;
      Array b = a;
      a.print();
      b.print();

      return 0;
}