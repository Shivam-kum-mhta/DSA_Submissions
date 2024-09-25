class Solution {
public:
int numSubarraysWithSum(vector<int>& nums, int goal) {        unordered_map <int, int> count;
//hash map
        count[0]=1;
         int presum=0;
         int totalsubarr=0;
          for(auto i:nums){
        presum+=i;
        if(count.find(presum-goal)!=count.end())
        {   totalsubarr+=count[presum-goal];}
        count[presum]++;
          }
    return totalsubarr;
}
};
