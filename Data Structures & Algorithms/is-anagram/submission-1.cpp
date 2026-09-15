class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_str, t_str;
        if (s.size() != t.size() ) return false;

        for (int i = 0; i < s.size(); ++i){
            s_str[s[i]]++;
            t_str[t[i]]++;
        }
        

        return (s_str == t_str);
    }
};
