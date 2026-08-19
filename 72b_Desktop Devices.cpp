#include <iostream>
#include <string>
using namespace std;

class System {
      string User_Name;
      string Model;
      float Temp;
public:
      System(const string& UN, string M, float T) : User_Name(UN) , Model(M), Temp(T) {}
      virtual void display() const {
            cout << "Model: " << Model << ", User_Name" << User_Name << ", Temperature" << Temp << endl;
      };
      virtual ~System() {};
};

class Desktop : public System {

};

class Laptop : public System {

};

class Mobile : public System {

};

class Watch : public System {

};

int main() {

}