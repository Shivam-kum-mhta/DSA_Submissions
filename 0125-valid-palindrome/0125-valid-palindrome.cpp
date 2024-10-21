class Solution {
public:
    bool isPalindrome(string s) {
       char* first=&s[0];
       char* second=&s[s.size()-1];
       while(first<second){
        while(first<second && !isalnum(*first)) first++;
        while(first<second && !isalnum(*second)) second--;
        if(tolower(*first)!=tolower(*second))
        return false;
        first++;
        second--;
       }
       return true;
    }
};