#include <iostream>
#include <algorithm>
#include <vector>

class Greater4
{
public:
	bool operator()(int val)
	{
		return val >= 4;
	}
};

//内置数据类型
void test01()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), Greater4());

	std::cout << "the numbers of  " << num << std::endl;
}

//自定义数据类型
class Person
{
public:
	Person(std::string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	std::string m_Name;
	int m_Age;
};

class AgeLess35
{
public:
	bool operator()(const Person &p)
	{
		return p.m_Age < 35;
	}
};
void test02()
{
	std::vector<Person> v;

	Person p1("person 1", 35);
	Person p2("person 2", 35);
	Person p3("person 3", 35);
	Person p4("person 4", 30);
	Person p5("person 5", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeLess35());
	std::cout << "the age smaller than 35 are : " << num << std::endl;
}


int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}
