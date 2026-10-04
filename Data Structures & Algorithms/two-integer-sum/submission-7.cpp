class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;

        unordered_map<int, int> seen;

        for (int i { }; i < nums.size(); ++i) {
            int difference = target - nums[i];
            
            if (seen.contains(difference)) {
                indices.push_back(seen[difference]);
                indices.push_back(i);
            }

            seen.insert({nums[i], i});
        }

        return indices;
    }
};
