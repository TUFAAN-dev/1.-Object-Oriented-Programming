#include "iostream"

using namespace std;

template <typename T>
T maximum(T a, T b)
{
      return (a>b)?a:b;
}

template<typename A, typename B>
A maximum(A a, B b){
      return (a>b)?a:b;
}

int main(){
     cout<< maximum<int>(66,7);
     cout << maximum<float>(66,7);

     cout << maximum<int,double>(24,55.6);
}