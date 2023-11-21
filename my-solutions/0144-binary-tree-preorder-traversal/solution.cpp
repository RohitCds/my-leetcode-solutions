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
    void pretraverse (TreeNode* node, vector<int>& traversal){
        if(node==NULL) return;
        traversal.push_back(node->val);
        pretraverse(node->left, traversal);
        pretraverse(node->right, traversal);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        pretraverse(root, res);
        return res;
    }
};
