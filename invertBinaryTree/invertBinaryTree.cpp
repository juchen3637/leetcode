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
    TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr) { // if root is at null then return the previous root, basically goes back up a node in the binary tree
        return root;
    }

    TreeNode *left = root->left; // saves the left node from root
    TreeNode *right = root->right; // saves the right node from root

    invertTree(root->left); // calls the function again, setting root equal to its left node, going down the binary tree
    invertTree(root->right); // calls the function again, setting root equal to its right node, going down the binary tree

    root->left = right; // swaps left node with right node
    root->right = left; // swaps right node with left node

    return root; // returns the binary tree

    }
};