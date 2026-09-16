#include <string>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;
        for (int i = 0; i < strs.size(); ++i){
            string st = strs[i];
            sort(st.begin(), st.end());
            maps[st].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto& pair : maps){
            ans.push_back(pair.second);
        }

        return ans;
        
    }
};
