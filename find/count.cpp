#include <iostream>
#include <algorithm>
#include <vector>

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

	int num = count(v.begin(), v.end(), 4);

	std::cout << "4的个数为： " << num << std::endl;
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
	bool operator==(const Person & p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	std::string m_Name;
	int m_Age;
};

void test02()
{
	std::vector<Person> v;

	Person p1("first one ", 35);
	Person p2("second one ", 35);
	Person p3("third one ", 35);
	Person p4("forth one ", 30);
	Person p5("fifth one ", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
    
    Person p("sixth one ",35);

	int num = count(v.begin(), v.end(), p);
    std::cout << "age of p : " << p.m_Age << std::endl;
	std::cout << "num = " << num << std::endl;
    v.push_back(p);
	int num_2 = count(v.begin(), v.end(), p);
	std::cout << "num = " << num_2 << std::endl;

}
int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}
