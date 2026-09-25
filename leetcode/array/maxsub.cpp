#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globel_value = nums[0];
        int maxvalue = nums[0];
        int size = nums.size();
        for (int i=1;i<size;++i) {
            maxvalue = max(maxvalue,maxvalue+nums[i]);
            globel_value = max(globel_value,maxvalue);
        }
        return globel_value;
    }
};

int main()
{
    Solution sol;
    vector<int> test1 = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> test2 = {-1};
    auto result1 = sol.maxSubArray(test1);
    auto result2 = sol.maxSubArray(test2);
    return 0;
}
