#include<iostream>
using namespace std;

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "������ĳ��ȣ�" << sizeof(arr) << endl;
//	cout << "�������һ�����ĳ��ȣ�" << sizeof(arr[0]) << endl;
//	cout << "������ĸ������٣�" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	cout << "����Ԫ�صĵ�ַ" << (int)arr << endl;
//	cout << "���һ��Ԫ�صĵ�ַ" << (int)&arr[0] << endl;
//
//	cout << "��ڶ���Ԫ�صĵ�ַ" << (int)&arr[1] << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{//�ҳ����ص�һֻ��
//	int max = 0;//ȡһ�����ֵ
//	int pig[5] = { 300,350,200,400,250 };
//	for (int i = 0; i < 4; i++)
//	{
//		int k = i;//kΪ��һ��Ԫ�أ�Ȼ��͵ڶ���Ԫ�رȽ�
//		if (pig[k] < pig[i + 1])
//		{
//			max = pig[i + 1];//���������ֵ��max
//		}
//	}
//	cout << "���ص�һͷ���ǣ�" << max << endl;
//
//
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	//��ӡ����ǰ������
//	cout << "��ӡǰ�����飺" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		
//		cout  << arr[i] << endl;
//	}
//	//��ʼ��������Ԫ��
//	//��ȷ����ʼֵ�ͽ���ֵ
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	//ѭ�����л�����ֱ��start����end����
//	while (start < end)
//	{
//		int temp = arr[start];//ȷ����ʱ���м�ֵtemp���л���
//		arr[start] = arr[end];
//		arr[end] = temp;
//		//���һ�ֻ�������еڶ��ֻ�����ǰ��++������--
//		start++;
//		end--;
//	}
//	//��ӡ�����������
//	cout << "����������飺" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout  << arr[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{//ð������
//	int arr[9] = { 2,5,3,8,1,0,4,7,9 };
//	//9-1����Ϊ���������Ԫ�ظ���������-1
//	//ð��������һ��һ���бȽ�
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
//	//����������
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

//��ά���鶨�巽ʽ
//int main()
//{
//	//��һ��
//	int arr[2][3];
//	arr[0][0] = 1;
//	cout << arr[0][0] << endl;
//
//	//�ڶ��֣���Ϊ�Ƽ���
//	int arr1[2][3] =
//	{
//		{ 1, 2, 3 },//�ǵüӶ���
//	    { 4, 5, 6 }
//	};
//
//	//������
//	int arr2[2][3] = { 1,2,3,4,5,6 };
//
//	//������
//	int arr3[][3] = { 1,2,3,4,5,6 };
//
//	system("pause");
//
//	return 0;
//
//}

//��ά���� ��������
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//
//	};
//	
//	//�󳤶�
//	cout << "������ĳ��ȣ�" << sizeof(arr) << endl;
//	cout << "����Ԫ�صĳ��ȣ�" << sizeof(arr[0]) << endl;
//	cout << "��������" << sizeof(arr) / sizeof(arr[0]) << endl;;
//	cout << "��������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;;
//
//	//���ַ
//	cout << "��Ԫ�أ�" << (int)arr << endl;
//	cout << "��һ��Ԫ�أ�" << (int)&arr[0][0] << endl;
//	cout << "��һ��Ԫ�أ�" << (int)arr[0] << endl;
//
//	system("pause");
//	return 0;
//}

//���Գɼ�ͳ��
string name[3] = { "����","����","����" };

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
		cout<< name[i] << "�ܳɼ��ǣ�" << sum << endl;

	}
	
	system("pause");
	return 0;
}