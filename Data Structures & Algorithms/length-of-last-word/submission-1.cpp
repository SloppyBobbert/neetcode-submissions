class Solution {
public:
    int lengthOfLastWord(string s) {

        int count = 0;
        int start = 0;
        if (s.size() == 1) return 1;
        for(int i = s.size() - 1; i > 0; --i){
            if (s[i] != ' '){
                count++;
                start = 1;
                continue;
            }
            if (s[i] == ' '){
                if(start == 1)
                    break;
            }
        }
        return count;
        
    }
};