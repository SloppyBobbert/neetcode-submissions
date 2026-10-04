class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cum = 0;
        vector<int> emilyschopped = heights;
        sort(emilyschopped.begin(), emilyschopped.end());
        for(int i = 0; i < heights.size(); ++i){
            if(heights[i] != emilyschopped[i]){
                cum++;
            }
        }
        return cum;
        
    }
};