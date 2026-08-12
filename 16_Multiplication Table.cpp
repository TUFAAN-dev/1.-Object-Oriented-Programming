#include<iostream>
using namespace std;

int main() {
      int num;
      cout << "Enter N" << endl;
      cin >> num;

      for (int i = 1; i <= 10; i++) {
            cout << num << " " << i << "times " << num * i << endl;
      }
      
      return 0;
}
