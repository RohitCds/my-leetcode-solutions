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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> hash;
        for(int i = 0; i< inorder.size(); i++){
            hash[inorder[i]] = i;
        }
        TreeNode* root = buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, hash);
        return root;
    }
    TreeNode* buildTree (vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart,int inEnd, map<int, int>& hash){
        if(preStart>preEnd||inStart>inEnd) return NULL;
        TreeNode* first = new TreeNode(preorder[preStart]);
        int inOrderLoc = hash[preorder[preStart]];
        int numsLeft = inOrderLoc - inStart;
        first -> left = buildTree(preorder, preStart+1, preStart + numsLeft, inorder, inStart, inOrderLoc-1,hash);
        first->right = buildTree(preorder, preStart+numsLeft+1, preEnd, inorder, inOrderLoc+1, inEnd, hash);
        return first;
    }
};
