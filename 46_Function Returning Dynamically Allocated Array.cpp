#include <iostream>
using namespace std;

int* squares(int n) {
      int* res = new int[n];
      for (int i = 0; i < n; ++i) {
            res[i] = (i + 1) * (i + 1);
      }
};

int main() {
      int n = 5;
      int* sq = squares(n);
      for (int i = 0; i < n; ++i) {
            cout << endl;
      }
      delete[] sq;
      return 0;
}


