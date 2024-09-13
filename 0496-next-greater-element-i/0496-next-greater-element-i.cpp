class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
         for(auto i:nums1){
            int flag=0;
            for(int j=0;j<nums2.size();j++){
                if(i==nums2[j] || flag){
                    flag=1;
                    if(i<nums2[j])
                    {result.push_back(nums2[j]);
                    flag=2; break;}
                }
            }
            if(flag!=2) result.push_back(-1);
            flag=0;
        }
        return result;
    }
};