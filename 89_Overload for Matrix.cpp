#include <iostream>
using namespace std;

class Matrix22 {
      int m[2][2];
public:
      Matrix22(int a=0, int b=0, int c=0, int d=0) { 
            m[0][0]=a;
            m[0][1]=b;
            m[1][0]=c;
            m[1][1]=d;
      }

      Matrix22 operator*(const Matrix22& other) const {
            Matrix22 res;
            for (int i=0;i<2;++i)
                  for (int j=0;j<2;++j) {
                        res.m[i][j] = 0;
                        for (int k=0;k<2;++k)
                              res.m[i][j] += m[i][j] * other.m[k][j];
                  }
            return res;
      }

      void print() {
            for (int i=0;i<2;++i) {
                  for (int j=0;j<2;++j) cout << m[i][j] << " ";
                  cout << endl;
            }
      }
};

int main() {
      Matrix22 A(1,2,3,4), B(5,6,7,8);
      Matrix22 C = A * B;
      C.print();
      return 0;
}