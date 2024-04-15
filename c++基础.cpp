#include<iostream>
#include<ctime>


using namespace std;

//int main()
//{
//
//	int num[] = { 1,2,3,4,5 };
//	int val = 3;
//	
//
//	int a = 19;
//	
//	int b = 2;
//	cout << a + b << endl;
//
//	system("pause");
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cin >> score;
//	cout << "你的成绩是：" << score << endl;
//	if (score > 450)
//	{
//
//		cout << "恭喜你考上了985" << endl;
//
//	}
//	else
//	{
//		cout << "恭喜你 人生迎来一片坎坷" << endl;
//
//	}
//	system("pause");
//
//	return 0;
//}

//int main()
//{
//	int piga = 0;
//	int pigb = 0;
//	int pigc = 0;
//	cin >> piga;
//	cin >> pigb;
//	cin >> pigc;
//	if (piga > pigb && piga < pigc)
//	{
//		cout << "A小猪最重" << endl;
//
//	}
//	else if (pigb > piga && pigb > pigc)
//	{
//		cout << "B小猪最重" << endl;
//
//	}
//	else
//	{
//		cout << "C小猪最重" << endl;
//
//	}
//
//	system("pause");
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = 0;
//	c = (a > b ? a : b);//三目运算符
//	cout << c << endl;
//	(++a < b ? a : b) += c;//++a后的结果和c相加
//	
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	cout << "选择你的书" << endl;
//	char book = 'a';
//	cin >> book;
//	
//	switch (book)
//	{
//	case 'm':cout << "毛泽东选集" << endl;
//		break;
//	case 's':cout << "史记" << endl;
//		break;
//	case 'w':cout << "王阳明心学" << endl;
//		break;
//	case 'x':cout << "西游记" << endl;
//		break;
//	default:cout << "其他书" << endl;
//		break;
//	}
//
//
//	system("pause");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//
//	while (a < 10)
//	{
//		
//		cout << "a = " << a << endl;
//		a++;
//
//	}
//
//
//	system("pause");
//
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	int num = rand() % 100+1;//系统生成随机数rand()% 整数
//	//cout << num << endl;
//
//	int guess = 0;
//	
//
//	while (1)
//	{
//		cin >> guess;//输入要放进循环，不然会一直循环第一个数
//		if (guess > num)
//		{
//			cout << "猜大了" << endl;
//			
//		}
//		else if (guess < num)
//		{
//			cout << "猜小了" << endl;
//			
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	do
//	{
//		cout << a << endl;
//		a++;
//
//	} while (a);
//
//	system("pause");
//	return 0;
//}


//int main()
//{//水仙花数
//	int num = 100;//三位数
//
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//
//		if ( a*a*a + b*b*b + c*c*c == num)//要用==号，而不能用=号
//		{
//			cout << num << endl;
//		}
//
//		num++;//从100~999循环下去
//
//	} while (num < 1000);
//
//	system("pause");
//
//	return 0;
//}

//int main()//抽奖
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
//		{
//			cout << "恭喜你中奖了" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";//星图
//		
//		}
//
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "* " << i << "= " << i * j << " ";//加空格是为了看起来和上一个式子不粘在一起
//
//		}
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int skill = 0;
//	cin >> skill;
//
//	switch (skill)
//	{
//	case 1:cout << "斩钢闪" << endl;
//		break;
//	case 2:cout << "风墙" << endl;
//		break;
//	case 3:cout << "e往无前" << endl;
//		break;
//	case 4:cout << "狂风绝息斩" << endl;
//		break;
//	}//游戏技能
//
//	system("pause");
//	return 0;
//}


//int main()
//{//break的应用
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 4)
//		{
//			break;
//		}
//		cout << i << endl;
//
//	}
//
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int j = 0; j < 9; j++)
//	{
//		for (int k = 0; k < 9; k++)
//		{
//			if (k == 5)
//			{
//				break;
//			}
//			cout << k ;
// 		}
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}

