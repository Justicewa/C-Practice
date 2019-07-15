#if 0

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*

牛牛举办了一次编程比赛,参加比赛的有3*n个选手,每个选手都有一个水平值a_i.
现在要将这些选手进行组队,一共组成n个队伍,即每个队伍3人.
牛牛发现队伍的水平值等于该队伍队员中第二高水平值。
例如:
一个队伍三个队员的水平值分别是3,3,3.那么队伍的水平值是3
一个队伍三个队员的水平值分别是3,2,3.那么队伍的水平值是3
一个队伍三个队员的水平值分别是1,5,2.那么队伍的水平值是2
为了让比赛更有看点,牛牛想安排队伍使所有队伍的水平值总和最大。
如样例所示:
如果牛牛把6个队员划分到两个队伍
如果方案为:
team1:{1,2,5}, team2:{5,5,8}, 这时候水平值总和为7.
而如果方案为:
team1:{2,5,8}, team2:{1,5,5}, 这时候水平值总和为10.
没有比总和为10更大的方案,所以输出10.
*/

int main()
{
	int n;
	cout << "请输入参赛组数:";
	while (cin >> n)
	{
		int sum = 0;
		vector<int> a;
		a.resize(3 * n);
		for (int i = 0; i < (3 * n); i++)
		{
			cin >> a[i];
		}

		std::sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
}

#endif

/*
输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
例如，输入”They are students.”和”aeiou”，
则删除之后的第一个字符串变成”Thy r stdnts.”
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	getline(cin, str1);
	//getline: 输入字符串.
	getline(cin, str2);

	int hash[1024] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i)
	{
		hash[str2[i]]++;
	}

	string ret;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (hash[str1[i]] == 0)
		{
			ret += str1[i];
		}
	}
	cout << ret << endl;
	return 0;
}