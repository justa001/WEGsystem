#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student//构造一个学生类
{
public:
	student();//构造函数
	~student();//析构函数
	friend void shuru1();// 友元函数
	friend void add1();
	friend void add2();
	friend void a();
	friend void b();
	friend void c();
	friend void d();
	friend double s1(int i);
	friend void delet();
	friend void add();
private:
	int age;
	string num;
	string name;
	string status;
	string sex;
	double yongdianliang;
	double yongshuiliang;
	double meiqiliang;
};
class teacher :public student{
public:
	friend void shuru2();
	friend void add1();
	friend void add2();
	friend void a();
	friend void b();
	friend void c();
	friend void d();
	friend double h1(int i);
	friend void delet();
private:
	int age;
	string num;
	string name;
	string status;
	string sex;
	double yongdianliang;
	double yongshuiliang;
	double meiqiliang;
};
student stu[15];// 对象数组
teacher tea[15];
student::student(){};// 调用构造函数
student::~student(){};// 调用析构函数
double h1(int i)
{
	double e, f, g, j;
	e = 1.0*tea[i].yongdianliang;
	f = 1.0*tea[i].yongshuiliang;
	g = 1.0*tea[i].meiqiliang;
	j = e + f + g;
	return j;
}
double s1(int i)
{
	double x, y, z, s;
	x = 1.0*stu[i].yongdianliang;
	y = 1.0*stu[i].yongshuiliang;
	z = 1.0*stu[i].meiqiliang;
	s = x + y + z;
	return s;
}
void menu()
{
	cout << "  ★★★★★★水电煤气管理系统★★★★★ \n";
	cout << " ★★★★★ 1  用户信息的输入★★★★★★★★ \n";
	cout << " ★★★★★ 2  水电煤气信息的查询★★★★★★ \n";
	cout << " ★★★★★ 3  计算并查询用户应缴费用★★★★ \n";
	cout << " ★★★★★ 4  查询未缴费用用户名单★★★★★ \n";
	cout << " ★★★★★ 5  用户信息的查找★★★★★★★★ \n";
	cout << " ★★★★★ 6  输入要删除用户的信息★★★★★ \n";
	cout << " ★★★★★ 7  EXIT ★★★★★★★★★★★★★ \n";
	cout << " ★★★★★★★★★★★★★★★★★★★★★★ \n";
}
void menuf()
{
	cout << "★★★★★ 1 增加学生的信息★★★★★ \n";
	cout << "★★★★★ 2 增加老师的信息★★★★★ \n";
	cout << "★★★★★ 3 返回 MENU ★★★★★★★★★★ \n";
}
//***************************************************************
void a()
{
	int i, flag = 0;
	ifstream f("opq.txt");
	for (i = 0; i<15; i++)
		f >> stu[i].num >> stu[i].name >> stu[i].age >> stu[i].sex >> stu[i].status >> stu[i].yongshuiliang >> stu[i].
		yongdianliang >> stu[i].meiqiliang;
	f.close();
	ifstream F("uvw.txt");
	for (i = 0; i<15; i++)
		F >> tea[i].num >> tea[i].name >> tea[i].age >> tea[i].sex >> tea[i].status >> tea[i].yongshuiliang >> tea[i]
		.yongdianliang >> tea[i].meiqiliang;
	F.close();
	cout << " 输入所查用户的编号 " << endl;
	string num;
	cin >> num;
	for (i = 0; i<15; i++){
		if (num == stu[i].num){
			flag = 1; break;
		}
		if (num == tea[i].num){
			flag = 2; break;
		}
	}
	if (flag == 0)
		cout << "查无此人 " << endl;
	if (flag == 1)
		cout << "学号： " << stu[i].num << " " << " 姓名：" << stu[i].name << " " << " 年龄：" << stu[i].age << " "<<" 性 别 ： "<<stu[i].sex<<"  "<<" 身 份 : "<<stu[i].status<<"  "<<" 用 水 量 : "<<stu[i].yongshuiliang<<"  "<<" 用 电 量 : "<<stu[i].yongdianliang<<"  "<<" 煤 气 量"<<stu[i].meiqiliang<<endl;
	if (flag == 2)
		cout << "工号： " << tea[i].num << " " << " 姓名：" << tea[i].name << " " << " 年龄：" << tea[i].age << " "<<" 性 别 ： "<<tea[i].sex<<"  "<<" 身 份 : "<<tea[i].status<<"  "<<" 用 水 量 : "<<tea[i].yongshuiliang<<"  "<<" 用 电 量 : "<<tea[i].yongdianliang<<"  "<<" 煤 气 量"<<tea[i].meiqiliang<<endl;
		int m;
	do{
		menu();
		cout << " 请选择 ";
		cin >> m;
		switch (m)
		{
		case 1:add(); break;
		case 2:b(); break;
		case 3:c(); break;
		case 4:d(); break;
		case 5:a(); break;
		case 6:delet(); break;
		case 7:exit(0); break;
		}
	} while (m<1 || m>5);
}
//*****************************************************************************
void b()
{
	int i, flag = 0;
	ifstream f("opq.txt");
	for (i = 0; i<15; i++)
		f >> stu[i].num >> stu[i].name >> stu[i].age >> stu[i].sex >> stu[i].status >> stu[i].yongshuiliang >> stu[i].
		yongdianliang >> stu[i].meiqiliang;
	f.close();
	ifstream F("uvw.txt");
	for (i = 0; i<15; i++)
		F >> tea[i].num >> tea[i].name >> tea[i].age >> tea[i].sex >> tea[i].status >> tea[i].yongshuiliang >> tea[i]
		.yongdianliang >> tea[i].meiqiliang;
	F.close();
	string number;
	cout << " 输入所查人的编号 " << endl;
	cin >> number;
	for (i = 0; i<15; i++){
		if (number == stu[i].num){
			flag = 1; break;
		}
		if (number == tea[i].num){
			flag = 2; break;
		}
	}
	if (flag == 0)
		cout << "查无此人 " << endl;
	if (flag == 1)
		cout << " 该 学 生 本 月 的 用 水 量 为 :" << stu[i].yongshuiliang << " 该 学 生 本 月 用 电 量 为:"<<stu[i].yongdianliang<<" 该学生本月用煤气量为 \n : "<<stu[i].meiqiliang;
	if (flag == 2)
		cout << " 该 教 师 本 月 的 用 水 量 为 :" << tea[i].yongshuiliang << " 该 教 师 本 月 用 电 量 为 : "<<tea[i].yongdianliang<<" 该教师本月用煤气量为 \n : "<<tea[i].meiqiliang;
		int m;
	do{
		menu();
		cout << " 请选择 :";
		cin >> m;
		switch (m)
		{
		case 1:add(); break;
		case 2:b(); break;
		case 3:c(); break;
		case 4:d(); break;
		case 5:a(); break;
		case 6:delet(); break;
		case 7:exit(0); break;
		}
	} while (m<1 || m>5);
}
//*****************************************************************************
void c()
{
	int i, flag = 0;
	ifstream f("opq.txt");
	for (i = 0; i<15; i++)
		f >> stu[i].num >> stu[i].name >> stu[i].age >> stu[i].sex >> stu[i].status >> stu[i].yongshuiliang >> stu[i].
		yongdianliang >> stu[i].meiqiliang;
	f.close();
	ifstream F("uvw.txt");
	for (i = 0; i<15; i++)
		F >> tea[i].num >> tea[i].name >> tea[i].age >> tea[i].sex >> tea[i].status >> tea[i].yongshuiliang >> tea[i]
		.yongdianliang >> tea[i].meiqiliang;
	F.close();
	cout << " 输入所查人的编号 " << endl;
	string num;
	cin >> num;
	for (i = 0; i<15; i++){
		if (num == stu[i].num){
			flag = 1; break;
		}
		if (num == tea[i].num){
			flag = 2; break;
		}
	}
	if (flag == 0)
		cout << "查无此人 " << endl;
	if (flag == 1)
	{
		cout << " 本月总金额为 :" << endl;
		cout << s1(i) << endl;
	}
	if (flag == 2)
	{
		cout << " 本月总金额为 :" << endl;
		cout << h1(i) << endl;
	}
	int m;
	do{
		menu();
		cout << " 请选择 :";
		cin >> m;
		switch (m)
		{
		case 1:add(); break;
		case 2:b(); break;
		case 3:c(); break;
		case 4:d(); break;
		case 5:a(); break;
		case 6:delet(); break;
		case 7:exit(0); break;
		}
	} while (m<1 || m>5);
}
//*****************************************************************************
void d()
{
	int i;
	ifstream f("opq.txt");
	for (i = 0; i<15; i++)
		f >> stu[i].num >> stu[i].name >> stu[i].age >> stu[i].sex >> stu[i].status >> stu[i].yongshuiliang >> stu[i].
		yongdianliang >> stu[i].meiqiliang;
	f.close();
	ifstream F("uvw.txt");
	for (i = 0; i<15; i++)
		F >> tea[i].num >> tea[i].name >> tea[i].age >> tea[i].sex >> tea[i].status >> tea[i].yongshuiliang >> tea[i]
		.yongdianliang >> tea[i].meiqiliang;
	F.close();
	cout << " 以 下 用 户 未 缴 纳 费 用\n"<<stu[3].status<<":"<<stu[3].name<<""<<tea[7].status<<" : "<<tea[7].name<<endl;
		int m;
	do{
		menu();
		cout << "请选择 :";
		cin >> m;
		switch (m)
		{
		case 1:add(); break;
		case 2:b(); break;
		case 3:c(); break;
		case 4:d(); break;
		case 5:a(); break;
		case 6:delet(); break;
		case 7:exit(0); break;
		}
	} while (m<1 || m>5);
}
//**************************************************************************
void add1()
{
	student *p1 = new student[1];
	cout << " 输入要增加用户的学号 " << " ";
	cin >> p1[0].num;
	cout << " 输入要增加用户的姓名 " << " ";
	cin >> p1[0].name;
	cout << " 输入要增加用户的性别 " << " ";
	cin >> p1[0].sex;
	cout << " 输入要增加用户的年龄 " << " ";
	cin >> p1[0].age;
	cout << " 请输入要增加用户的身份 " << " ";
	cin >> p1[0].status;
	cout << " 输入要增加用户的用电量 " << " ";
	cin >> p1[0].yongdianliang;
	cout << " 输入要增加用户的用水量 " << " ";
	cin >> p1[0].yongshuiliang;
	cout << " 输入要增加用户的用煤气量 " << " ";
	cin >> p1[0].meiqiliang;
	ofstream outfile("opq.txt", ios::app);
	outfile << p1[0].num << "  " << p1[0].name << "  " << p1[0].age << "  " << p1[0].sex << " "<<p1[0].status<<"  "<<p1[0].yongdianliang<<"  "<<p1[0].yongshuiliang<<" "<<p1[0].meiqiliang<<endl;
		outfile.close();
	delete[]p1;
}
//*************************************************************************
void add2()
{
	teacher *p2 = new teacher[1];
	cout << " 输入要增加用户的工号 " << " ";
	cin >> p2[0].num;
	cout << " 输入要增加用户的姓名 " << " ";
	cin >> p2[0].name;
	cout << " 输入要增加用户的性别 " << " ";
	cin >> p2[0].sex;
	cout << " 输入要增加用户的年龄 " << " ";
	cin >> p2[0].age;
	cout << " 输入要增加用户的身份 " << " ";
	cin >> p2[0].status;
	cout << " 输入要增加用户的用电量 " << " ";
	cin >> p2[0].yongdianliang;
	cout << " 输入要增加用户的用水量 " << " ";
	cin >> p2[0].yongshuiliang;
	cout << " 输入要增加用户的用煤气量 " << " ";
	cin >> p2[0].meiqiliang;
	ofstream outfile("uvw.txt", ios::app);
	outfile << p2[0].num << "  " << p2[0].name << "  " << p2[0].age << "  " << p2[0].sex << " "<<p2[0].status<<"  "<<p2[0].yongdianliang<<"  "<<p2[0].yongshuiliang<<" "<<p2[0].meiqiliang<<endl;
		outfile.close();
	delete[]p2;
}
void fanhui()
{
	int m;
	do{
		menu();
		cout << "请选择 :";
		cin >> m;
		switch (m)
		{
		case 1:add(); break;
		case 2:b(); break;
		case 3:c(); break;
		case 4:d(); break;
		case 5:a(); break;
		case 6:delet(); break;
		case 7:exit(0); break;
		}
	} while (m<1 || m>5);
}
//********************************************************************
void add(){
	menuf();
	int n;
	cin >> n;
	switch (n){
	case 1:add1(); break;
	case 2:add2(); break;
	case 3:fanhui(); break;
	}
}
//*********************************************************************
void delet()
{
	int i;
	int flag = 0, t;
	student *stu = new student[15];
	teacher *tea = new teacher[15];
	string number;
	cout << "\t 输入所删除用户的编号 :";
	cin >> number;
	ifstream f("opq.txt");
	for (i = 0; i<15; i++)
		f >> stu[i].num >> stu[i].name >> stu[i].age >> stu[i].sex >> stu[i].status >> stu[i].yongshuiliang >> stu[i].
		yongdianliang >> stu[i].meiqiliang;
	ifstream F("uvw.txt");
	for (i = 0; i<15; i++)
		F >> tea[i].num >> tea[i].name >> tea[i].age >> tea[i].sex >> tea[i].status >> tea[i].yongshuiliang >> tea[i]
		.yongdianliang >> tea[i].meiqiliang;
	for (i = 0; i<15; i++)
	if (stu[i].num == number)
	{
		flag = 1; t = i; break;
	}
	for (i = 0; i<15; i++)
	if (tea[i].num == number)
	{
		flag = 2; t = i; break;
	}
	if (flag == 0)
		cout << "\t 该用户信息不存在或已删除 ";
	if (flag == 1)
	{
		ofstream ma("opq.txt", ios::trunc);
		ma.close();
		for (i = t; i<14; i++)
			stu[i] = stu[i + 1];
		ofstream m("opq.txt");
		for (i = 0; i<14; i++)
			m << stu[i].num << "  " << stu[i].name << " " << stu[i].age << " " << stu[i].sex << " " << stu[i].status << " "<<stu[i].yongshuiliang<<" "<<stu[i].yongdianliang<<" "<<stu[i].meiqiliang<<endl;
			cout << "\t 删除成功 ";
		m.close();
	}
	if (flag == 2)
	{
		ofstream te("uvw.txt", ios::trunc);
		te.close();
		for (i = t; i<14; i++)
			tea[i] = tea[i + 1];
		ofstream n("uvw.txt");
		for (i = 0; i<14; i++)
			n << tea[i].num << "  " << tea[i].name << " " << tea[i].age << "  " << tea[i].sex << "  " << tea[i].status << " "<<tea[i].yongshuiliang<<" "<<tea[i].yongdianliang<<" "<<tea[i].meiqiliang<<endl;
			cout << "\t 删除成功 ";
		n.close();
	}
}
//***************************************************
void shuru1()
{
	ifstream f("opq.txt");
	int i;
	for (i = 0; i<15; i++)
		f >> stu[i].num >> stu[i].name >> stu[i].age >> stu[i].sex >> stu[i].status >> stu[i].yongshuiliang >> stu[i].
		yongdianliang >> stu[i].meiqiliang;
	f.close();
}
//**********************************************
void shuru2(){
	ifstream F("uvw.txt");
	int i;
	for (i = 0; i<15; i++)
		F >> tea[i].num >> tea[i].name >> tea[i].age >> tea[i].sex >> tea[i].status >> tea[i].yongshuiliang >> tea[i]
		.yongdianliang >> tea[i].meiqiliang;
	F.close();
}
//***************************************************************************
void main(){
	int m;
	do {
		menu();
		cout << " 请选择 :";
		cin >> m;
		switch (m)
		{
		case 1:add(); break;
		case 2:b(); break;
		case 3:c(); break;
		case 4:d(); break;
		case 5:a(); break;
		case 6:delet(); break;
		case 7:exit(0); break;
		}
	} while (m<1 || m>5);
}
