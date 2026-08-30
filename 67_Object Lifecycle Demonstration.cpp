#include <iostream>
#include <string>
using namespace std;

class Test {
public:
      Test() {cout << "Constructed\n";}
      ~Test(){cout << "Destroyed\n";}
};

int main() {
      Test global;
      {
            Test local;
      }
      Test another;

      return 0;
}