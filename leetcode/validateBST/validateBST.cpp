#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
 public:// members can be accessed outside of class
  bool isValidBST(TreeNode *root) { return helper(root, LONG_MIN, LONG_MAX); //uses LONG_MIN as neg infinity and LONG_MAX as positive infinity parameters
   }

 private: //members cannot be accessed outside of class
  bool helper(TreeNode *root, long left, long right) {
    if (!root) return true; // if root == 0 then return true, i.e. if the tree checks everything 
    if (root->val < right && root->val > left) { // checks if the value of right is greater than root and value of left is less than root
      return helper(root->left, left, root->val) && // recursion, passes the left value of root back into the function and checks its childern for the same thing as the above statement
             helper(root->right, root->val, right); // recursion, this passes the right value of root back into the function and checks its childern
    }
    return false; //if the values of the BST are, left greater than root and right less than root it is not a valid BST, return false
  }
};