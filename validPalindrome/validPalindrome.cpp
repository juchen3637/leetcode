#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
      char initialChar[s.length() + 1];
      strcpy(initialChar, s.c_str());
      int sizeOfCharArray = sizeof(initialChar) / sizeof(initialChar[0]);
      for (int i = 0; i < sizeOfCharArray/2; i++) {
        for (int j = sizeOfCharArray - 1; j > sizeOfCharArray / 2; j--) {
          if (initialChar[i] == initialChar[j]) {
          }
          else {
            return false;
          }
        } 
      }

      return true;
    }
};