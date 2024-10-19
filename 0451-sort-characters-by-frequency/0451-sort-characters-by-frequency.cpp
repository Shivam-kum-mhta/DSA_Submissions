class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        multimap <int, char> r;
        string ss="";
      for(auto e: s){
        map[e]++;
      }
        for(auto itr=map.begin(); itr!=map.end(); itr++){
            r.insert({itr->second, itr->first});
        }
      for(auto it=r.rbegin(); it!=r.rend(); ++it)
      ss+=string(it->first, it->second);
      return ss;
    }
};