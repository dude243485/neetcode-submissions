class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashMap;

        for (int i { 0 }; i < strs.size(); i ++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if (hashMap.find(temp) == hashMap.end()){
                hashMap[temp] = { strs[i] };
            } else {
                hashMap[temp].push_back(strs[i]);
            }
        }

        vector<vector<string>> res;

        for (auto& [key, value] : hashMap){
            res.push_back(value);
        }

        return res;

        
    }
};
