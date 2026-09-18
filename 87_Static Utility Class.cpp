#include <iostream>
using namespace std;

class MathUtils {
public:
      static int max(int a, int b) {return a>b ? a:b;}
      static int min(int a, int b) {return a<b ? a:b;}
      static long long factorial(int n) {
            long long f = 1;
            for (int i=2; i<=n; ++i) f *= i;
            return f;
      }
};

int main() {
      cout << MathUtils::max(5,9) << " " << MathUtils::factorial(5) << endl;
      return 0;
}