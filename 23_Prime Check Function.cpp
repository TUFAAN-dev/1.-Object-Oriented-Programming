#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
      if (num <= 1) return false;
      for (int i = 2; i <= sqrt(num); ++i)
      if (num % i == 0) return 0;
      return true;
};

int main() {
      int num;
      cout << "Enter a number" << endl;
      cin >> num;

      cout << (isPrime(num) ? "Prime" : "Not Prime") << endl; 
}