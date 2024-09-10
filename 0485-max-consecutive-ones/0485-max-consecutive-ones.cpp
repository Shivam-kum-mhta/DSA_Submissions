class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int rank=0, count=0;
        for(auto i: nums){
            if(i==1)
            rank++;
            else
            {
            count=max(rank, count);
             rank=0;
        }
        count=max(rank, count);
        }
        return count;
    }
};