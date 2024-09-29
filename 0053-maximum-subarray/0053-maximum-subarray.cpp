class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0];
        int sum=nums[0];
        for(int i=1; i<nums.size();i++){
            sum=max(nums[i],nums[i]+sum);
            mx= max(mx, sum);
        }
        /*sum=max(0+sum, nums[i]+sum);
        max=max(sum, max)*/
        return mx;
    }
};