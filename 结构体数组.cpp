#include<iostream>
using namespace std;
#include<string>

int main()
{
	//定义结构体
	struct sdu {
		string name;
		int score;
	};
	//结构体数组
	sdu arrry[3] = {
		{"张家界",60},
		{"张国荣",90},
		{"张三丰",70},
	};
	//给结构体数组赋值
	arrry[1].name = "张处长";
	arrry[2].score = 29;

	//打印结果
	for (int i = 0; i < 3; i++)
	{
		cout << arrry[i].name << arrry[i].score << endl;
	}

	system("pause");
	return 0;
}