#include <iostream>
using namespace std;

class Animal {
public:
      virtual void makeSound() const {cout << "Some Sound\n";}
      virtual ~Animal() {};
};

class Dog : public Animal {
public:
      void makeSound() const override {cout << "Woof!\n";}
};

class Cat : public Animal {
public:
      void makeSound() const override {cout << "Meow!\n";}
};

int main () {
      Animal* pets[2];
      pets[0] = new Dog();
      pets[1] = new Cat();

      for (auto pet : pets)
            pet->makeSound();
      delete pets[0]; delete pets[1];

      return 0;
}