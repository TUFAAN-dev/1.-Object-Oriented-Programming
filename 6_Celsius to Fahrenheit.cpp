#include <iostream>
using namespace std;

int main(){
      double Celsius, Fahrenheit;

      cout << "Enter the temperate in Celsius:" << endl;
      cin >> Celsius;
      
      // Formula to convert Celsius to Fahrenheit
      Fahrenheit =  (Celsius * 9.0 / 5.0 ) + 32.0 ;

      cout << "Temperature in Fahrenheit: " << Fahrenheit << endl;
      
      return 0;
}