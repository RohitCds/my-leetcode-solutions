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
    void postorderTraverse(TreeNode* node, vector<int>& traversal) {
        if (node == nullptr) return;
        postorderTraverse(node->left, traversal);
        postorderTraverse(node->right, traversal);
        traversal.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorderTraverse(root, res);
        return res;
    }
};
