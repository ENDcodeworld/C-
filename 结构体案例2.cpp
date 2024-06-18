#include<iostream>
#include<string>

using namespace std;

//按年龄从低到高排名五位英雄

//建立英雄结构体
struct hero {

	string name;
	int age;
	string sex;

};

//使用冒泡排序对年龄进行升序排序
void bubblesort(struct hero array[5], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			int k = j+1;
			if (array[j].age < array[k].age)
			{
				struct hero temp = array[j];
				array[j]= array[k];
				array[k]= temp;
			}//注意转换是整个数组的值一起换，不要像我只换年龄

		}
	}

}

int main()
{
	//五位英雄定为数组
	struct hero array[5] =
	{
		{"刘备",23,"男"},
		{"关羽",13,"男"},
		{"张飞",20,"男"},
		{"赵云",28,"男"},
		{"貂蝉",19,"女"},
	};
	//求数组长度
	int len = sizeof(array)/ sizeof(array)[0];
	//转换前
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << array[i].name
			<< "\ 年龄：" << array[i].age
			<< "\ 性别：" << array[i].sex << endl;
	}
	//转换后
	bubblesort(array, len);

	cout << "\n" << endl;

	//打印输出看看变化
	for (int j = 0; j < len; j++)
	{

		cout << "姓名：" << array[j].name
			<< "\ 年龄：" << array[j].age
			<< "\ 性别：" << array[j].sex << endl;
	}
	system("pause");
	return 0;
}