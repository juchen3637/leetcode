#include <bits/stdc++.h>

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashmap;  // initialize map

    for (int i = 0; i < nums.size(); i++) {  // iterates through the vector
      int num = nums[i];  // saves the value of nums[i] for later
      int targetSum =
          target - num;  // this is the value we are looking for in the hashmap

      if (auto it = hashmap.find(targetSum);
          it != hashmap.end()) {  // this scans and reads through the entire map
        return {it->second, i};   // if it equals what we are looking for we
                                  // return the value and the current 'i' index
      }

      else {
        hashmap[num] =
            i;  // if we cannot find it then we add the index to the hashmap
      }
    }

    return {};
  }
};

// remember the differnce between an unordered map and ordered map is that an
// unorderedmap is similar to a table and an ordered map uses binary search tree