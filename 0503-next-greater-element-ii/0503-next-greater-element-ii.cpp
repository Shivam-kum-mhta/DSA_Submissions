class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector <int> v;
        int flag=0;
       for(int i=0; i<nums.size(); i++)
       {for(int j=i; j<=i+nums.size()-1; j++)
        { if(nums[i]<nums[j%nums.size()]) 
        {v.push_back(nums[j%nums.size()]); flag=1; break;}
        }
        if(!flag) v.push_back(-1);
        flag=0;
        }
        return v;
    }
};