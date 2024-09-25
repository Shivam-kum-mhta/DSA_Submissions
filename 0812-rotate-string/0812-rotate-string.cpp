class Solution {
public:
    bool rotateString(string s, string goal) {
if(s.size()!=goal.size()) return false;
goal+=goal;
return goal.find(s)!=string::npos;

        // int i=0;
//    if(s.size()!=goal.size()) return false;
//         for(;i<size(goal);i++){
//             if(s[0]==goal[i]) {break;}
//         }
//         goal+=goal;
//         return s==goal.substr(i, s.size());



    }
};