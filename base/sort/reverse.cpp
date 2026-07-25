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
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
    
	std::cout << "before reverse : " << std::endl;
	for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;

	std::cout << "after reverse : " << std::endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
