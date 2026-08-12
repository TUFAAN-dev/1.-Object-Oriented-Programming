// STATEMENT
/*
BankAccount class with private balance.
Public methods: "deposit", "withdraw" (check overdraft), and "displayBalance".
*/

#include <iostream>
using namespace std;

class BankAccount {
      double balance;
public:
      BankAccount() : balance(0) {}

      void deposit (double amount) {balance += amount;}

      void withdraw (double amount) {
            if (amount <= balance) balance -= amount;
            else cout << "Insufficient balance!" << endl;
      };

      void display() {cout << "Balance: " << balance << endl;}
};

int main() {
      BankAccount acc;
      acc.deposit(1000);
      acc.withdraw(300);
      acc.withdraw(800);
      acc.display();
      return 0;
}