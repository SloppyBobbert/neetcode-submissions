class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> ans(cost.size() + 1, 0);
        for(int cum = 2; cum <= cost.size(); ++cum){
            ans[cum] = min(
                ans[cum- 1] + cost[cum- 1],
                ans[cum- 2] + cost[cum- 2]
            );
        }
        return ans[cost.size()];
    }
};
