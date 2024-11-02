class Solution {
public:
    int maxDepth(string s) {
        int maxcount=0;
        int count=0;
        for(auto i:s){
            if(i=='(')
            count++;
            if(i==')')
            count--;
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};