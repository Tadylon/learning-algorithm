#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    int maxProduct(int n) {
        auto s = std::to_string(n);
        std::partial_sort(s.begin(),s.begin()+2,s.end(),std::greater<char>());
        return (s[0]-'0')*(s[1]-'0');
    }
};

int main()
{
    Solution soul;
    auto result = soul.maxProduct(32);
    std::cout << result << std::endl;
    auto result_1 = soul.maxProduct(34382);
    std::cout << result_1 << std::endl;
    return 0;
}



















