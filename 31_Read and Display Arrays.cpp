#include <iostream>
using namespace std;

int main() {
      int arr[5];
      cout << "Enter elements of the array: ";
      for (int i = 0; i <= 4; ++i) cin >> arr[i];
      
      cout << "Elements of array are: ";
      for (int i = 0; i < 5; i++) cout << arr[i] << " ";

      return 0;
}