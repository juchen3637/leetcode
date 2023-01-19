#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Solution {
 public:
  bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
      while (!isalnum(s[i]) && i < j) {
        i++;
      }
      while (!isalnum(s[j]) && i < j) {
        j--;
      }
      if (tolower(s[i]) != tolower(s[j])) {
        return false;
      }

      i++;
      j--;
    }

    return true;
  }
};

/*
Important stuff to remember:

isalnum function checks if the character in the string is alphanumerical. This
is used to get rid of spaces, colons, comas, and other characters by skipping
them by incrementing i or j.

tolower function makes the character lowercase to solve cases where some
characters maybe the same but in uppercase and lowercase

the reason why you set j = s.size() - 1 is because to select the very last index
of a string in C++ you need to subtract the size by 1 because there is a hidden
character at the end

you keep comparing i < j because once the numbers become equal to each other
then the while loops end
*/