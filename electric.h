#include<iostream>
#include<string>
#include<stdio.h>
#include<Windows.h>
using namespace std;
class electric
{
protected:
	float e_price;//电价格
	float e_unit;//电表度数
	float e_lastunit;//上次电表度数
	SYSTEMTIME e_copytime;//抄表时间
	SYSTEMTIME e_lastcopytime;//抄上次表时间
	float e_bill;//本次使用费用
	int e_mark;//是否缴费标记
public:
	electric() {}//无参构造函数
	electric(float price, float unit, float lastunit, SYSTEMTIME copytime, SYSTEMTIME lastcopytime, float bill, int mark)//有参构造函数
	{
		e_price = price;
		e_unit = unit;
		e_lastunit = lastunit;
		e_copytime = copytime;
		e_lastcopytime = lastcopytime;
		e_bill = bill;
		e_mark = mark;
	}
	~electric(){}//析构函数
};
