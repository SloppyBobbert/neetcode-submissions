class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 == str2){
            return str1;
        }    
        if(str1 + str2 != str2 + str1){
            return "";
        }
        int sizes = str1.size() - str2.size();

        int size1 = str1.size();
        int size2 = str2.size();

        while (size1 != size2) {
            if (size1 > size2) {
                size1 -= size2;
            }
            else {
                size2 -= size1;
            }
        }

        return str1.substr(0, size1);

    }
};