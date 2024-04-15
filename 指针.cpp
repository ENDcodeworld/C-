#include<iostream>
using namespace std;

//int main()
//{
//	//指针定义
//	int a = 10;
//	int* p;
//	p= &a;//p是指针，取a的地址，存放在p中
//	cout << &a << endl;
//	cout << (int)p << endl;
//
//	//指针使用
//	//使用*号能使指针指向该地址内存的数据
//	//可以通过*p改变该地址数据的量
//	*p = 100;
//	cout << "a = " << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//指针占用的字长
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(p) = " << sizeof(p) << endl;
//	cout << "sizeof(int *) = " << sizeof(int *) << endl;
//	//p和int*是一样的
//	cout << "sizeof(char *) = " << sizeof(char *) << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//空指针
//	int* p = NULL;
//
//	//空指针是不允许访问的
//	//内存编号0~255是系统内存，不允许访问,例如：	*p = 100;
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//指针定义
//	int a = 10;
//	int* p;
//	p= &a;//p是指针，取a的地址，存放在p中
//	cout << &a << endl;
//	cout << (int)p << endl;
//
//	//指针使用
//	//使用*号能使指针指向该地址内存的数据
//	//可以通过*p改变该地址数据的量
//	*p = 100;
//	cout << "a = " << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//指针占用的字长
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(p) = " << sizeof(p) << endl;
//	cout << "sizeof(int *) = " << sizeof(int *) << endl;
//	//p和int*是一样的
//	cout << "sizeof(char *) = " << sizeof(char *) << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//空指针
//	int* p = NULL;
//
//	//空指针是不允许访问的
//	//内存编号0~255是系统内存，不允许访问,例如：	*p = 100;
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}



//int main()
//{
//	//野指针：指针变量指向非法的内存空间
//	int* p = (int*)0x0111;
//	cout << * p << endl;
//
//	system("pause");
//	return 0;
//}
//空指针和野指针都不是我们申请的空间，不要去访问


//const常数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//常量指针
//	//只能改变地址不能改变值
//	const int* p = &a;
//	p = &b;
//	//*p = 38；错
//	cout << p << endl;
//
//	//指针常量
//	//不能改变地址可以改变值
//	int* const s = &b;
//	*s = 40;
//	//s = &a;错
//	cout << *s << endl;
//
//	//const修饰常量和指针
//	//值和地址都不能改变
//	int c = 30;
//	const int* const z = &c;
//	//z = &a;错
//	//*z = 50;错
//
//
//	system("pause");
//	return 0;
//}

//指针和数组
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//
//
//	system("pause");
//	return 0;
//}

//指针和函数
//void add(int* p, int* s)
//{
//	int temp = *p;
//	*p = *s;
//	*s = temp;
//	
//}
//
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int* c = &a;
//	int* d = &b;
//	 add(c, d);
//
//	 cout << a << endl;
//	 cout << b << endl;
//	 //指针传递会改变实参的值
//
//	system("pause");
//	return 0;
//}

//指针与冒泡排序
void bobblesort(int* p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;

			}
		}
	}

}


int main()
{
	int arr[7] = { 4,2,8,5,3,0,7 };
	int* p = arr;
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	bobblesort(arr, len);

	for (int i = 0; i < 7; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}