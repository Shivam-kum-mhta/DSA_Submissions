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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> st;
        bool zigzag=true; // right
          stack<TreeNode* > help;
          vector <vector<int>> v;
          if(root) st.push(root); else return v;
        while(!st.empty()){
            vector<int> vec;
        while(!st.empty()){
            root=st.top();
            st.pop();
            vec.push_back(root->val);
            if(!zigzag) {
            if(root->right) help.push(root->right);
            if(root->left) help.push(root->left);
            }
            else {
                if(root->left) help.push(root->left);
                if(root->right) help.push(root->right);
            }   
                
        }
            zigzag=!zigzag;
            v.push_back(vec);
             swap(st, help);
    }
        return v;
    }
};