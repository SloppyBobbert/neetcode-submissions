class Solution {
public:

    string encode(vector<string>& strs) {
        string balls = "";
        for(int i = 0; i < strs.size(); ++i){
            balls += (char)strs[i].size();
            balls += strs[i];
        }
        return balls;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int length = 0;
        for(int str_i = 0; str_i < s.size(); ++str_i){
            length = s[str_i];
            strs.push_back(s.substr(str_i+1, length));
            str_i += length;
        }
        return strs;
    }
};
