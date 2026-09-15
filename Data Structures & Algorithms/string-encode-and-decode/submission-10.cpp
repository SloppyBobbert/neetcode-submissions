#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string encode(const vector<string> &strs) {
    string result;
    for (const string &str : strs) {
      char size_char = static_cast<char>(str.size());
      result += size_char;
      result += str;
    }
    return result;
  }

  vector<string> decode(const string &s) {
    vector<string> result;
    for (size_t i = 0; i < s.size();) {
      char size = s[i];
      const size_t start = i + 1;
      result.push_back(s.substr(start, size));
      i = start + size;
    }
    return result;
  }
};