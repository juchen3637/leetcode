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
    invertTree(root->left);
    invertTree(root->right);

    TreeNode *left = root->left;
    TreeNode *right = root->right;

    root->left = right;
    root->right = left;

    return root;

    }
};