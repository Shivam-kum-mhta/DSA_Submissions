class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int i=0,j=1;
       for(int temp=0; temp<nums.size(); temp++){
            if(nums[temp]>0) {
            res[i]=nums[temp]; 
            i=i+2;
            }
            else { 
            res[j]=nums[temp];
             j=j+2;}
        }
        return res;
    }
};