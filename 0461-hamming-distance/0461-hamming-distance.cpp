class Solution {
public:
    int hammingDistance(int x, int y) {
         int XOR=x xor y;  //dont take as xor  :: XOR=start^goal
        int res=0;
        while(XOR>0){
            res+=XOR & 1;
            XOR=XOR >> 1;   //---------->>
        }
        return res;
    }
};