// STATEMENT
/*
 Create an array of three integer pointers, each pointing to a 
 dynamically allocated integer, assign values, prints and clean-up
*/

#include<iostream>
using namespace std;

int main(){
      int* arr[3];

      for (int i = 0; i < 3; ++i) {
            arr[i] = new int;
            *arr[i] = (i + 1) * 100;
      }
      for (int i = 0; i < 3; ++i) {
            cout << *arr[i] << " ";
      }
      cout << endl;

      for (int i = 0; i < 3; ++i) delete arr[i];

      return 0;
}



