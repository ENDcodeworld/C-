#include<iostream>
#include<string>
using namespace std;

int main()
{
	//����ṹ��
	struct std
	{
		string name;
		int polite;
		int math;
		int english;
		int computer;
	}s1;
	//����һ
	s1.name = "�ų���";
	s1.polite = 90;
	s1.english = 80;
	s1.computer = 200;
	s1.math = 100;
	// . ����ʡ�ԣ��������ӽṹ���Ա��ֵ
	cout << "������:" << s1.name << " ���γɼ��� " << s1.polite << "��ѧ�ɼ��� " << s1.math << "�������" << s1.computer << "Ӣ��ɼ���" << s1.english << endl;

	//������
	//struct����ʡ��
	std s2 = { "�Ŵ���",55,76,88,64 };
	cout << s2.computer << endl;

	//������
	std s3;
	s3.computer = 199;
	cout << s3.computer << endl;


	system("pause");
	return 0;
}