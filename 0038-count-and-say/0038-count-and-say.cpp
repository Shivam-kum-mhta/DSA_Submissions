class Solution {
public:
    string findfreq(string s){
        int count=1;
        string s2;
        for(int i=1; i<s.size();i++){
                if(s[i]==s[i-1]) {
                    count++;
                }
                else{
                    s2=s2+to_string(count)+s[i-1];
                    count=1;
                }
            }
         s2=s2+to_string(count)+s[s.size()-1];
        return s2;
    }
    string countAndSay(int n) {
      
        if(n==1) return "1";
          string s="1";
        for(int i=1; i<n;i++){
            s=findfreq(s);
        }
        return s;
    }
};