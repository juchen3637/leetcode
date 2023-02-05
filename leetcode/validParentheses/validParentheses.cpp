#include <iostream>
#include <stack>
using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> parentheses;

    int sizeOfString = s.size();  // initializes size of the string

    for (int i = 0; i < sizeOfString;
         i++) {  // iterates through for loop until end of string length
      if (s[i] == ')' || s[i] == ']' ||
          s[i] == '}') {  // checks if the character is a closed bracket
        if (parentheses.empty()) {  // if the first char is a closed bracket and
                                    // the stack is empty there is nothing that
                                    // can make this a valid parentheses
          return false;
        }
        if (s[i] == ')' &&
            parentheses.top() !=
                '(') {  // if the stack is not empty it compares the closed
                        // bracket to the previously pushed open bracket, if the
                        // open bracket does not match the closed bracket then
                        // it is incorrect, same for the following 2 if
                        // statements
          return false;
        }
        if (s[i] == ']' && parentheses.top() != '[') {
          return false;
        }
        if (s[i] == '}' && parentheses.top() != '{') {
          return false;
        } else {
          parentheses.pop();  // after comparing it removes the open bracket by
                              // popping it out of the stack
        }
      }

      else {
        parentheses.push(
            s[i]);  // if the character is not a closed bracket then it must be
                    // an open bracket therefore it gets pushed into the stack
      }
    }
    if (!parentheses.empty()) {  // if the stack is not empty by the end of the
                                 // for loop it means there is an odd number of
                                 // brackets and there is a open bracket left
                                 // unclosed or vice versa
      return false;
    } else {  // if the stack is fully clear then it can return true
      return true;
    }
  }
};