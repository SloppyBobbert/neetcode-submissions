class Solution {
public:
  vector<int> majorityElement(const vector<int> &nums) {
    const int minimum = nums.size() / 3;
    unordered_map<int, int> count;

    unordered_set<int> set;
    for (const int num : nums) {
        count[num] += 1;
        if (count[num] > minimum) {
            set.insert(num);
        }
    }
    vector<int> res;
    for (const int num : set) {
        res.push_back(num);
    }
    return res;
  }
}; 
        
