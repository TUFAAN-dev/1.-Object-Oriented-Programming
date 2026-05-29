#include <iostream>
using namespace std;

int main() {
      double arr[] = {1.2, 1.3, 1.3, 3.3, 4.3, 4.6};

      double sum = 0;                                 // Sum Function
      for (int i = 0; i < 10; ++i) sum += arr[i];     

      int size = sizeof(arr) / sizeof(arr[0]);        // Average Function
      double Average = sum/size; 

      cout << "The Sum is = " << sum << endl;
      cout << "The Average is = " << Average << endl;
}