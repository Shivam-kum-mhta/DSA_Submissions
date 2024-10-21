class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string r=s;
        reverse(s.begin(), s.end());
        if(s==r) return true;
        else return false;
    }
};