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
 
    vector<int> preorderTraversal(TreeNode* root) {
    stack <TreeNode* > st;
    vector<int> v;
    while(!st.empty() || root){
        if(root==NULL){
            root=st.top();
            st.pop();
        }
        v.push_back(root->val);
        if(root->right) st.push(root->right);
        // st.push(root->left);
        root=root->left;
    }
    return v;
    }
};