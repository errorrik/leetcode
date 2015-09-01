#include <vector>

using std::vector;

// 相同的数，异或两次会抵消
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        vector<int>::iterator begin = nums.begin();
        vector<int>::iterator end = nums.end();

        while (begin != end) {
            result ^= *begin;

            begin++;
        }

        return result;
    }
};