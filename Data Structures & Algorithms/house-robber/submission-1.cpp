class Solution {
public:
  int rob(const vector<int> &nums) {
    const int n = nums.size();
    vector<int> best(n + 1, 0);

    best[0] = nums[0];
    best[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
      best[i] = max(best[i - 2] + nums[i], best[i - 1]);
    }

    return best[n - 1];
  }
};