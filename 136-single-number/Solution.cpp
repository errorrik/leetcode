#include <vector>
#include <map>
#include <stdexcept>

using std::vector;
using std::map;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> record;

        vector<int>::iterator begin = nums.begin();
        vector<int>::iterator end = nums.end();

        // record
        while (begin != end) {
            map<int, int>::iterator existsNum = record.find(*begin);
            if (existsNum != record.end()) {
                existsNum->second = 2;
            }
            else {
                record.insert(map<int, int>::value_type(*begin, 1));
            }

            begin++;
        }

        // check
        map<int, int>::iterator recordWorker = record.begin();
        while (recordWorker != record.end()) {
            if (recordWorker->second == 1) {
                return recordWorker->first;
            }

            recordWorker++;
        }

        throw std::runtime_error("not found");
    }
};