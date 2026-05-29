#include <iostream>
using namespace std;

int main () {
      int arr[] = {1,2,3,4,5,6};
      int n = sizeof(arr) / sizeof(arr[0]);
      int key;
      cout << "Enter numbers to search: ";
      cin >> key;
      bool found = false;
      for (int i = 0; i < n; ++i) {
            if (arr[i] == key) {
                  cout << "Found at index : " << i << endl;
                  found = true;
                  break;
            }
      };
      if (!found) cout << "Not found" << endl;

      return 0;
}