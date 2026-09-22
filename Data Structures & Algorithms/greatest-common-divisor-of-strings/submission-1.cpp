class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string x = "";
        if(str1 + str2 != str2+str1) return x;

 //       for(int i = 0; i < str1.size(); ++i){
 //           if(str1[i] != str2[i]){
   //             return x;
     //       }
      //      x += str1[i];
       // }

        int len1 = str1.size();
        int len2 = str2.size();

        int gcdnum = gcd(len1, len2);

        return str1.substr(0, gcdnum);
    }
};