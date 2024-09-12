// 


class Solution {
public:
    string reverseWords(string s) {
        vector<string> bigS;
        int b=-1, c=-1;
        for(int i=0;i<s.size();i++)
        {
             if(s[i] != ' ') {
                if((i == 0) || (s[i-1] == ' ')) b = i;
                if((i == s.size()-1 ) || (s[i+1] == ' ')) c = i;
            
            if(b != -1 && c != -1){
                bigS.push_back(s.substr(b, c-b+1));
                b = -1;
                c = -1;
            }
        }
        }
        
        string s2="";
        for(int i=bigS.size()-1; i>=0; i--){
            s2=s2+bigS[i];
            if(i!=0)
            s2+=" ";
        }
        return s2;
    }
};