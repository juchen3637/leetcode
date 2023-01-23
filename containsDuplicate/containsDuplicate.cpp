#include <bits/stdc++.h>

#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;  // intialize an unordered set

    for (int i = 0; i < nums.size();
         i++) {  // iterates through the entire vector
      if (set.find(nums[i]) !=
          set.end()) {  // search through entire set, if the number already
                        // exists in the set then it is a duplicate
        return true;    // return true
      }

      else {                  // if the number is not in the set
        set.insert(nums[i]);  // add the number to the set
      }
    }

    return false;  // if there are no duplicates then there are only unique
                   // values, return false
  }
};