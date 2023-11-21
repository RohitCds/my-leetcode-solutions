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
    void inorderTraverse(TreeNode* node, vector<int>& traversal) {
        if (node == nullptr) return;
        inorderTraverse(node->left, traversal);
        traversal.push_back(node->val);
        inorderTraverse(node->right, traversal);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorderTraverse(root, res);
        return res;
    }
};
