#include <iostream>
// using namespace std;
#include <algorithm>
#include <vector>

void test01()
{
	std::vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//二分查找
	bool ret = binary_search(v.begin(), v.end(),2);
	if (ret)
	{
		std::cout << "found it ! " << std::endl;
	}
	else
	{
		std::cout << "not found ! " << std::endl;
	}
}

int main() {

	test01();

	system("pause");

	return 0;
}

