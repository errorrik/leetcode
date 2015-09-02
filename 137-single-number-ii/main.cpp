#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    int nums[] = { 1 };
    size_t count = sizeof(nums) / sizeof(int);
    std::vector<int> v(nums, nums + count);

    Solution s;
    std::cout << s.singleNumber(v) << std::endl;
    return 0;
}