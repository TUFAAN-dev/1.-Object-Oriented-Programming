#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
	string word;
	cout << "Enter a word: ";
	cin >> word;
	string rev = word;
	reverse(rev.begin(), rev.end());

	if (word == rev) {
		cout << "Palindrome" << endl;
      }
	else
	      cout << "Not a Palindrome" << endl;

	return 0;
}
