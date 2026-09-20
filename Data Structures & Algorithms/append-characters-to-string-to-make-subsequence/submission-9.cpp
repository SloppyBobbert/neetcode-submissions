class Solution {
public:
    int appendCharacters(string s, string t) {
        int found = 0;
        int t_found = 0;
        for(char c : s){
            if(c != t[t_found]){
                continue;
            }
            t_found++;
        }
        return t.size() - t_found;
       
       
       
       
       
        
    }
};