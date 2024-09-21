class Solution {
public:
    int count=0, extra=0;
    int minAddToMakeValid(string s) {
        for(int i=0; i<s.size();i++){
            if(s[i]=='(')
            count++;
            else if(!count && s[i]==')')
            extra++;
            else count--;
        }
        return count+extra;

    }
};