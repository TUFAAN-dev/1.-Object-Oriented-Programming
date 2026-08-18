#include <iostream>
#include <cstring>
using namespace std;

class MyString {
      char* str;
public:
      MyString(const char* s = " ") {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
      }

      MyString(const MyString& other) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
      }

      ~MyString() { delete[] str;}
      const char* c_str() const {return str;}
};

int main () {
      MyString s1("Hello");
      MyString s2 = s1;

      cout << s1.c_str() << " " << s2.c_str() << endl;

      return 0;
}