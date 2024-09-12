// 


class Solution {
public:
    string reverseWords(string s) {
        vector<string> bigS;
        int b=-1;
        for(int i=0;i<s.size();i++)
        {
             if(s[i] != ' ') {
                if((i == 0) || (s[i-1] == ' ')) b = i;
                // if((i == s.size()-1 ) || (s[i+1] == ' ')) c = i;
                
             }          //word has ended
            else if (b != -1){
                bigS.push_back(s.substr(b, i-b));
                b=-1;
            }
        }

         if (b != -1) {
            bigS.push_back(s.substr(b, s.size() - b));
        }
        
        
        s="";
        for(int i=bigS.size()-1; i>=0; i--){
            s=s+bigS[i];
            if(i!=0)
            s+=" ";
        }
        return s;
    }
};