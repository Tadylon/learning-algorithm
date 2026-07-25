#include <iostream>
#include <algorithm>
#include <vector>

#include "print_.h"

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
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i+100);
	}

	std::cout << "before : \n";
    std::cout << "v1 : ";
	std::for_each(v1.begin(), v1.end(), myPrint());
	std::cout << std::endl;
    std::cout << "v2 : ";
	std::for_each(v2.begin(), v2.end(), myPrint());
	std::cout << std::endl;

	std::cout << "after : \n";
	std::swap(v1, v2);
    std::cout << "v1 : ";
	std::for_each(v1.begin(), v1.end(), myPrint());
	std::cout << std::endl;
    std::cout << "v2 : ";
	std::for_each(v2.begin(), v2.end(), myPrint());
	std::cout << std::endl;
}

int main() {

	test01();

	// system("pause");

	return 0;
}
