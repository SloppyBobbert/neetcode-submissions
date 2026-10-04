class Solution {
public:
    int strStr(string haystack, string needle) {
        int emilyShitHerPants = haystack.find(needle, 0);
        if(emilyShitHerPants == string::npos){
            return -1;
        }
        return emilyShitHerPants;
    }
};