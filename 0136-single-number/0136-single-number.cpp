class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     set <int> s;
    //     for(auto i: nums)
    //     s.insert(i);
    // int sum=0;
    //     for(auto i:nums)
    //     sum+=i;

    //     int setsum=0;
    //     for(auto i:s)
    //     setsum+=i;
    //     setsum*=2;

    //     return setsum-sum;
    int result=0;
    for(auto i:nums){
        result^=i;
    }
    return result;
    }
};