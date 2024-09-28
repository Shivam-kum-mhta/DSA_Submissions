class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
          for(auto i: map)
        {
            if(i.second>nums.size()/2)
            {
                return i.first;
            }
        }
       return -1;
    }
};