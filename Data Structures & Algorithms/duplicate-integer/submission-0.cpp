class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet ;
        for (auto num : nums) {
            if (hashSet.find(num) != hashSet.end()){
                return true;
            }
            hashSet.insert(num);
        }
        return false;
        
    }
};