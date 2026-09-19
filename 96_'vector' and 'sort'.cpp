#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
      vector<int> nums;
      int n;
      cout << "Enter number(0 to Stop):";
      
      while (cin >> n && n!= 0) {
            nums.push_back(n);
      }
      sort(nums.begin(), nums.end());

      for (auto x : nums) {
            cout << x << " ";
      }
      cout << endl;

      return 0;
}