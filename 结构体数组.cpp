#include<iostream>
using namespace std;
#include<string>

int main()
{
	//����ṹ��
	struct sdu {
		string name;
		int score;
	};
	//�ṹ������
	sdu arrry[3] = {
		{"�żҽ�",60},
		{"�Ź���",90},
		{"������",70},
	};
	//���ṹ�����鸳ֵ
	arrry[1].name = "�Ŵ���";
	arrry[2].score = 29;

	//��ӡ���
	for (int i = 0; i < 3; i++)
	{
		cout << arrry[i].name << arrry[i].score << endl;
	}

	system("pause");
	return 0;
}