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
 public:
  bool isValidBST(TreeNode *root) { 
    int key = root->val;
    if (root->left->val < key) {
      root = root->left;
      isValidBST;
    }

    else if (root->right->val > key) {
      root = root->right;
      isValidBST;
    }

    else {
      return false;
    }
   }
};