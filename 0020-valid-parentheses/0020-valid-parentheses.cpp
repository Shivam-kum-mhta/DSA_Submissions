class Solution {
public: stack <int> st;
    int p=0;
    bool isValid(string s) {
    for(auto i:s){
        if(i=='{' || i=='(' || i=='[')
        st.push(i);
        else if(st.empty()) return false;
        else{
            p=st.top();
            if(st.empty() || (i=='}' && p=='{') || (i==')' && p=='(') || (i==']'&& p=='['))
            st.pop();
            else return false;
            
        }
    }

    return st.empty();
    }
};