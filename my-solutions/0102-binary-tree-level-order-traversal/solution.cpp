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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!empty(q)){
            int n = q.size();
            vector<int> ds;
            for(int i = 0; i<n; i++){
                TreeNode* test = q.front();
                q.pop();
                ds.push_back(test->val);
                if (test->left!=NULL){
                    q.push(test->left);
                }
                if(test->right!=NULL){
                    q.push(test->right);
                }
            }
            ans.push_back(ds);
        }
        return ans;
    }
};
