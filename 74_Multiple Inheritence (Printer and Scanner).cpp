#include <iostream>
using namespace std;

class Printer {
public:
      void print(const string& doc) {
            cout << "Printing: " << doc << endl;
      }
};

class Scanner {
public:
      void scan(const string& doc) {
            cout << "Scanning: " << doc << endl;
      }
};

class AllinOne : public Printer, public Scanner {
public:
      void copy(const string& doc) {
            scan(doc);
            print(doc);
      }
};

int main() {
      AllinOne devices;
      devices.copy("report.pdf");

      return 0;
}