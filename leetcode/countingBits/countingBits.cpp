#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> countBits(int n) {
    vector<int> ans;
    for (int i = 0; i <= n; i++) { // counts from 0 to n
      int sum = 0; // sets sum as 0
      int num = i; // sets num equal to the number i is counting on

      while (num != 0) { // while num doesnt equal to 0 it satisfies this condition
        sum += num % 2; // continuously adds to sum with num modulo 2, basically the remainder when num is divided by 2
        num = num / 2; 
      }

      ans.push_back(sum); // adds sum to vector ans
    }
    return ans;
  }
};