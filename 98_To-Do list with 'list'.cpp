#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
      list<string> tasks;
      tasks.push_back("Buy Milk");
      tasks.push_back("Write Code");
      tasks.push_back("Read book");
      tasks.remove("Write code");
      cout << "To-Do: \n";
      for (const auto& t : tasks) cout << "- " << t << endl;
      return 0;
}