#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

//init this type of data
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void printvector(std::vector<int>& v){
    std::cout << "the number in this iterator is : " << std::endl;
    for (std::vector<int>::iterator test = v.begin(); test != v.end(); test++) {
        std::cout << *test << "   ";
    }

}

void test01() {

	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	}
    printvector(v);

	std::vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		std::cout << "not found ! " << std::endl;
	}
	else {
		std::cout << "the number is larger than 5 : " << *it << std::endl;
	}
}

//自定义数据类型
class Person {
public:
	Person(std::string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	std::string m_Name;
	int m_Age;
};

class Greater20
{
public:
	bool operator()(Person &p)
	{
		return p.m_Age > 20;
	}

};

void test02() {

	std::vector<Person> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	std::vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
    for (int i =0 ; i < v.size(); i++) {
        if (it == v.end())
        {
            std::cout << "没有找到!" << std::endl;
        }
        else
        {
            std::cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << std::endl;
        }
    }
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}
