class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int flag=0, j=0;
        for(;j<strs[0].size(); j++)
        {for(int i=1;i<strs.size();i++)
        {if(strs[0][j]!=strs[i][j])
        {flag=1; break;}}
        if(flag)
        return strs[0].substr(0,j);}

        return strs[0].substr(0,j);
    }
};