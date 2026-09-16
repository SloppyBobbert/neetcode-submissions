class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int lowest = prices[0];

        for(int p : prices){
            profit = max(p - lowest, profit);
            lowest = min(lowest, p);
        }

        return profit; 
        
    }
};
