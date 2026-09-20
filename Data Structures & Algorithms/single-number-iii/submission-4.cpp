class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int x_balls = 0;
        for(int i : nums){
            x_balls ^= i;
        }

        int a = 0;
        int b = 0;
        int x_or_bit = 1;

        while((x_balls & x_or_bit) ==  0){
                x_or_bit <<= 1;
        }

        for (int i : nums){
            if((i & x_or_bit) == 0){
                a ^= i;
            }else{
                b ^= i;
            }
        }
        return {a, b};            

        
    }
};