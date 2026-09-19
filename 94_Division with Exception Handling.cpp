#include<iostream>
#include<stdexcept>
using namespace std;

double divide(double a, double b) {
      if (b == 0) 
            throw runtime_error("Division bt zero");
            return a/b;
}

int main() {
      try {
            cout << divide(10,2) << endl;
            cout << divide(5,0) << endl;
      } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
      }

      return 0;
}