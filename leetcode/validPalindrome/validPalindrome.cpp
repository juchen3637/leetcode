#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Solution {
 public:
  bool isPalindrome(string s) {
    int i = 0;             // i is the pointer on the left side of the string
    int j = s.size() - 1;  // j is the pointer on the right side of the string

    while (i < j) {
      while (!isalnum(s[i]) &&
             i < j) {  // checks if it is a alphanumerical character, if it is
                       // not and the pointer are not equal then move on to the
                       // next character
        i++;
      }
      while (!isalnum(s[j]) && i < j) {  // same as above comment
        j--;
      }
      if (tolower(s[i]) !=
          tolower(s[j])) {  // makes both character lowercase, if they do not
                            // equal each other than it is invalid
        return false;
      }

      i++;  // if both characters are alphanumerical continue moving through the
            // string
      j--;  // same as above comment
    }

    return true;  // if all characters are the same then it is valid
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