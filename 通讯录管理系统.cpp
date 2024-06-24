#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

//菜单界面
void showMenu()
{
	cout << "*************************" << endl;
	cout << "*************************" << endl;
	cout << "*****  1.添加联系人 *****" << endl;
	cout << "*****  2.显示联系人 *****" << endl;
	cout << "*****  3.删除联系人 *****" << endl;
	cout << "*****  4.查找联系人 *****" << endl;
	cout << "*****  5.修改联系人 *****" << endl;
	cout << "*****  6.清空联系人 *****" << endl;
	cout << "*****  0.退出通讯录 *****" << endl;
	cout << "*************************" << endl;
	cout << "*************************" << endl;
}

//添加通讯录联系人的结构体
struct chater {
	string name;
	int sex;
	int age;
	string phone;
	string dress;

};

//通讯录结构体
struct chaterbook {

	struct chater array[MAX];//保存的联系人数组
	int size;//通讯录人员个数

};

//添加联系人功能
void addperson(chaterbook* abs)
{
	if (abs->size == MAX)
	{
		cout << "通讯录已满" << endl;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入你的名字：" << endl;
		cin >> name;
		abs->array[abs->size].name = name;

		//性别
		cout << "请选择你的性别：" << endl;
		cout << "男 -- 1" << endl;
		cout << "女 -- 2" << endl;
		
		while (true)
		{
			int sex;
		
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->array[abs->size].sex = sex;
				break;
			}
			
			cout << "输入错误，请重新输入。" << endl;
		}

		//年龄
		
		while (true)
		{
			cout << "请输入年龄：" << endl;

			int age;
		
			cin >> age;

			if (age > 0 && age < 100)
			{
				abs->array[abs->size].age = age;
				break;
			}
			cout << "输出错误，请重新输入。" << endl;
		}

		//电话
		cout << "请输入手机号码：" << endl;
		string phone;
		cin >> phone;
		abs->array[abs->size].phone = phone;



		//地址
		cout << "请输入你的地址：" << endl;
		string dress;
		cin >> dress;
		abs->array[abs->size].dress = dress;

		//添加成功
		abs->size++;
		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}

}

//显示通讯录
void showperson(chaterbook* abs)
{
	if (abs->size == 0)
	{
		cout << "当前没有记录" << endl;

	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout<< "姓名：" << abs->array[i].name << "\t"
				<< "年龄：" << abs->array[i].age << "\t"
				<< "性别：" << (abs->array[i].sex ==  1? "男" :"女") << "\t"
				<< "电话：" << abs->array[i].phone << "\t"
			    << "地址：" << abs->array[i].dress << endl;
		}
	}

	system("pause");
	system("cls");
}


//检测联系人是否存在，存在的话返回联系人在数组的具体位置，否则返回-1；
//参数1 通讯录 参数2 对比姓名
int isExist(chaterbook* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (name == abs->array[i].name)
		{
			return i;//返回该联系人在数组中的下标
		}

	}
	return -1;//如果遍历之后也没找到返回-1

}

//删除联系人
void Deleteperson(chaterbook* abs)
{
	//确定你要删除的人
	string name;
	cin >> name;
	int ret = isExist(abs, name);//确认有没有此人

	if (ret != -1 )//通过返回值来确认确有其人
	{
		for (int i = 0; i < abs->size; i++)
		{
			//数据迁移来达到删除联系人
			abs->array[i] = abs->array[i + 1];
			cout << "已删除该联系人" << endl;
		}
		abs->size--;//更新通讯录的人数
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人
void findperson(chaterbook* abs)
{
	cout << "请输入你要查找的人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs,name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->array[ret].name << "\t"
			<< "年龄：" << abs->array[ret].age << "\t"
			<< "性别：" << (abs->array[ret].sex == 1 ? "男" : "女") << "\t"
			<< "电话：" << abs->array[ret].phone << "\t"
			<< "地址：" << abs->array[ret].dress << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	//清屏操作
	system("pause");
	system("cls");
}

//修改联系人
void modifyperson(chaterbook* abs)
{
	cout << "查找要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);


	if (ret != -1)
	{
		//修改：
		//姓名

		cout << "输入修改姓名：" << endl;
		string name;
		cin >> name;
		abs->array[ret].name = name;
		//年龄
		cout << "输入修改年龄：" << endl;
		int age;
		cin >> age;
		abs->array[ret].age = age;
		//性别
		cout << "请选择你的性别" << endl;
		cout << "1-男" << endl;
		cout << "2-女" << endl;
		int sex;
		cin >> sex;
		abs->array[ret].sex = sex;
		//电话
		cout << "输入修改电话：" << endl;
		string phone;
		cin >> phone;
		abs->array[ret].phone = phone;
		//地址
		cout << "输入修改地址：" << endl;
		string address;
		cin >> address;
		abs->array[ret].dress = address;

	}
	else
	{
		cout << "查无此人" << endl;
	}

	//清屏
	system("pause");
	system("cls");
}

//清空联系人
void cleanperson(chaterbook* abs)
{
	cout << "选择是否清空联系人：" << endl;
	cout << "1 - 是" << endl;
	cout << "2 - 否" << endl;
	int select;
	cin >> select;
	if (select == 1 )
		{
			abs->size = 0;
			cout << "联系人已清空" << endl;
		}
	else if(select == 2)
		{
			cout << "已撤消清空联系人" << endl;
		}
	else
		{
			cout << "请重新选择" << endl;
		}
	

	//点击任意键
	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录
	chaterbook abs;
	//初始化人数
	abs.size = 0;

	
	int select = 0;

	//给用户选择功能
	while (true)
	{   
		//通讯录界面
		showMenu();
		
		cout << "请输入数字：" << endl;
		cin >> select;//选择你想要的功能

		switch (select)
		{
			
		case 1://1.添加通讯录
			addperson(&abs);//利用地址传递能改变实参
			break;
			
		case 2://显示通讯录
			showperson(&abs);
			break;
			
		case 3://删除联系人
			cout << "请选择想要删除的人：" << endl;
			Deleteperson(&abs);
			break;

		case 4://查找联系人
			findperson(&abs);
			break;

		case 5://修改联系人
			modifyperson(&abs);
			break;

		case 6://清空联系人
			cleanperson(&abs);
			break;

		case 0:cout << "欢迎你下次使用" << endl;//退出通讯录
			system("pause");//退出功能
			return 0;

		default:
			break;
		}
	}

	system("pause");

	return 0;
}