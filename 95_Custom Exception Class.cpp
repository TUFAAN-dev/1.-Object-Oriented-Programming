#include<iostream>
#include<cmath>
#include<exception>
using namespace std;

class NegativeNumberException : public exception {
public:
      const char* what() const noexcept override {
            return "Negative number not allowed";
      }
};

double squareRoot(double x) {
      if (x < 0) throw NegativeNumberException();
      return sqrt(x);
}

int main() {
      try {
            cout << squareRoot(16) << endl;
            cout << squareRoot(-4) << endl;
      } catch (const NegativeNumberException& e) {
            cerr << "Error: " << e.what() << endl;
      }
      
      return 0;
}