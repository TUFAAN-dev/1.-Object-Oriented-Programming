//STATEMENT
/*
Implement a function "strcpy(char *dest, const char* src)"
that copies a C-String using Pointers
*/

#include<iostream>
using namespace std;

void my_Strcpy(char* dest, const char* src) {
      while (*src) {
            *dest = * src;
            ++dest;
            ++src;

      }
      *dest = '\0';
}

int main() {
      const char* source = "Hello";
      char destination[20]; 
      my_Strcpy (destination, source);
      cout << "Copied string: " << destination << endl;
      return 0;
}
