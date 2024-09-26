class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
         if (s.size() != t.size()) {
            return false;
        }
        for(char i:s){
        // if(map1.find(i)==map1.end())
        map1[i]++;
        //   if(map2.find(i)!=map2.end())
        // map2.[insert(i)];
        }
        for(char i:t)
        map2[i]++;
        
        for(const auto& i:map1){
            auto it= map2.find(i.first);
        if(it==map2.end() || it->second!=i.second)
            return false;
        }
        
        return true;
    }
};