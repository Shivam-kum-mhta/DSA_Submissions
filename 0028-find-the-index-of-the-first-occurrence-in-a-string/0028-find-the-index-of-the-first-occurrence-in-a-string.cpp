class Solution {
public:
    int strStr(string haystack, string needle) {
        int needlesize=needle.size();
        for (int i=0; i<haystack.size(); i++){
            if(haystack.substr(i,needlesize)==needle)
            return i;
        }
        return -1;
    }
};