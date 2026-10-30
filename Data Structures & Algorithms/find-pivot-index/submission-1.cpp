class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> copy;
        int sum = 0;
        for(int n : nums){
            copy.push_back(sum);
            sum += n;
        }
        sum = 0;
        for(int i = nums.size() - 1; i >= 0; --i){
            int n = nums[i];
            nums[i] = sum;
            sum += n;
        }

        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == copy[i]){
                return i;
            }
        }
        return -1;
    }
};