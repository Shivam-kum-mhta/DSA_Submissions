class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector <int> v(nums.size(), -1);
        for(int i=2*nums.size()-1; i>=0; i--){
               while(!st.empty() && nums[i % nums.size()] >= st.top())
                st.pop();
            
     if (i < nums.size()) {
                if (!st.empty()) {
                    v[i] = st.top();  
                } 
            }
            st.push(nums[i % nums.size()]);
        }
        return v;
    }
};