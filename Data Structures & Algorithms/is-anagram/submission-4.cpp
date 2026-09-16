class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> balls(26, 0);

        for(int i = 0; i < s.size(); ++i){
            balls[s[i] - 'a']++;
            balls[t[i] - 'a']--;
        }

        for(int val : balls){
            if (val!= 0) return false;
        }
return true;
        
    }
};
