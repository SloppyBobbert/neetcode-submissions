using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string balls = "";
        for(int i = 0; i < strs.size(); ++i){
                    //unsigned int fucklawjay = strs[i].size();
            balls += (char)strs[i].size();
            balls += strs[i];
        }
        return balls;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        //string balls = "";
       // int cur_index = 0;
        unsigned int length = 0;
        for(int str_i = 0; str_i < s.size(); ++str_i){
            length = s[str_i];
            strs.push_back(s.substr(str_i+1, length));
            str_i += length;
        }
        return strs;
    }
};
