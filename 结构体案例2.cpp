#include<iostream>
#include<string>

using namespace std;

//������ӵ͵���������λӢ��

//����Ӣ�۽ṹ��
struct hero {

	string name;
	int age;
	string sex;

};

//ʹ��ð����������������������
void bubblesort(struct hero array[5], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			int k = j+1;
			if (array[j].age < array[k].age)
			{
				struct hero temp = array[j];
				array[j]= array[k];
				array[k]= temp;
			}//ע��ת�������������ֵһ�𻻣���Ҫ����ֻ������

		}
	}

}

int main()
{
	//��λӢ�۶�Ϊ����
	struct hero array[5] =
	{
		{"����",23,"��"},
		{"����",13,"��"},
		{"�ŷ�",20,"��"},
		{"����",28,"��"},
		{"����",19,"Ů"},
	};
	//�����鳤��
	int len = sizeof(array)/ sizeof(array)[0];
	//ת��ǰ
	for (int i = 0; i < len; i++)
	{
		cout << "������" << array[i].name
			<< "\ ���䣺" << array[i].age
			<< "\ �Ա�" << array[i].sex << endl;
	}
	//ת����
	bubblesort(array, len);

	cout << "\n" << endl;

	//��ӡ��������仯
	for (int j = 0; j < len; j++)
	{

		cout << "������" << array[j].name
			<< "\ ���䣺" << array[j].age
			<< "\ �Ա�" << array[j].sex << endl;
	}
	system("pause");
	return 0;
}