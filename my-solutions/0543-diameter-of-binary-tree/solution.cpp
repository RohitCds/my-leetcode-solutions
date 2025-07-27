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
    int diameterOfBinaryTree(TreeNode* root) {
        int max = 0;
        findmax(root, max);
        return max;
    }
private:
    int findmax(TreeNode* root, int& m){
        if(root==NULL) return 0;
        int lh = findmax(root->left, m);
        int rh = findmax(root->right,m);
        m = max(m, lh+rh);
        return 1+max(lh,rh);
    }
};
