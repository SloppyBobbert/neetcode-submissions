class Solution {
public:
    int hammingWeight(uint32_t n) {
        int balls = 0;
        while (n != 0) {


            balls += (n & 1) ? 1 : 0;


//im so drankkkkkk
     n >>=  1;

    }
    return balls;
    }
};
