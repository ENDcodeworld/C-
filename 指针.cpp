#include<iostream>
using namespace std;

//int main()
//{
//	//ָ�붨��
//	int a = 10;
//	int* p;
//	p= &a;//p��ָ�룬ȡa�ĵ�ַ�������p��
//	cout << &a << endl;
//	cout << (int)p << endl;
//
//	//ָ��ʹ��
//	//ʹ��*����ʹָ��ָ��õ�ַ�ڴ������
//	//����ͨ��*p�ı�õ�ַ���ݵ���
//	*p = 100;
//	cout << "a = " << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//ָ��ռ�õ��ֳ�
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(p) = " << sizeof(p) << endl;
//	cout << "sizeof(int *) = " << sizeof(int *) << endl;
//	//p��int*��һ����
//	cout << "sizeof(char *) = " << sizeof(char *) << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//��ָ��
//	int* p = NULL;
//
//	//��ָ���ǲ�������ʵ�
//	//�ڴ���0~255��ϵͳ�ڴ棬���������,���磺	*p = 100;
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//ָ�붨��
//	int a = 10;
//	int* p;
//	p= &a;//p��ָ�룬ȡa�ĵ�ַ�������p��
//	cout << &a << endl;
//	cout << (int)p << endl;
//
//	//ָ��ʹ��
//	//ʹ��*����ʹָ��ָ��õ�ַ�ڴ������
//	//����ͨ��*p�ı�õ�ַ���ݵ���
//	*p = 100;
//	cout << "a = " << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//ָ��ռ�õ��ֳ�
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(p) = " << sizeof(p) << endl;
//	cout << "sizeof(int *) = " << sizeof(int *) << endl;
//	//p��int*��һ����
//	cout << "sizeof(char *) = " << sizeof(char *) << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//��ָ��
//	int* p = NULL;
//
//	//��ָ���ǲ�������ʵ�
//	//�ڴ���0~255��ϵͳ�ڴ棬���������,���磺	*p = 100;
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}



//int main()
//{
//	//Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�
//	int* p = (int*)0x0111;
//	cout << * p << endl;
//
//	system("pause");
//	return 0;
//}
//��ָ���Ұָ�붼������������Ŀռ䣬��Ҫȥ����


//const����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����ָ��
//	//ֻ�ܸı��ַ���ܸı�ֵ
//	const int* p = &a;
//	p = &b;
//	//*p = 38����
//	cout << p << endl;
//
//	//ָ�볣��
//	//���ܸı��ַ���Ըı�ֵ
//	int* const s = &b;
//	*s = 40;
//	//s = &a;��
//	cout << *s << endl;
//
//	//const���γ�����ָ��
//	//ֵ�͵�ַ�����ܸı�
//	int c = 30;
//	const int* const z = &c;
//	//z = &a;��
//	//*z = 50;��
//
//
//	system("pause");
//	return 0;
//}

//ָ�������
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

//ָ��ͺ���
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
//	 //ָ�봫�ݻ�ı�ʵ�ε�ֵ
//
//	system("pause");
//	return 0;
//}

//ָ����ð������
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
	//���鳤��
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