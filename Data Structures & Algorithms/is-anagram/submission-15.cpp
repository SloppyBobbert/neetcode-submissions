class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) return false;
        int balls[26] = {};
        for(int i = 0; i < s.size(); ++i){
            balls[s[i] - 'a']++;
            balls[t[i] - 'a']--;

        }
        for(int v : balls) if (v != 0) return false;
        return true;
    }
};
