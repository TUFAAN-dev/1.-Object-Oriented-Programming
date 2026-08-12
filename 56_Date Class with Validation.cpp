#include <iostream>
using namespace std;

class Date {
      int day, month, year;
      bool isLeap(int y) {return (y%4 == 0 && y%100 != 0) || (y%400 == 0);}
public:
    void setDate(int d, int m, int y) {day = d; month = m; year = y;}
    bool isValid() {
        if (month < 1 || month > 12 || day < 1) return false;
        int daysInMonth[] = {31, 28 + isLeap(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return day <= daysInMonth[month - 1];
    }
    void print() { cout << day << "/" << month << "/" << year << endl;}

};

int main() {
    Date d;
    d.setDate(29, 2, 2029);
    d.print();
    cout << (d.isValid() ? "Valid" : "InValid") << endl;

    return 0;
}