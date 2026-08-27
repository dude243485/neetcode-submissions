class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> record;

        for (int i { 0 }; i < nums.size(); i++){
            int val = target - nums[i];
            if (record.find(val) != record.end()){
                return { record[val], i};
            }
            record[nums[i]] = i;
        }

        
        
    }
};
