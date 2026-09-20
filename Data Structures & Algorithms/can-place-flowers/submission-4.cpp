class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;

        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 0) {
                count++;
            }
            return count >= n;
        }

        if (!flowerbed[0] && !flowerbed[1]) {
            flowerbed[0] = 1;
            count++;
        }

        for (int i = 1; i < flowerbed.size() - 1; ++i) {
            if (!flowerbed[i - 1] && !flowerbed[i] && !flowerbed[i + 1]) {
                flowerbed[i] = 1;
                count++;
            }
        }

        int last = flowerbed.size() - 1;

        if (!flowerbed[last] && !flowerbed[last - 1]) {
            flowerbed[last] = 1;
            count++;
        }

        return count >= n;
    }
};