#include <iostream>
#include <string>
using namespace std;

class Car {
      string model;
      int year;
      double speed;

public:
      Car (const string& m = "", int y = 0) : model(m), year(y), speed(0) {};

      void accelerate(double inc) {speed += inc;}
      void brake(double dec) {speed = (speed - dec > 0) ? speed - dec : 0;}
      void display() {cout << model << " (" << year << ") speed " << speed << "KM/h" << endl;} 

};

int main () {
      Car fleet[3] = {Car("Tesla", 2023) , Car("BMW", 2022), Car("Yamaha", 2021)};
      fleet[0].accelerate(60);
      fleet[1].accelerate(80);
      fleet[2].accelerate(100);
      fleet[0].brake(20);

      for (int i = 0; i < 3; i++) fleet[i].display();
      return 0;
}