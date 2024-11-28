#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout << "请分别输入三边边长" << endl;
	cout << "边长1:";
	cin >> a;
	cout << "边长2:";
	cin >> b;
	cout << "边长3:";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b == c || a == c)
		{
			cout << "您创建的是等腰三角形" << endl;
		}
		cout << "三角形周长为" << (a + b + c) << endl;
	}
	else
	{
		cout << "您输入的三边长不能组成三角形" << endl;
	}
	return 0;
}
