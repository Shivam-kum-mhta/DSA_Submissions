class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            int curr=target-nums[i];
            if(map.find(curr)!=map.end()) {
                arr.push_back(map.find(curr)->second);
                arr.push_back(i);
                return arr;
            }
            
                map[nums[i]]=i;
        
        }
        return arr;
    }
};