class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> freak(100001, 0);

        for(int i : nums){
            freak[i]++;
        }

        vector<vector<int>> result;
        int cur = 1;

        while((result.size() < nums.size() / 3)){
            vector<int> balls;
            for(int i = 0; i < 3; ++i){
                while(cur <= 100000 && freak[cur] == 0){
                    cur += 1;
                }
                if (cur > 100000)
                    return {};
                balls.push_back(cur);
                freak[cur]--;
            }
            if(balls[2] - balls[0] > k)
                return {};

            result.push_back(balls);
        }
        return result;


    }
};
