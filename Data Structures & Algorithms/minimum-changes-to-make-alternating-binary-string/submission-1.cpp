class Solution {
public:
    int minOperations(string s) {
        int changes = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] != '0') {
                    changes++;
                }
            } else {
                if (s[i] != '1') {
                    changes++;
                }
            }
        }

        return min(changes, (int)s.size() - changes);
    }
};