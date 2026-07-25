#include <iostream>
#include <algorithm>
#include <vector>

void myPrint(int val)
{
	std::cout << val << " ";
}

void test01() {
	std::vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(1);
	v.push_back(500);

	//sort默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	std::cout << std::endl;

	//从大到小排序
	sort(v.begin(), v.end(), std::greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	std::cout << std::endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
