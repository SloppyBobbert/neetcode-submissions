class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> score;

        vector<int> ans;

         for(int i = 0; i < nums.size(); ++i){
            score.push({nums[i], i});
            if(i >= k - 1){
                while(score.top().second <= i - k){
                    score.pop();
                }
                ans.push_back(score.top().first);
;            }
         }
         return ans;
        
    }
};
