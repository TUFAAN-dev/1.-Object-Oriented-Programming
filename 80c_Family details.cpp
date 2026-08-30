#include <iostream>
using namespace std;

// Base Class
class Human {
protected:
      int Number_of_Gene;
      string Cell_Type;
      string Kingdom;
      string Species;
public:
      Human() : Number_of_Gene(0), Cell_Type(""), Kingdom(""), Species("") {};
      Human(int g, const string& c, const string& k, const string& s) : Number_of_Gene(g), Cell_Type(c), Kingdom(k), Species(s) {}

      void displayHuman() {
            cout << "Kingdom: " << Kingdom << endl;
            cout << "Cell: " << Cell_Type << endl;
            cout << "Number_of_Gene: " << Number_of_Gene << endl;
            cout << "Species: " << Species << endl;
      }
};

// Derived Class (Of Parents)
class Male : virtual public Human {
public:
      string Name;
      string Gender;
      string Profession;
      int    Age;
      float  Salary;

      Male(const string& n, const string& p, int age, float s) : Name(n), Gender("Male"), Profession(p), Salary(s) {}

      void displayFather() {
            cout << "Name: " << Name << endl;
            cout << "Gender: " << Gender << endl;
            cout << "Profession: " << Profession << endl;
            cout << "Age: " << Age << endl;
            cout << "Salary: " << Salary << endl;
      }
};

class Female : virtual public Human {
public:
      string Name;
      string Gender;
      string Profession;
      int    Age;
      float  Salary;

      Female(const string& n, const string& p, int age, float s) : Name(n), Gender("Female"), Profession(p), Salary(s) {}

      void displayMother() {
            cout << "Name: " << Name << endl;
            cout << "Gender: " << Gender << endl;
            cout << "Profession: " << Profession << endl;
            cout << "Age: " << Age << endl;
            cout << "Salary: " << Salary << endl;
      }
};

// Multi-level + Multiple Inheritance
class Child : public Male, public Female {
public:
      string Name;
      string Gender;
      int    Age;
      string Studies;
      
      Child(const string& name, const string& g, const string& s, int age) : Human(g,c,k,s), Male() {
            
      }
};
