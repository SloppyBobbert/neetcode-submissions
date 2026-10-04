class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int dirtyjew = -1;
        for(int i = 0; i < prices.size()-1; ++i){
            if(prices[i] >= money){
                continue;
            }
            int temp_dirtyjew = money - prices[i];
            for(int j = i+1; j < prices.size(); ++j){
                if(prices[j] <= temp_dirtyjew)
                    dirtyjew = max(dirtyjew, temp_dirtyjew - prices[j]);
            }
        }
        return (dirtyjew == -1) ? money : dirtyjew;



    }
};