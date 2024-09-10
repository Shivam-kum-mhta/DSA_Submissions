class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int rank=0, count=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==1)
            rank++;
            else rank=0;

            if(rank>count)
            count=rank;
        }
        return count;
    }
};