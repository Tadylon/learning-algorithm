#include <iostream>
#include <vector>
#include <algorithm>



class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

void printNum(int i)
{
    std::cout << i << " ";
}
int main()
{
    Solution sl;
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    auto result = sl.twoSum(nums, target);
    std::cout << "the result of this is :" << std::endl;
    std::for_each(result.begin(),result.end(),printNum);
    return 0;
}