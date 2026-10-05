class Solution {
public:
    int rob(vector<int>& nums) {
       const int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return nums[0] > nums[1] ? nums[0] : nums[1];

        int rob1 = nums[0];
        int rob2 = nums[0] > nums[1] ? nums[0] : nums[1];
        int balls = 0;
        int semen = 0;

        for (int i = 2; i < n - 1 ; ++i) {
            int take = rob1 + nums[i];
            int skip = rob2;
            rob1 = rob2;
            rob2 = take > skip ? take : skip;
        }
        balls = rob2; 

        rob1 = nums[1];
        rob2 = nums[1] > nums[2] ? nums[1] : nums[2];


        for (int i = 3; i < n; ++i) {
            int take = rob1 + nums[i];
            int skip = rob2;
            rob1 = rob2;
            rob2 = take > skip ? take : skip;
        }

        return max(balls, rob2);

    }
};