#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <iterator>

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	//查找相邻重复元素
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		cout << "not found ! " << endl;
	}
	else {
        int index = distance(v.begin(),it );
		cout << "the same elements are : " << *it << endl;
        cout << "index" << index << "  ";
	}

    cout << "the number in v are :  " << endl;
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << "  ";
    }
}

int main(){
    test01();
    system("pause");
    return 0;
}
