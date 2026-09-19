#include<iostream>
using namespace std;

template <typename T>
class Stack {
      T* arr;
      int capacity, topIndex;
public:
      Stack (int cap = 10) : capacity(cap) , topIndex(-1) {arr = new T[capacity];}
      ~Stack() {delete[] arr;}

      void push(const T& val) {
            if (topIndex == capacity-1) { return;}
            arr[++topIndex] = val;
      }

      void pop() {if (topIndex >= 0) --topIndex;}

      T top() const {return arr[topIndex];}

      bool isEmpty() const {return topIndex == -1;}
};

int main() {
      Stack<int> s;
      s.push(10); s.push(20); s.push(30);
      while (!s.isEmpty()) {
            cout << s.top() << " ";
            s.pop();
      }

      cout << endl;
      return 0;
}