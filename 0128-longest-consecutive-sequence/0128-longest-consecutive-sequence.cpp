class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        unordered_map <int, bool> mp;
        
        for(auto num:nums)
        mp[num]=true;

        for(auto num:nums)
        if(mp.count(num+1)>0)
        mp[num+1]=false;

        int longestseq=1;

        for(auto num:nums){
            int count=1;
            if(mp[num]==true){
                int j=1;
            while(mp.count(num+j))
            {
                count++;
                j++;

            }
            longestseq=max(longestseq, count);
            }
        }
        return longestseq;
    }
};