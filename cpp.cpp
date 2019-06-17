#include <stdio.h>
#include <stdlib.h>

#if 0
int a = 30;


//作用域
namespace a1{
	int a = 40;
	void fun1(){
		int a = 50;
	}
}

//嵌套
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

//分段定义,相同空间合并
namespace a1{
	int b = 20;
}


#if 0
int main(){
	// :: 作用域限定符
	//using + 命名空间 + :: 成员
	// using namespace 命名空间  造成命名冲突,命名污染,不用它
	printf("%d\n", a1::a);

	system("pause");
	return 0;
}
#endif

/*
	输入输出
*/
#include <iostream>
using namespace std;

#if 0
int main(){
	int a = 100;
	char c = 'a';
	
	//不需要指定输入输出格式使用std命名空间
	cout << a << "\n";
	cout << c << endl;
	cin >> a;
	cout << a << "\n";

	system("pause");
	return 0;
}
#endif


/*
	缺省参数 fun2
	1.全缺省,半缺省
*/

void fun1(int a){
	cout << a << endl;
}

void fun2(int a = 100){
	cout << a << endl;
}

//所有形参都有缺省值
void fun3(int a = 100, int b = 200, int c = 300){
	cout << a << " " << b << " " << c << endl;
}

//半缺省:从右向左给参数连续赋值,值是一个全局变量或者常量
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
	函数重载,函数名相同,参数不同(类型,个数,顺序不同),与返回值类型无关
	c编译器底层修改函数为 _ + 函数名
	C++编译器修饰规则: ?add@@YAHHH@Z D为char H为int N为double HHH
*/

/*
	预处理:展开头文件, 宏替换, 去注释, 条件编译 .i
	编译:语法语义检查, 转换成汇编代码 .s
	汇编:汇编代码转化为机器码(可执行代码).obj
	链接:链接所有机器码,生成可执行文件 .exe
*/

/*
	在函数前面加上 extern "C" 按C语言方式编写,用于混合编程
*/
#endif

/*
	引用:给一个变量取一个别名,指向同一个实体

	1.引用的要与实体类型一致
	2.必须初始化, = 实体
	3.指向一个实体后不能再等于其他实体了.
	4.一个实体可以有多个引用
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
	常引用
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
	引用实例
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
//引用做返回值: 实体的生命周期要大于所调用函数的生命周期
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
	传值和传引用的效率,引用快
*/

#endif

#if 0
/*
	内联函数:汇编语言不会调用call 会将其展开
	声明和定义不能分开
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
	基于范围的for循环
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
	//NULL:二义性 1.空指针 2.常量0
	int* ptr = NULL;
	int a = NULL;
	int b = NULL + 2;

	int* nptr = nullptr;//只是空指针

	cout << b << endl;

	system("pause");
	return 0;
}




















