class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for(int i=0;i<s.size();i++)
        for(int j=i;j<s.size();j++){
            if (s[j]==s[i])
                if(t[j]!=t[i])
                return false;
        }
        set <char> sk1;
        set <char> sk2;
        for(int i=0;i<s.size();i++)
        {sk1.insert(s[i]);
        sk2.insert(t[i]);}
        if(sk1.size()!=sk2.size())
        return false;

        return true;
        }
};