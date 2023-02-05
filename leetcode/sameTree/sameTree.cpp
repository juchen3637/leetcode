struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*
Break tree down into smaller subtrees and compare them
*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) { // if both p and q are empty trees then they are identical
            return true;
        }

        else if (p == nullptr || q == nullptr || p->val != q->val) { // if p is null or q is null, then return false. Or if the value of p and q are different then return false.
            return false;
        }

        else {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); //recursively call isSameTree function checking if left values of p and q are the same and if the right values of p and q are the same
        }
    }
};