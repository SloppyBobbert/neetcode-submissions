class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> balls (26, 0);

        if (s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); ++i){
            balls[s[i] - 'a']++;
            balls[t[i] - 'a']--;
        }

        for(int i : balls) if(i != 0) return false;

        return true;
        
    }
};
