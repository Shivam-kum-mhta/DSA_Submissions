class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        i=j=0;
        // while(nums[j]!=0){          //if j>nums.size()-1 then it can have undefined character , showing n=different behaviour
        //     if(j>=nums.size()-1) return;
        //     j++;
        // }
        // i=j;
        // j++;
        for(;j<nums.size();j++)
        // while(nums[j]!=0){               //even increases the time complexity and unnecessay for checking one element u were doing this;
        
            if(nums[j]!=0){
            swap(nums[i], nums[j]);
            i++;

        }
    }
};