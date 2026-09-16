class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) return 0;
        short balls[26] = {};
        for(int i = 0; i < s.size(); ++i){
            balls[s[i] - 'a']++;
            balls[t[i] - 'a']--;

        }
        for(short v : balls) if (v != 0) return 0;
        return 1;
    }
};
