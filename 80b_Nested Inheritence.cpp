#include<iostream>
#include<string>
using namespace std;

class Human {
protected:        // Use protected, so child classes can access
      string Kingdom;
      string Cell;
      int    Number_of_Gene;
      string Species;
public:
      // Default Constructor - Important for virtual inheritance
      Human() : Kingdom(""), Cell(""),  Number_of_Gene(0), Species("") {};
      
      // Parameterized constructor
      Human(const string& k,const string& c, int g,const string& s) : Kingdom(k), Cell(c), Number_of_Gene(g), Species(s) {}

      void displayHuman() {
            cout << "Kingdom: " << Kingdom << endl;
            cout << "Cell: " << Cell << endl;
            cout << "Number_of_Gene: " << Number_of_Gene << endl;
            cout << "Species: " << Species << endl;
      }
};

class Male : virtual public Human {       // "Virtual" to avoid diamond problem
public:
      string Gender;
      string Name;

      Male(const string& name) : Gender("Male"), Name(name) {}

      void displayMale() {
            cout << "Name: " << Name << endl;
            cout << "Gender: " << Gender << endl;
      }
};

class Female : virtual public Human {     // "Virtual" to avoid diamond problem
public:
      string Gender;
      string Name;
      
      Female(const string& name) : Gender("Female"), Name(name) {}

      void displayFemale() {
            cout << "Name: " << Name << endl;
            cout << "Gender: " << Gender << endl;
      }
};

// Child inherits from both Male and Female
// For a child, we usually just inherit from Human directly, but since this is for "Nested Inheritance" practice
class Child : public Male, public Female {
public:
      string ChildGender;

      Child(const string& k,const string& c,int g,const string& s,const string& name,const string& gender) : Human(k, c, g, s), Male(name), Female(name) {

            ChildGender = gender;
      }

      void displayChild() {
            Human::displayHuman();        // Call only once because of virtual
            cout << "Child Name: " << Male::Name << endl;
            cout << "Child Gender: " << ChildGender << endl;
      }
};

int main() {
      Child c1("Animalia", "Eukaryotic", 20000, "Homo Sapiens", "Danish", "Male");
      c1.displayChild ();
      return 0;
}

