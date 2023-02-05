#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int maxP = 0, l = 0, r = 0;   // initialize variables and pointers
    while (r < prices.size()) {   // will continuously run as long as the right
                                  // pointer is less than max size
      if (prices[r] > prices[l])  // checks if the right pointer value is
                                  // greater than the left pointer value
        maxP = max(
            maxP,
            prices[r] -
                prices[l]);  // if the right pointer value is greater than you
                             // should buy the left stock and sell the right
                             // stock, the max function checks and saves the
                             // highest value out of the new value and old value
      else      // if right pointer value is not greater than left pointer value
                // then you should not buy and sell, move on to the next day
        l = r;  // sets left pointer equal to right pointer
      ++r;      // increments and move right pointer
    }
    return maxP;  // return the max value calculated
  }
};