class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        j=0;
        while(nums[j]!=0){
            if(j>=nums.size()-1) return;
            j++;
        }
        i=j;
        j++;
        for(;j<nums.size();j++)
        // while(nums[j]!=0){
            if(nums[j]!=0){
            swap(nums[i], nums[j]);
            i++;

        }
    }
};