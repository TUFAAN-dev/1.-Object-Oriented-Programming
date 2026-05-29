#include <iostream>
using namespace std;

int main() {
      int arr[] = {12, 14, 3, 17, 20, 1, 11};
      int n = sizeof(arr) / sizeof(arr[0]);
      int min = arr[0];
      int max = arr[0];

      for (int i = 1; i < n; ++i) {
            if (arr[i] < min) min = arr[i];
            if (arr[i] > max) max = arr[i];
      };

      cout << "Min = " << min << " , Max = " << max << endl;
      return 0;
}
