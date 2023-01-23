#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 1};
  set<int> set = {nums.begin(), nums.end()};
  for (auto it = set.begin(); it != set.end(); it++) {
    cout << " " << *it;
  }
}