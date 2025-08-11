/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* test = root;
        return isit(root, test);
    }
    bool isit(TreeNode* left , TreeNode* right){
        if((!left)&&(!right)) return true;
        if((!left)||(!right)) return false;
        if (left->val != right->val) return false;
        return isit(left->left, right->right) && isit(left->right, right->left);
    }
};
