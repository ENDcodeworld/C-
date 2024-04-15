#include<iostream>
using namespace std;

//建立一个函数
//返回值类型 函数名（参数列表）
//{函数体
// 返回值
// }
//int sub(int num1, int num2)//这里的num1和num2是形式参数，简称形参
//{
//	int sum = num1 - num2;
//
//
//	return sum;
//}
//
//int main()
//{
//
//	int a = 50;
//	int b = 10;
//	int c = sub(a, b);//函数调用
//	//这里的（a，b）是实际参数，简称实参
//	//c的值是返回值sum
//	cout << "c = " << c << endl;
//
//	a = 600;
//	b = 100;
//	c = sub(a, b);//每次给出值不一样调用的结果也不一样
//	//这种函数能方便计算
//	cout << "c = " << c << endl;
//
//	system("pause");
//	return 0;
//}

//void tran(int sum1, int sum2)
//{
//	int temp = sum1;
//	sum1 = sum2;
//	sum2 = temp;
//	//值交换
//
//}
//
//
//int main()
//{
//	int a = 10; 
//	int b = 20;
//
//	tran(a, b);
//	//值传递：形参改变不影响实参
//	//形参和实参不是同一个数
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}


//函数的常见样式
//无参无返
//void test1()
//{
//	cout << "请输入：" << endl;
//	char a[26];
//	cin >> a;
//	cout << "THE QUANTUM UNIVERSE a = "<< a << endl;
//}
//
////无参有返
//int test2()
//{
//	int a = 20;
//	return a;
//}
//
////有参无返
//void test3(int num1)
//{
//	cout << "THE QUANTUM UNIVERSE a" << num1 << endl;
//
//}
//
////有参有返
//int test4(int num2)
//{
//	int z = 1;
//	z += num2;
//	cout << "c++ is gad" << endl;
//
//	return z;
//}
//int main()
//{
//	//无参无返
//	//test1();
//	//无参有返
//	int b = test2();//有返就有值，需要建立一个变量来接收
//	cout << "b = " << b << endl;
//	//有参无返
//	int a = 10;
//	test3(a);
//	//有参有返
//	int c = test4(a);
//	cout << "c = " << c << endl;
//
//	system("pause");
//	return 0;
//}


//函数的声明与定义
//声明可以多次，定义只能一次
//在主函数后面的要先声明才能使用
//int cmp(int x, int y);//声明
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	 
//	cout << cmp(a, b) << endl;
//
//	system("pause");
//	return 0;
//}
//
//int cmp(int x, int y)
//{
//	return x > y ? x: y;
//		
//}
//
