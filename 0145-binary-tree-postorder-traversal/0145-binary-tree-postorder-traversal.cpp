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
    void post(TreeNode* root){
        if(root==NULL)
        {
        return;
        }
        else  {
        post(root->left); 
        post(root->right);
        nodes.push_back(root->val);
        }
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        
    if(!root)
        {return nodes;}
        post(root->left);
        post(root->right);
        nodes.push_back(root->val);
        return nodes;
    }
    
};