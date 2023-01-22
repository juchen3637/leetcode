#include <iostream>
#include <map>

using namespace std;

class Solution {
 public:
  bool isAnagram(string s, string t) {
    map<char, int> hashmap;  // initialize hashmap

    if (s.size() != t.size()) {  // checks if the string sizes are the same, if
                                 // they are not then it is not a valid anagram
      return false;
    }

    else {
      for (int i = 0; i < s.size(); i++) {  // iterates through first string
        if (!hashmap[s[i]]) {  // this checks if the character is in the map
                               // already
          hashmap[s[i]] = 1;  // if its not in the map then the frequency of the
                              // character is set to 1
        }

        else {
          hashmap[s[i]]++;  // everytime an existing character appears increase
                            // its frequency by 1
        }
      }

      for (int j = 0; j < t.size(); j++) {  // iterates through second string
        if (!hashmap[t[j]]) {  // if the map doesn't have the character inside
                               // the second string then it is not a valid
                               // anagram
          return false;
        }

        else {  // if it is a valid anagram then all the characters will
                // subtract correctly and be left at 0
          hashmap[t[j]]--;
        }
      }

      return true;  // returns true
    }
  }
};
