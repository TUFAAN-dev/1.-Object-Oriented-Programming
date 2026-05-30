#include <iostream>
using namespace std;

int main() {
      int arr[] = {3,1,4,1,5,9};
      int n = sizeof(arr) / sizeof(arr[0]);
      int sum = 0;

      for (int* p = arr; p != arr + n; ++p) {
            sum += *p;
      }
      cout << "Sum = " << sum << endl;

      return 0;
}