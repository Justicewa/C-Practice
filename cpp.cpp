#include <stdio.h>
#include <stdlib.h>

#if 0
int a = 30;


//������
namespace a1{
	int a = 40;
	void fun1(){
		int a = 50;
	}
}

//Ƕ��
namespace a2{
	int b = 10;
	void fun2(){

	}
	namespace a3{
		int c = 30;
		void fun3(){

		}
	}
}

//�ֶζ���,��ͬ�ռ�ϲ�
namespace a1{
	int b = 20;
}


#if 0
int main(){
	// :: �������޶���
	//using + �����ռ� + :: ��Ա
	// using namespace �����ռ�  ���������ͻ,������Ⱦ,������
	printf("%d\n", a1::a);

	system("pause");
	return 0;
}
#endif

/*
	�������
*/
#include <iostream>
using namespace std;

#if 0
int main(){
	int a = 100;
	char c = 'a';
	
	//����Ҫָ�����������ʽʹ��std�����ռ�
	cout << a << "\n";
	cout << c << endl;
	cin >> a;
	cout << a << "\n";

	system("pause");
	return 0;
}
#endif


/*
	ȱʡ���� fun2
	1.ȫȱʡ,��ȱʡ
*/

void fun1(int a){
	cout << a << endl;
}

void fun2(int a = 100){
	cout << a << endl;
}

//�����βζ���ȱʡֵ
void fun3(int a = 100, int b = 200, int c = 300){
	cout << a << " " << b << " " << c << endl;
}

//��ȱʡ:�������������������ֵ,ֵ��һ��ȫ�ֱ������߳���
void fun4(int a, int b, int c = 300){
	cout << a << " " << b << " " << c << endl;
}

int main(){
	/*fun1(10);
	fun2();
	*/
	//fun3(1);
	fun4(1,2);

	system("pause");
	return 0;
}

/*
	��������,��������ͬ,������ͬ(����,����,˳��ͬ),�뷵��ֵ�����޹�
	c�������ײ��޸ĺ���Ϊ _ + ������
	C++���������ι���: ?add@@YAHHH@Z DΪchar HΪint NΪdouble HHH
*/

/*
	Ԥ����:չ��ͷ�ļ�, ���滻, ȥע��, �������� .i
	����:�﷨������, ת���ɻ����� .s
	���:������ת��Ϊ������(��ִ�д���).obj
	����:�������л�����,���ɿ�ִ���ļ� .exe
*/

/*
	�ں���ǰ����� extern "C" ��C���Է�ʽ��д,���ڻ�ϱ��
*/
#endif

/*
	����:��һ������ȡһ������,ָ��ͬһ��ʵ��

	1.���õ�Ҫ��ʵ������һ��
	2.�����ʼ��, = ʵ��
	3.ָ��һ��ʵ������ٵ�������ʵ����.
	4.һ��ʵ������ж������
*/
#include <iostream>
using namespace std;

#if 0
int main(){
	int a = 1;
	int& ra = a;
	cout << ra << endl;
	cout << a << endl;

	system("pause");
	return 0;
}
#endif

/*
	������
*/
#if 0
int main(){
	const int a = 10;
	const int& ra = a;

	double f = 3.2;
	const int& rf = f;

	system("pause");
	return 0;
}
#endif

/*
	����ʵ��
*/
#if 0
void Swap(int& a, int& b){
	int t = a;
	a = b;
	b = t;
}

int main(){
	int m = 10;
	int n = 20;
	Swap(m, n);
	cout << n << " " << m << " " << endl;
	
	system("pause");
	return 0;
}
#endif

#if 0
//����������ֵ: ʵ�����������Ҫ���������ú�������������
int& add(int& a, int& b, int& c){
	c = a + b;
	return c;
}

int main(){
	int a = 10;
	int b = 20;
	int c ;
	int& sum = add(a, b, c);
	cout << a << "+" << b << "=" << endl;
	cout << sum << endl;

	system("pause");
	return 0;
}

/*
	��ֵ�ʹ����õ�Ч��,���ÿ�
*/

#endif

#if 0
/*
	��������:������Բ������call �Ὣ��չ��
	�����Ͷ��岻�ֿܷ�
*/

#define Fun(x,y) x*y
#define N 10

inline int Mul(int a, int b){
	int c = a*b;
	return c;
}

int main(){
	cout << Fun(2, 3) << endl;
	cout << Mul(2, 3) << endl;

	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	auto a = 10;
	auto c = 'a';

	cout << typeid(c).name() << endl;
	cout << typeid(a).name() << endl;

	system("pause");
	return 0;
}
#endif

#if 0

/*
	���ڷ�Χ��forѭ��
*/

void TestFor()
{
	int array[] = { 1, 2, 3, 4, 5 };
	/*for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
		array[i] *= 2;
	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
		cout << *p << endl;*/

	for (int e : array){
		cout << e << endl;
	}
}

int main(){
	TestFor();
	
	system("pause");
	return 0;
}
#endif

int main(){
	//NULL:������ 1.��ָ�� 2.����0
	int* ptr = NULL;
	int a = NULL;
	int b = NULL + 2;

	int* nptr = nullptr;//ֻ�ǿ�ָ��

	cout << b << endl;

	system("pause");
	return 0;
}




















