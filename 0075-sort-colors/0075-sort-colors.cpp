class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++) map[nums[i]]++;
        int idx=0;
        for(int i=0; i<3;i++){
            int counts=map[i];
            for(int j=0; j<counts;j++){
                nums[idx++]=i;
            }
        }

    }
};