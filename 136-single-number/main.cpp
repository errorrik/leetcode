#include <iostream>
#include <vector>
#include "Solution_s.cpp"

int main() {
    int nums[] = {17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6};
    //int nums[] = { 1,2,3,3,1 };
    size_t count = sizeof(nums) / sizeof(int);
    std::vector<int> v(nums, nums + count);

    Solution s;
    std::cout << s.singleNumber(v) << std::endl;
    return 0;
}