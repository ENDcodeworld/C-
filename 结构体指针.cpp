#include<iostream>
#include<string>
using namespace std;


struct stu {
	string name;
	int score;

};

int main()
{
	stu s1 = { "����",76 };
	//ָ��ָ��ṹ�������ַ
	 stu* p = &s1;
	 //��ָ��ָ��Ľṹ�������ԱҪ��->������
	 cout << p->name << " " << p->score << endl;

	system("pause");
	return 0;
}