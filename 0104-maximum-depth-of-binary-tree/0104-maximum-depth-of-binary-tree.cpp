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
    int Counter=1;
    void Count(TreeNode* root, int count){
           
        if(root->left) Count(root->left, count+1);
        Counter=max(Counter, count);
        if(root->right) Count(root->right, count+1);
        Counter=max(Counter, count);
         
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        Count(root, 1);
        return Counter;
    }
};