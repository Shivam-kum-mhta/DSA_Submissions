class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int sum;
        nums[0]>=0 ? sum=nums[0] : sum=0;
        for(int i=1; i<nums.size();i++){
            sum+=nums[i];
            if(sum>max) max=sum;
            if(sum<0){
                sum=0;
            }
        }
        /*sum=max(0+sum, nums[i]+sum);
        max=max(sum, max)*/
        return max;
    }
};