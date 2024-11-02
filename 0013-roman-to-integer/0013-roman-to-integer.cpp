class Solution {
public:
    int romanToInt(string s) {
    vector<int> arr(s.size());
    for(int i=0;i<s.size();i++){
            if(s[i] == 'I')
            arr[i] = 1;
            else if(s[i] == 'V')
            arr[i] = 5;
            else if(s[i] == 'X')
            arr[i] = 10;
            else if(s[i] == 'L')
            arr[i] = 50;
            else if(s[i] == 'C')
            arr[i] = 100;
            else if(s[i] == 'D')
            arr[i] = 500;
            else
            arr[i] = 1000;
        }
    int res=0;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()-1 && arr[i+1]>arr[i])
        res-=arr[i];
        else res+=arr[i];
    }
    return res;
    }
};