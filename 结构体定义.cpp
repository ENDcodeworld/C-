#include<iostream>
#include<string>
using namespace std;

int main()
{
	//定义结构体
	struct std
	{
		string name;
		int polite;
		int math;
		int english;
		int computer;
	}s1;
	//方法一
	s1.name = "张橙子";
	s1.polite = 90;
	s1.english = 80;
	s1.computer = 200;
	s1.math = 100;
	// . 不可省略，它是连接结构体成员的值
	cout << "名字是:" << s1.name << " 政治成绩： " << s1.polite << "数学成绩： " << s1.math << "计算机：" << s1.computer << "英语成绩：" << s1.english << endl;

	//方法二
	//struct可以省略
	std s2 = { "张处长",55,76,88,64 };
	cout << s2.computer << endl;

	//方法三
	std s3;
	s3.computer = 199;
	cout << s3.computer << endl;


	system("pause");
	return 0;
}