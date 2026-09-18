class Solution {
   public:
    int reverse(int x) {
        bool sign = (x < 0);


        int ret = 0;

        while (x != 0) {
            int digit = x% 10;
            x /= 10;

            if ((ret > INT_MAX / 10) || ((ret == INT_MAX / 10) && digit > 7)) {
                return 0;
            }
            if ((ret < INT_MIN / 10) || ((ret == INT_MIN / 10) && digit < -8)) {
                return 0;
            }
            ret = ret * 10 + digit; 
        }


        return ret;
    }
};
