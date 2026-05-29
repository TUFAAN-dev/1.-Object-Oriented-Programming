#include <iostream>
using namespace std;

int main(){
      int a, b, temp;

      cout << "Enter your numbers:" << endl;
      cin >> a >> b;

      // Before
      cout << "Before swapping, a=" << a << " and b=" << b << endl;
      
      // Swapping the values
      temp = a;
      a = b;
      b = temp;

      // After
      cout << "After swapping, a=" << a << " and b=" << b << endl;
      return 0;
}

