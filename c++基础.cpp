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
//	cout << "��ĳɼ��ǣ�" << score << endl;
//	if (score > 450)
//	{
//
//		cout << "��ϲ�㿼����985" << endl;
//
//	}
//	else
//	{
//		cout << "��ϲ�� ����ӭ��һƬ����" << endl;
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
//		cout << "AС������" << endl;
//
//	}
//	else if (pigb > piga && pigb > pigc)
//	{
//		cout << "BС������" << endl;
//
//	}
//	else
//	{
//		cout << "CС������" << endl;
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
//	c = (a > b ? a : b);//��Ŀ�����
//	cout << c << endl;
//	(++a < b ? a : b) += c;//++a��Ľ����c���
//	
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	cout << "ѡ�������" << endl;
//	char book = 'a';
//	cin >> book;
//	
//	switch (book)
//	{
//	case 'm':cout << "ë��ѡ��" << endl;
//		break;
//	case 's':cout << "ʷ��" << endl;
//		break;
//	case 'w':cout << "��������ѧ" << endl;
//		break;
//	case 'x':cout << "���μ�" << endl;
//		break;
//	default:cout << "������" << endl;
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
//	int num = rand() % 100+1;//ϵͳ���������rand()% ����
//	//cout << num << endl;
//
//	int guess = 0;
//	
//
//	while (1)
//	{
//		cin >> guess;//����Ҫ�Ž�ѭ������Ȼ��һֱѭ����һ����
//		if (guess > num)
//		{
//			cout << "�´���" << endl;
//			
//		}
//		else if (guess < num)
//		{
//			cout << "��С��" << endl;
//			
//		}
//		else
//		{
//			cout << "�¶���" << endl;
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
//{//ˮ�ɻ���
//	int num = 100;//��λ��
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
//		if ( a*a*a + b*b*b + c*c*c == num)//Ҫ��==�ţ���������=��
//		{
//			cout << num << endl;
//		}
//
//		num++;//��100~999ѭ����ȥ
//
//	} while (num < 1000);
//
//	system("pause");
//
//	return 0;
//}

//int main()//�齱
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
//		{
//			cout << "��ϲ���н���" << endl;
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
//			cout << "* ";//��ͼ
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
//			cout << j << "* " << i << "= " << i * j << " ";//�ӿո���Ϊ�˿���������һ��ʽ�Ӳ�ճ��һ��
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
//	case 1:cout << "ն����" << endl;
//		break;
//	case 2:cout << "��ǽ" << endl;
//		break;
//	case 3:cout << "e����ǰ" << endl;
//		break;
//	case 4:cout << "����Ϣն" << endl;
//		break;
//	}//��Ϸ����
//
//	system("pause");
//	return 0;
//}


//int main()
//{//break��Ӧ��
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

