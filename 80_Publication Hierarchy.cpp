#include<iostream>
#include<string>
using namespace std;

class Publication {
protected:
      string title;
      double price;
public:
      Publication(const string& t, double p) : title(t), price(p) {}
      virtual void display() const {
            cout << title << " - $" << price;
      }
      virtual ~Publication() {}
};

class Book : public Publication {
      int pages;
public:
      Book(const string& t,  double p, int pg) : Publication(t,p), pages(pg) {}

      void display() const override {
            Publication::display();
            cout << ", Pages" << pages;
      }
};

class Tape : public Publication {
      double minutes;
public:
      Tape(const string& t, double p, double m) : Publication(t,p), minutes(m) {} 
      
      void display() const override {
            Publication::display();
            cout << ", Play time: " << minutes << " min";
      } 
};

int main() {
      Book b("C++ primer", 49.99, 1200);
      Tape t("Audio Book", 19.99, 180);

      b.display(); cout << endl;
      t.display(); cout << endl;

      return 0;
}