class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int current=nums[0],k=0;
        int length=nums.size();
        for(int i=0; i<length;i++){
          st.insert(nums[i]);           // Nlogn
          nums[i]=-1000;
        }
        int index=0;
        for(auto it:st){ //    for (auto it = st.begin(); it != st.end(); ++it) is pointer operator 
                                            //  *it for accessing value
            nums[index]=it;
            index++;
        }
        return index;
    }
};