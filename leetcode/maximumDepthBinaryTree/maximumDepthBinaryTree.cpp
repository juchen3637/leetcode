#include <algorithm> // imports max function 
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) { // checks if root is equal to null, if it is return a height of 0
            return 0;
        }

        else {
            int leftheight = maxDepth(root->left); // this recursivly calls the function and goes down the left side of the binary tree and stores its height as a int

            int rightheight = maxDepth(root->right); // this recursivly calls the function and goes down the right side of the binary tree and stores its height as a int

            return 1 + max(leftheight, rightheight); // this uses the max function to return the highest value between the two ints, and adds 1 to account for the root in the height as well
        }
    }
};