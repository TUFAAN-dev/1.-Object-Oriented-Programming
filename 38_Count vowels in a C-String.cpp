#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
     char str[100];
	cout << "Enter a string: ";
	cin.getline(str,100);

	int vowels = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
	char ch = tolower(str[i]);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ++ vowels;
	}
 	cout << "Vowels: " << vowels << endl;
	return 0;
}
