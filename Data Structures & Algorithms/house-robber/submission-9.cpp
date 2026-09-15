class Solution {
public:
    int rob(const vector<int>& nums) {
        const int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return nums[0] > nums[1] ? nums[0] : nums[1];

        int rob1 = nums[0];
        int rob2 = nums[0] > nums[1] ? nums[0] : nums[1];

        for (int i = 2; i < n; ++i) {
            // branchless max using conditional assignment
            int take = rob1 + nums[i];
            int skip = rob2;
            rob1 = rob2;
            rob2 = max(rob2, take);
        }
        return rob2;
    }
};