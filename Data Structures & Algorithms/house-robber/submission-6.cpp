class Solution {
public:
    int rob(const vector<int>& nums) {
    const int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);
    
    int rob1 = nums[0], rob2 = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i) {
        int temp = max(rob2, rob1 + nums[i]);
        rob1 = rob2;
        rob2 = temp;
    }
    return rob2;
}
};