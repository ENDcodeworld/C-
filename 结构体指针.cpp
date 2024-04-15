#include<iostream>
#include<string>
using namespace std;


struct stu {
	string name;
	int score;

};

int main()
{
	stu s1 = { "橙子",76 };
	//指针指向结构体变量地址
	 stu* p = &s1;
	 //用指针指向的结构体变量成员要用->操作符
	 cout << p->name << " " << p->score << endl;

	system("pause");
	return 0;
}