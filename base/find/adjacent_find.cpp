#include <iostream>
// using namespace std;
#include <algorithm>
#include <vector>
#include <iterator>

void test01()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	//查找相邻重复元素
	std::vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		std::cout << "not found ! " << std::endl;
	}
	else {
        int index = distance(v.begin(),it );
		std::cout << "the same elements are : " << *it << std::endl;
        std::cout << "index" << index << "  ";
	}

    std::cout << "the number in v are :  " << std::endl;
    for (auto iter = v.begin(); iter != v.end(); iter++) {
        std::cout << *iter << "  ";
    }
}

int main(){
    test01();
    system("pause");
    return 0;
}
