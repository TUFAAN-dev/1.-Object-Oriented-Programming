#include<iostream>
#include<string>
using namespace std;

int main () {
	string s1, s2;
	
	cout << "Enter first word: ";
	cin >> s1;
	cout << "Enter second word: ";
	cin >> s2;

	string full = s1 + " " + s2;
	cout << "Combined: " << full << endl;

	return 0;
}
