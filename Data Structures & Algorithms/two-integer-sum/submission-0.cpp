class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> differences;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];

            if (differences.find(num) != differences.end()) {
                return {differences[num], i};
            }

            int diff = target - num;
            differences[diff] = i;
        }

        return {};
    }
};