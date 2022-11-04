#include <iostream>
using namespace std;

// class Solution {
//  public:
//   int hammingWeight(uint32_t n) {
//     string s = to_string(n);
//     const char* str = s.c_str();
//     int l = sizeof(str);
//     int result = 0; 
//     for (int i = 0; i <= l; i++){
//       if (str[i] == '1') {
//         result++;
//       }
//     }

//     return result;
//   }
// };

class Solution {
 public:
  int hammingWeight(uint32_t n) { 
    int count = 0; 
    while (n) {
      if (n & 1 > 0) count++; // uses &(and) gate with each bit, if it returns 1 then increment count by 1

      n >>= 1; // shift bit n by 1 bit so it can check the next bit 
    }

    return count; 
  }
};