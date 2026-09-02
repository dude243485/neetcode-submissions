class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        unordered_set<int> mySet(nums.begin(), nums.end());

        int maxCount = 0;
        for (int n : nums){
            if (mySet.find(n - 1) == mySet.end()){
                int count = 1, current = n;
                while (mySet.find(current + count) != mySet.end()){
                    count += 1;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;

        
        
    }
};
