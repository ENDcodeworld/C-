#include<iostream>
using namespace std;

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "求数组的长度：" << sizeof(arr) << endl;
//	cout << "求数组第一个数的长度：" << sizeof(arr[0]) << endl;
//	cout << "求数组的个数多少：" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	cout << "求首元素的地址" << (int)arr << endl;
//	cout << "求第一个元素的地址" << (int)&arr[0] << endl;
//
//	cout << "求第二个元素的地址" << (int)&arr[1] << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{//找出最重的一只猪
//	int max = 0;//取一个最大值
//	int pig[5] = { 300,350,200,400,250 };
//	for (int i = 0; i < 4; i++)
//	{
//		int k = i;//k为第一个元素，然后和第二个元素比较
//		if (pig[k] < pig[i + 1])
//		{
//			max = pig[i + 1];//如果大于则赋值到max
//		}
//	}
//	cout << "最重的一头猪是：" << max << endl;
//
//
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	//打印逆置前的数组
//	cout << "打印前的数组：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		
//		cout  << arr[i] << endl;
//	}
//	//开始互换数组元素
//	//先确立起始值和结束值
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	//循环进行互换，直到start等于end结束
//	while (start < end)
//	{
//		int temp = arr[start];//确立暂时的中间值temp进行互换
//		arr[start] = arr[end];
//		arr[end] = temp;
//		//完成一轮互换后进行第二轮互换，前面++，后面--
//		start++;
//		end--;
//	}
//	//打印互换后的数组
//	cout << "互换后的数组：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout  << arr[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{//冒泡排序
//	int arr[9] = { 2,5,3,8,1,0,4,7,9 };
//	//9-1是因为排序次数是元素个数的总数-1
//	//冒泡排序是一对一进行比较
//	for (int i = 0; i < 9 - 1; i++)
//	{
//		for (int j = 0; j < 9 - i - 1; j++)
//		{
//			if (arr[j] > arr[ j+1 ])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		  
//		}
//
//	}
//	//排序后的数组
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << ' ';
//
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//二维数组定义方式
//int main()
//{
//	//第一种
//	int arr[2][3];
//	arr[0][0] = 1;
//	cout << arr[0][0] << endl;
//
//	//第二种（最为推荐）
//	int arr1[2][3] =
//	{
//		{ 1, 2, 3 },//记得加逗号
//	    { 4, 5, 6 }
//	};
//
//	//第三种
//	int arr2[2][3] = { 1,2,3,4,5,6 };
//
//	//第四种
//	int arr3[][3] = { 1,2,3,4,5,6 };
//
//	system("pause");
//
//	return 0;
//
//}

//二维数组 —数组名
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//
//	};
//	
//	//求长度
//	cout << "求数组的长度：" << sizeof(arr) << endl;
//	cout << "求首元素的长度：" << sizeof(arr[0]) << endl;
//	cout << "求行数：" << sizeof(arr) / sizeof(arr[0]) << endl;;
//	cout << "求列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;;
//
//	//求地址
//	cout << "首元素：" << (int)arr << endl;
//	cout << "第一个元素：" << (int)&arr[0][0] << endl;
//	cout << "第一列元素：" << (int)arr[0] << endl;
//
//	system("pause");
//	return 0;
//}

//考试成绩统计
string name[3] = { "张三","李四","王五" };

int main()
{
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}

	};
      int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			sum	+= scores[i][j];
			
		}
		cout<< name[i] << "总成绩是：" << sum << endl;

	}
	
	system("pause");
	return 0;
}