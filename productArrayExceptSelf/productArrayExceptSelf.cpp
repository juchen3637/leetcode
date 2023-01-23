#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int size = nums.size();  // sets size equal to the size of nums vector
    vector<int> result(
        size,
        1);  // initializes a new result vector with the same size as the nums
             // vector, filled it with 1 because if you don't then you will be
             // multiplying by 0 which would result in wrong outputs

    int prefix = 1;
    for (int i = 0; i < size;
         i++) {  // iterates through the entire array from beginning to end
      result[i] =
          prefix;  // multiplies the result index value by the value of prefix
      prefix = prefix * nums[i];  // changes the value of prefix by multiplying
                                  // it by the value of nums
    }

    int postfix = 1;
    for (int j = size - 1; j >= 0;
         j--) {  // iterates through the entire array from end to beginning, we
                 // subtract size by 1 here to account for the fact that array
                 // indexes start at 0, also we made j >= 0 so it can run 4
                 // times
      result[j] = result[j] *
                  postfix;  // multiplies initial values of result with postfix
      postfix = postfix * nums[j];  // changes the value of postfix by
                                    // multiplying it by the value of nums
    }

    return result;  // returns result array
  }
};