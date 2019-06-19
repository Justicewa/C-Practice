#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*
	面向对象
	类的定义：
		class+classname+{成员函数，成员变量};
*/

//1.声明定义放在一起
//2.声明在.h文件中,定义在.cpp文件中
//class Person{
//public:
//	void showinfo(){
//		cout << _name << "-" << _sex << "-" << _age << endl;
//public:
//	char* _name;
//	char* _sex;
//	char* _age;
//};

#if 0
 //类的实例化
class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};
// 这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << _name << " "<<_gender << " " << _age << endl;
}

//int main(){
//	Person p1;
//	p1.PrintPersonInfo();
//
//	system("pause");
//	return 0;
//}
#endif

#if 0
/*
	类的大小:
		函数不占大小
		空类大小为1,占位作用,表示存在过

*/
class A
{
public:
	void PrintA()
	{
		  cout << _a << endl;
	}
private:
	char _a;
};


int main(){
	cout << sizeof(A) << endl;

	system("pause");
	return 0;
}
#endif

#if 0
/*this指针
	隐含的this指针

*/
class Date
{
public:
	//void Display(Date* this)
	void Display()
	{
			cout <<this-> _year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
int main()
{
	Date d1, d2;
	d1.SetDate(2018, 5, 1);
	d2.SetDate(2018, 7, 1);
	d1.Display();//Display(&d1)
	d2.Display();//Display(&d2)
	system("pause");
	return 0;
}
#endif

#if 0
class Date
{
public:
	void Display()
	{
		cout << this->_year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//构造函数:构造函数不是构造,是初始化
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};

int main()
{
	Date d1(1999, 2, 29);
	d1.Display();
	
	system("pause");
	return 0;
}
#endif

/*
	内置类型/基本类型
	自定义类型
*/

class A{
public:
	int _a;
};

class Date{
public:
	/*Date(){
		cout << "Date()" << endl;
		_year = 1900;
		_month = 2;
		_day = 1;
	}*/

	//一般这么定义,全缺省
	Date(int year = 1900, int month = 1, int day = 1){
		_year = year;
		_month = month;
		_day = day;
	}

	void Print(){
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;//基本类型->不做处理
	int _month;
	int _day;

	A _a;//自定义类型->初始化
};

int main(){
	Date d1(2000,1,2);
	d1.Print();

	system("pause");
	return 0;
}

