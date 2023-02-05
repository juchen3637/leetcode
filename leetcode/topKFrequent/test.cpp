#include <bits/stdc++.h>

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  vector<int> nums{1, 1, 1, 2, 2, 3};
  int k = 2;
  int n = nums.size();

  // for (int i = 0; i < n; i++) {
  //   cout << nums[i] << endl;
  // }

  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) {
    m[nums[i]]++;
  }

  // int sizeM = m.size() + 1;
  // for (int i = 0; i < sizeM; i++) {
  //   cout << m[i] << endl;
  // }

  vector<vector<int>> buckets(n + 1);
  for (auto it = m.begin(); it != m.end(); it++) {
    buckets[it->second].push_back(it->first);
  }

  vector<int> result;

  for (int i = n; i >= 0; i--) {
    if (result.size() >= k) {
      break;
    }
    if (!buckets[i].empty()) {
      result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }
  }
}