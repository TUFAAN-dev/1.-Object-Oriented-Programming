#include<iostream>
using namespace std;

int main() {
      int num, sum = 0;
      cout << "Enter an integer: " << endl;
      cin >> num;

      int temp = num;

      while (temp != 0) {     // Is temp equal to 0 (let temp is equal to 12345)? No...
            sum += temp % 10; // Then take last digit of temp (temp MOD 10 = 5), and store it in sum (0+5).
            temp /= 10;       // Drop the last digit of temp (12345/10 = 1234, which seems like last digit is dropped)
      }                       // Go back to start, and do it again. 1st loop(0+5) -> 2nd(5+4) -> 3rd(5+4+3) ..... so on

      cout << "Sum of digits =" << sum << endl;
      
      return 0;
}