#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string encode(const vector<string> &strs) {
    string result;
    for (const string &str : strs) {
      result += to_string(str.size()) + '#' + str;
    }
    return result;
  }

  vector<string> decode(const string &s) {
    vector<string> result;
    for (size_t i = 0; i < s.size();) {
      size_t delim = s.find('#', i);
      int size = stoi(s.substr(i, delim - i));
      const size_t start = delim + 1;
      result.push_back(s.substr(start, size));
      i = start + size;
    }
    return result;
  }
};