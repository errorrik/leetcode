#include <vector>
using std::vector;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count[32] = {0};
        int result = 0;
                
        for (int i = 0; i < 32; i++) {
            vector<int>::iterator begin = nums.begin();
            vector<int>::iterator end = nums.end();

            while (begin != end) {
                if ((*begin >> i) & 1) {
                    count[i]++;
                }

                begin++;
            }

            if (count[i] % 3) {
                result |= 1 << i;
            }
        }

        return result;
    }
};