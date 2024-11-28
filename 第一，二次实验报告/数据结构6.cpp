#include<iostream>
using namespace std;
int Gcd(int num1, int num2)
{
	int temp;
	for (int i = 1; i < num1 || i < num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			temp = i;
		}
	}
	return temp;
}
int LCM(int num1, int num2)
{
	int temp;
	for (int i = num1; i <= (num1 * num2); i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			temp = i;
			break;
		}
	}
	return temp;
}
int main()
{
	int a, b;
	cout << "请输入数字a:";
	cin >> a;
	cout << "请输入数字b:";
	cin >> b;
	int gcd = Gcd(a, b);
	int lcm = LCM(a, b);
	cout << "最大公因数为" << gcd << endl << "最小公倍数为" << lcm << endl;
	return 0;
}
