class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int balls = heights.size();
        vector<int> l_sack(balls, -1);
        vector<int> r_sack(balls, balls);
        stack<int> stack;

        for (int i = 0; i < balls; ++i) {
            while (!stack.empty() && heights[stack.top()] >= heights[i]) {
                stack.pop();
            }
            if (!stack.empty()) {
                l_sack[i] = stack.top();
            }
            stack.push(i);
        }

        while (!stack.empty()) stack.pop();

        for (int i = balls - 1; i >= 0; --i) {
            while (!stack.empty() && heights[stack.top()] >= heights[i]) {
                stack.pop();
            }
            if (!stack.empty()) {
                r_sack[i] = stack.top();
            }
            stack.push(i);
        }

        int maxArea = 0;
        for (int i = 0; i < balls; ++i) {
            l_sack[i] += 1;
            r_sack[i] -= 1;
            maxArea = max(maxArea, heights[i] * (r_sack[i] - l_sack[i]+ 1));
        }

        return maxArea;
    }
};

