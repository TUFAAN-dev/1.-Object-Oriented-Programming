#include<iostream>
#include<cmath>
using namespace std;

int main() {
      int n;
      cout << "Enter N:" << endl;
      cin >> n;

      bool isPrime = true;
      if (n <= 1) isPrime = false;
      for (int i = 2; i <= sqrt(n) ; ++i) {
            if (n % i == 0) {
                  isPrime = false;
                  break;
            }
      }
      cout << (isPrime ? "Prime" : "Not Prime") << endl;

      return 0;      
}

/* Dry-Run
line 10.  A boolean variable 'isPrime' is created. Then, we ourself supposed that the result is already true, 
          which can only be true or false, which justifies taking bool type.
           
     11.  Prime numbers are always positive, so no need to check negative side, so we cut-it off.
     
     12.  a) Why i = 2? Because if it is assumed equal to 1, then the result will always be wrong
             for "(n % i == 0)" at line 13.
          b) 
          
     13.  a) Let's say n is 100. And if we take MOD of it by i, which is equal to 10 in this case
             "sqrt(100) == 10", if it is equal to 0, it means it is not a prime number. Then... line 14(a)
          b) But if MOD is not equal to 0, Then... line 14(b)
             
     14.  a) In-Validate isPrime and make it false.
          b) Validate isPrime and keep it true.
     
     15.  And break the loop.

     18.  A ternary operator to set value of isPrime according to the result of "line 14".

*/