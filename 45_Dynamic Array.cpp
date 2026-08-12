#include <iostream>
using namespace std;

int main() {
      int n;
      cout << "Entr size: ";
      cin >> n;

      double *arr = new double[n];
      cout << "Enter " << n << " numbers : ";

      for (int i = 0; i < n; ++i) cin >> arr[i];
      double sum = 0;
      for (int i = 0; i < n; ++i) sum += arr[i];
      cout << "Sum = " << sum << endl;

      delete[] arr;
      return 0;
}