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

void test01()
{
	std::vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);

	std::cout << "before replace : " << std::endl;
	std::for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;

	//将容器中的20 替换成 2000
	std::cout << "after replace : " << std::endl;
	std::replace(v.begin(), v.end(), 20,2000);
	std::for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
