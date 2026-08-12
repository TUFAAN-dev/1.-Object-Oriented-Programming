#include <iostream>
using namespace std;

int main() {
      int A, B, C, Max;

      cout << "Enter three numbers:" << endl;
      cin >> A >> B >> C;

      // Decision
      Max = ( A > B ) ? ( ( A > C ) ? A : C ) : ( ( B > C ) ? B : C ); 

      cout << Max << " is the greatest number." << endl;

      return 0;
}