class Solution {
public:
    int climbStairs(int n) {
        vector<int> cache(n);
        int count1 = 1;
        int count2 = 1;

        for(int i = 0; i < n - 1; ++i){
            int temp = count1;
            count1 += count2;
            count2 = temp;
        }
        return count1;
        
    }
};
