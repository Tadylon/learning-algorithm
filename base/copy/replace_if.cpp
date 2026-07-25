#include <iostream>
#include <algorithm>
#include <vector>

class myPrint
{
public:
	void operator()(int val)
	{
		std::cout << val << " ";
	}
};

class ReplaceGreater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}

};

void test01()
{
	std::vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	std::cout << "before replace : " << std::endl;
	std::for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;

    //将容器中大于等于的30 替换成 3000
	std::cout << "after replace : " << std::endl;
	std::replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
	std::for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
