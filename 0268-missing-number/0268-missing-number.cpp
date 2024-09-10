class Solution {
public:
     int missingNumber(vector<int>& nums) {
    //     int N=nums.size();
    //     vector <int> hash(N+1,0);
    //     for (int i=0;i<nums.size();i++)
    //     hash[nums[i]]=hash[nums[i]]+1;

    //     for(int i=0;i<=nums.size();i++)
    //     {if(hash[i]==0)
    //     return i;}
    
    // return -1;
    int s1=0;
    int s2=(nums.size()*(nums.size()+1))/2;
    for(int i=0;i<nums.size();i++)
        s1+=nums[i];

   return s2-s1;
    }
};