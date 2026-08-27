class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> store;

        for ( int i { 0} ; i < s.length(); i ++){
            if (store.find(s[i]) == store.end()){
                store[s[i]] = 1;
            } else {
                store[s[i]]++;
            }
        }

        for (int i { 0} ; i < t.length(); i ++){
            if (store.find(t[i])== store.end() || store[t[i]] == 0){
                return false;
            }
            store[t[i]]--;
        }

        return true;
        
    }
};
