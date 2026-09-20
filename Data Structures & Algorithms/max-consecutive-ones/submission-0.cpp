class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, count = 0;
        
        for (int num : nums) {
            count = num ? count + 1 : 0;
            ans = max(ans, count);
        }

        return ans;
    }
};