class Solution {
public:
    int minBitFlips(int start, int goal) {
        int XOR=start xor goal;  //dont take as xor  :: XOR=start^goal
        int res=0;
        while(XOR>0){
            res+=XOR & 1;
            XOR=XOR >> 1;   //---------->>
        }
        return res;
    }
};