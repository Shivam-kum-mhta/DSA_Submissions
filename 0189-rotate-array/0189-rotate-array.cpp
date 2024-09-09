class Solution {
public:
   void reverse(vector<int> &arr, int start, int end){
            while(start<end){
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
    void rotate(vector<int>& nums, int k) {
        // for(int i=0; i<k ; i++){
        //     int end=nums[nums.size()-1];
        //     int j=nums.size()-1;
        //     for(; j>0; j--)
        //     {
        //         nums[j]=nums[j-1];
        //     }
        //     nums[j]=end;
        // }


        int n=nums.size();
        k = k % n;
        reverse(nums, n-k,n-1);
        reverse(nums, 0,n-k-1 );
        reverse(nums,0, n-1);
        
    }
};