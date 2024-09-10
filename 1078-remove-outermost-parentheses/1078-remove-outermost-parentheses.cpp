class Solution {
public:
    string removeOuterParentheses(string s) {
        string s2;
         int balance=0;
        for(auto i: s){
         
          
         if(balance>0 )
         {   
         if(i=='(')
         {s2+=i;
         balance++;} 
         if(i==')'){
          if(--balance)
          s2+=i;
        }
         }
         else  {balance=1;}
 
        }
        return s2;
    }
};