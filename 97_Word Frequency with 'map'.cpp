#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;

int main() {
      map<string, int> freq;
      string line, word;
      getline(cin, line);
      istringstream iss(line);
      while (iss >> word) ++freq[word];
      for (const auto& p : freq)
            cout << p.first << ": " << p.second << endl;
      return 0;
}