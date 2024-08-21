class Solution {
public:
    bool isPalindrome(int x) {
        // string d = to_string(x); 
    //     if (sizeof(d)) {
    //         for (int i = 0; i < sizeof(d) / 2; i++) {
    //             if (d[i] != d[n - i])
    //                 return 0
    //         }
    //         return 1
    //     }
    //     else return 0
    // }

if(x<0 || sizeof(x)%10==1)
return false;
long long reversed=0;
    long long temp=x;
    while (temp!=0){
        reversed=reversed*10+ temp%10;
        temp/=10;
    }
    return (reversed==x);
    }
};