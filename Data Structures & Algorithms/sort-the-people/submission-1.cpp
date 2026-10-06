class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> cock;
        for(int i = 0; i < names.size(); ++i){
            cock[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end(), greater<int>());
        vector<string> balls;
        for(int i = 0; i < names.size(); ++i){
            balls.push_back(cock[heights[i]]);
        }
        return balls;
    }
};