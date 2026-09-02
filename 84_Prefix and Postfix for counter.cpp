#include <istream>
using namespace std;

class Counter {
      int value;
public:
      Counter(int v=0) : value(v) {}
      Counter& operator++() {
            ++value;
            return *this;
      };
      Counter operator++(int) {
            Counter temp = *this;
            value++;
            return temp;
      };
      int getValue() const {return value;}
};

int main() {
      Counter c(5);
      cout << (++c).getValue() << endl;
      cout << (++c).getValue() << endl;
      cout << c.getValue() << endl;

      return 0;
}