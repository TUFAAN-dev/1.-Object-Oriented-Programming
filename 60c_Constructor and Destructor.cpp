#include<iostream>
#include<string>
using namespace std;

class Constructors {
private:
      int    Acc_ID;
      string Acc_Holder;
      double Acc_Balance;

public:
      Constructors() {
            Acc_ID = 001;
            Acc_Holder = "Default Holder";
            Acc_Balance = 0.0;
            cout << "Default Constructor was called" << endl;
      };

      Constructors(int ID, string Holder, double Balance) {
            Acc_ID = ID;
            Acc_Holder = Holder;
            Acc_Balance = Balance;
            cout << "Parameterized Constructor was called" << endl;
      };

      Constructors(const Constructors& obj) {
            Acc_ID = obj.Acc_ID;
            Acc_Holder = obj.Acc_Holder;
            Acc_Balance = obj.Acc_Balance;
            cout << "Copy Constructor was called" << endl;
      };

      Constructors(Constructors&& obj) noexcept {
            Acc_ID = obj.Acc_ID = 0;
            Acc_Holder = obj.Acc_Holder = "";
            Acc_Balance = obj.Acc_Balance = 0.0;
            cout << "Move Constructor was called" << endl;
      };

      ~Constructors() {
            cout << "Destructor was called" << endl;
      }

      void display() {
            cout << "Account ID: " << Acc_ID << endl;
            cout << "Account Holder: " << Acc_Holder << endl;
            cout << "Account Balance: " << Acc_Balance << endl;
      }
}; 

int main() {
      Constructors obj1;
      Constructors obj2(002, "Alishba", 1000.0);
      Constructors obj3(003, "Danish", 1000.0);
      Constructors obj4(004, "Hamza", 3000.0);
      
      obj1.display();
      obj2.display();
      obj3.display();
      obj4.display();

      return 0;
}