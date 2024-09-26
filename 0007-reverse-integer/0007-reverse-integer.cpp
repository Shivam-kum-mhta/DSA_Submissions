class Solution {
public:
    int reverse(int x) {
        long int rem=0;
        while(x){
            rem=rem*10+x%10;
            x=x/10;
        }

        if(rem>=INT_MAX || rem<=INT_MIN)     return 0;
        return rem;
    }
};