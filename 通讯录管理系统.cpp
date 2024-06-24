#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

//�˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "*************************" << endl;
	cout << "*****  1.�����ϵ�� *****" << endl;
	cout << "*****  2.��ʾ��ϵ�� *****" << endl;
	cout << "*****  3.ɾ����ϵ�� *****" << endl;
	cout << "*****  4.������ϵ�� *****" << endl;
	cout << "*****  5.�޸���ϵ�� *****" << endl;
	cout << "*****  6.�����ϵ�� *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
	cout << "*************************" << endl;
}

//���ͨѶ¼��ϵ�˵Ľṹ��
struct chater {
	string name;
	int sex;
	int age;
	string phone;
	string dress;

};

//ͨѶ¼�ṹ��
struct chaterbook {

	struct chater array[MAX];//�������ϵ������
	int size;//ͨѶ¼��Ա����

};

//�����ϵ�˹���
void addperson(chaterbook* abs)
{
	if (abs->size == MAX)
	{
		cout << "ͨѶ¼����" << endl;
	}
	else
	{
		//����
		string name;
		cout << "������������֣�" << endl;
		cin >> name;
		abs->array[abs->size].name = name;

		//�Ա�
		cout << "��ѡ������Ա�" << endl;
		cout << "�� -- 1" << endl;
		cout << "Ů -- 2" << endl;
		
		while (true)
		{
			int sex;
		
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->array[abs->size].sex = sex;
				break;
			}
			
			cout << "����������������롣" << endl;
		}

		//����
		
		while (true)
		{
			cout << "���������䣺" << endl;

			int age;
		
			cin >> age;

			if (age > 0 && age < 100)
			{
				abs->array[abs->size].age = age;
				break;
			}
			cout << "����������������롣" << endl;
		}

		//�绰
		cout << "�������ֻ����룺" << endl;
		string phone;
		cin >> phone;
		abs->array[abs->size].phone = phone;



		//��ַ
		cout << "��������ĵ�ַ��" << endl;
		string dress;
		cin >> dress;
		abs->array[abs->size].dress = dress;

		//��ӳɹ�
		abs->size++;
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");
	}

}

//��ʾͨѶ¼
void showperson(chaterbook* abs)
{
	if (abs->size == 0)
	{
		cout << "��ǰû�м�¼" << endl;

	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout<< "������" << abs->array[i].name << "\t"
				<< "���䣺" << abs->array[i].age << "\t"
				<< "�Ա�" << (abs->array[i].sex ==  1? "��" :"Ů") << "\t"
				<< "�绰��" << abs->array[i].phone << "\t"
			    << "��ַ��" << abs->array[i].dress << endl;
		}
	}

	system("pause");
	system("cls");
}


//�����ϵ���Ƿ���ڣ����ڵĻ�������ϵ��������ľ���λ�ã����򷵻�-1��
//����1 ͨѶ¼ ����2 �Ա�����
int isExist(chaterbook* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (name == abs->array[i].name)
		{
			return i;//���ظ���ϵ���������е��±�
		}

	}
	return -1;//�������֮��Ҳû�ҵ�����-1

}

//ɾ����ϵ��
void Deleteperson(chaterbook* abs)
{
	//ȷ����Ҫɾ������
	string name;
	cin >> name;
	int ret = isExist(abs, name);//ȷ����û�д���

	if (ret != -1 )//ͨ������ֵ��ȷ��ȷ������
	{
		for (int i = 0; i < abs->size; i++)
		{
			//����Ǩ�����ﵽɾ����ϵ��
			abs->array[i] = abs->array[i + 1];
			cout << "��ɾ������ϵ��" << endl;
		}
		abs->size--;//����ͨѶ¼������
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void findperson(chaterbook* abs)
{
	cout << "��������Ҫ���ҵ��ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs,name);
	if (ret != -1)
	{
		cout << "������" << abs->array[ret].name << "\t"
			<< "���䣺" << abs->array[ret].age << "\t"
			<< "�Ա�" << (abs->array[ret].sex == 1 ? "��" : "Ů") << "\t"
			<< "�绰��" << abs->array[ret].phone << "\t"
			<< "��ַ��" << abs->array[ret].dress << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	//��������
	system("pause");
	system("cls");
}

//�޸���ϵ��
void modifyperson(chaterbook* abs)
{
	cout << "����Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);


	if (ret != -1)
	{
		//�޸ģ�
		//����

		cout << "�����޸�������" << endl;
		string name;
		cin >> name;
		abs->array[ret].name = name;
		//����
		cout << "�����޸����䣺" << endl;
		int age;
		cin >> age;
		abs->array[ret].age = age;
		//�Ա�
		cout << "��ѡ������Ա�" << endl;
		cout << "1-��" << endl;
		cout << "2-Ů" << endl;
		int sex;
		cin >> sex;
		abs->array[ret].sex = sex;
		//�绰
		cout << "�����޸ĵ绰��" << endl;
		string phone;
		cin >> phone;
		abs->array[ret].phone = phone;
		//��ַ
		cout << "�����޸ĵ�ַ��" << endl;
		string address;
		cin >> address;
		abs->array[ret].dress = address;

	}
	else
	{
		cout << "���޴���" << endl;
	}

	//����
	system("pause");
	system("cls");
}

//�����ϵ��
void cleanperson(chaterbook* abs)
{
	cout << "ѡ���Ƿ������ϵ�ˣ�" << endl;
	cout << "1 - ��" << endl;
	cout << "2 - ��" << endl;
	int select;
	cin >> select;
	if (select == 1 )
		{
			abs->size = 0;
			cout << "��ϵ�������" << endl;
		}
	else if(select == 2)
		{
			cout << "�ѳ��������ϵ��" << endl;
		}
	else
		{
			cout << "������ѡ��" << endl;
		}
	

	//��������
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼
	chaterbook abs;
	//��ʼ������
	abs.size = 0;

	
	int select = 0;

	//���û�ѡ����
	while (true)
	{   
		//ͨѶ¼����
		showMenu();
		
		cout << "���������֣�" << endl;
		cin >> select;//ѡ������Ҫ�Ĺ���

		switch (select)
		{
			
		case 1://1.���ͨѶ¼
			addperson(&abs);//���õ�ַ�����ܸı�ʵ��
			break;
			
		case 2://��ʾͨѶ¼
			showperson(&abs);
			break;
			
		case 3://ɾ����ϵ��
			cout << "��ѡ����Ҫɾ�����ˣ�" << endl;
			Deleteperson(&abs);
			break;

		case 4://������ϵ��
			findperson(&abs);
			break;

		case 5://�޸���ϵ��
			modifyperson(&abs);
			break;

		case 6://�����ϵ��
			cleanperson(&abs);
			break;

		case 0:cout << "��ӭ���´�ʹ��" << endl;//�˳�ͨѶ¼
			system("pause");//�˳�����
			return 0;

		default:
			break;
		}
	}

	system("pause");

	return 0;
}