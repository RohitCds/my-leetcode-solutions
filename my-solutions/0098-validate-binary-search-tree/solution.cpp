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
    bool isValidBST(TreeNode* root) {
        return isit(root, LONG_MIN, LONG_MAX);
    }
    bool isit(TreeNode* node, long min_val, long max_val){
        if(node==NULL){
            return true;
        }
        if(node->val<=min_val||node->val>=max_val) return false;
        return isit(node->left, min_val, node->val) && isit(node->right, node->val, max_val);
    }
    
};
