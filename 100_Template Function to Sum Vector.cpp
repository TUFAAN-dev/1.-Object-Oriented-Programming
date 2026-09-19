#include<iostream>
#include<vector>
using namespace std;

template <typename T>
T sumVector(const vector<T>& vec) {
      t total = 0;
      for (const auto& v : vec) total += v;
      return total;
}

int main() {
      vector<int> vi = {1,2,3,4,5};
      vector<double> vd = {1.1,2.2,3.3};
      cout << sumVector(vi) << " " << sumVector(vd) << endl;
      return 0;
}