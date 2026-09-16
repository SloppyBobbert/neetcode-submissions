class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int balls = 0;
        for(int i : nums)
        balls |= i;

        return balls << (nums.size()-1);

        
    }
};