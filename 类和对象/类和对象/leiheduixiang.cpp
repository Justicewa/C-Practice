#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*
	�������
	��Ķ��壺
		class+classname+{��Ա��������Ա����};
*/

//1.�����������һ��
//2.������.h�ļ���,������.cpp�ļ���
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
 //���ʵ����
class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};
// ������Ҫָ��PrintPersonInfo������Person�������
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
	��Ĵ�С:
		������ռ��С
		�����СΪ1,ռλ����,��ʾ���ڹ�

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
/*thisָ��
	������thisָ��

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
	int _year; // ��
	int _month; // ��
	int _day; // ��
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

	//���캯��:���캯�����ǹ���,�ǳ�ʼ��
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year; // ��
	int _month; // ��
	int _day; // ��
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
	��������/��������
	�Զ�������
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

	//һ����ô����,ȫȱʡ
	Date(int year = 1900, int month = 1, int day = 1){
		_year = year;
		_month = month;
		_day = day;
	}

	void Print(){
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;//��������->��������
	int _month;
	int _day;

	A _a;//�Զ�������->��ʼ��
};

int main(){
	Date d1(2000,1,2);
	d1.Print();

	system("pause");
	return 0;
}

