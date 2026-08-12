// STATEMENT
/*
Allocate an R*C Matrix using "new", fill with
values, prints, and deallocate.
*/

#include<iostream>
using namespace std;

int main() {
      int rows = 2, cols = 3;
      int** mat = new int*[rows];
      
      for (int i = 0; i < rows; ++i) {
            mat[i] = new int[cols];
      }
      int val = 1;
      for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < rows; ++j) {
                  mat[i][j] = val++;
            }
      }
      for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                  cout << mat[i][j] << " ";
            }
            cout << endl;
      }
      for (int i = 0; i < rows; ++i) delete[] mat[i];
      delete[] mat;
      return 0;
}