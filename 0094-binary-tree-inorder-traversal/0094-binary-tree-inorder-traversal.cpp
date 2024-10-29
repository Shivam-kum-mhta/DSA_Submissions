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
            vector <int> nodes;
    void inodr(TreeNode* root){
        if(root==NULL)
        {
        return;
        }
        else  {
        inodr(root->left); 
        nodes.push_back(root->val);
        inodr(root->right);
        }
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {

    if(!root)
        {return nodes;}
        inodr(root->left);
        nodes.push_back(root->val);
        inodr(root->right);
        return nodes;
    }
};