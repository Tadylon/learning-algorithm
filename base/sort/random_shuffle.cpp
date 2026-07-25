#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <random>

class myPrint
{
public:
	void operator()(int val)
	{
		std::cout << val << " ";
	}
};

void test01()
{
	srand((unsigned int)time(NULL));
	std::vector<int> v;
	for(int i = 0 ; i < 10;i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;

	//打乱顺序
    // 使用 std::shuffle 替代 random_shuffle
    //std::random_shuffle(v.begin(), v.end());
    //这个已经被cpp20弃用了

    std::random_device rd;
    std::mt19937 g(rd());  // 使用 Mersenne Twister 引擎
    std::shuffle(v.begin(), v.end(), g);

	for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
