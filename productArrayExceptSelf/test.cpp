#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 4};
  int n = nums.size();
  cout << n << endl;
  vector<int> result(n);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
}