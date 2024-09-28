class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int max=nums[0];
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
            if(map[nums[i]] > map[max]) max=nums[i];
        }
        return (map.find(max))->first;
    }
};