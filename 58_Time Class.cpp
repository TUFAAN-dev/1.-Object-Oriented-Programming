#include<iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
    void normalize() {
        minutes += seconds / 60; seconds %= 60;
        hours   += minutes / 60; minutes %= 60;
        hours   %= 24;
    }
public:
    void setTime(int h, int m, int s) {hours = h; minutes = m; seconds = s; normalize();}

    void display12Hours() {
        int h12 = (hours % 12 == 0) ? 12 : hours % 12;
        string ampm = (hours < 12) ? "AM" : "PM";
        cout << h12 << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << " " << ampm << endl;
    }

    Time add(const Time& t) {
        Time result;
        result.setTime(hours + t.hours, minutes + t.minutes, seconds + t.seconds);
        return result;
    }
};

int main() {
    Time t1, t2;
    t1.setTime(10,45,30);
    t2.setTime(2,20,40);

    Time sum = t1.add(t2);
    sum.display12Hours();

    return 0;
}

