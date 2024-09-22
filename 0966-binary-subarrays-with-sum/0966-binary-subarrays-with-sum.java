class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
         int res =0;
        for (int i =0 ;i<nums.length; i++){
            int sum = nums[i];
            if (sum == goal) res++;
            for (int j = i+1;j<nums.length;j++){
                 sum+=nums[j];
                if (sum == goal) res++; 
            }
        }
        return res;
    }
}