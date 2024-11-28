#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符:" << endl;
	cin >> ch;
	int a = int(ch);
	if (a >= 97 && a <= 122)
	{
		a -= 32;
		cout << char(a) << endl;
	}
	else
	{
		a++;
		cout << a << endl;
	}
	return 0;
}
