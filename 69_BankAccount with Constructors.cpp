#include <iostream>
#include <string>
using namespace std;

class BankAccount {
      string number, holder;
      double balance;
public:
      BankAccount(const string& num, const string& name, double bala) : number(num) , holder (name), balance(bala) {}
      BankAccount(const BankAccount& other) : number(other.number), holder(other.holder),  balance(other.balance) {}
      ~BankAccount() {cout << "Account" << number << "closed.\n";}

      void display() {cout << holder << " " << number << "Balance: " << balance << endl;}

};

int main() {
      BankAccount a1("A001", "Aman", 50000);
      BankAccount a2 = a1;
      a1.display();
      a2.display();

      return 0;
}