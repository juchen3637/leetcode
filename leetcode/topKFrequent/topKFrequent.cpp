#include <bits/stdc++.h>

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();  // size of the nums vector

    unordered_map<int, int> m;  // initializing the map
    for (int i = 0; i < n; i++) {
      m[nums[i]]++;  // increments the index of the map, for example for
                     // {1,1,1,2,2,3} you get a map where map[1] = 3, map[2] =
                     // 2, map[3] = 1
    }

    vector<vector<int>> buckets(
        n +
        1);  // you add 1 to the total size of vector to account for 0, this is
             // what we will use to check the highest occurances in each element
    for (auto it = m.begin(); it != m.end();
         it++) {  // this just makes 'it' equal to the m map
      buckets[it->second].push_back(
          it->first);  // this pushes the key of the map into the bucket index,
                       // we find the bucket index using the value of the map,
                       // for example if the value of the map is 3 and the key
                       // of the map is 1, bucket[3].push_back(1) meaning that
                       // the number 3 only occurs once in the vector
    }

    vector<int> result;  // initialize  the result vector we will be returning

    for (int i = n; i >= 0;
         i--) {  // this iterates through bucket sort vector by starting at the
                 // highest number of occurances
      if (result.size() >=
          k) {  // this breaks and ends the for loop once the number of elements
                // equals k the target number
        break;
      }
      if (!buckets[i].empty()) {  // checks if the bucket is empty
        result.insert(
            result.end(), buckets[i].begin(),
            buckets[i].end());  // if it's not empty then push the farthest
                                // value of bucket into result vector
      }
    }

    return result;  // return result
  }
};