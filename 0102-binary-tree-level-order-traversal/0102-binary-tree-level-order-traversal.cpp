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
    queue <TreeNode* > q;
        queue <TreeNode* > helper;
      vector<vector<int>> meganodes;
    vector<vector<int>> Level(){
        vector<vector<int>> meganodes;

        if(q.empty()) return meganodes;
        while(!q.empty()){
        vector<int> nodes;
         while(!q.empty()){
            nodes.push_back((q.front())->val);
           if (q.front()->left) helper.push(q.front()->left) ;
           if (q.front()->right) helper.push(q.front()->right) ;
            q.pop();
        }
        meganodes.push_back(nodes);
        swap(q, helper);
        // while(!helper.empty()){
        //     if(helper.front()->left) 
        //      q.push(helper.front()->left);
        //       if(helper.front()->right) 
        //      q.push(helper.front()->right);
        //     helper.pop();
        // }
        }
        return meganodes;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return meganodes;
        q.push(root);
        return Level();
    }
};