#include<iostream>
using namespace std;
int Gys(int& m, int& n)
{
	int temp;
	for (int i = 1; i < m || i < n; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			temp = i;
		}
	}
	return temp;
}
int Gbs(int& m, int& n)
{
	int temp;
	for (int i = m; i <= (m * n); i++)
	{
		if (i % m == 0 && i % n == 0)
		{
			temp = i;
			break;
		}
	}
	return temp;
}
int main()
{
	int m, n;
	cout << "请输入m的值:";
	cin >> m;
	cout << "请输入n的值:";
	cin >> n;
	int gys = Gys(m, n);
	int gbs = Gbs(m, n);
	cout << "m与n的最大公因数是:" << gys << endl << "最小公倍数是:" << gbs << endl;
	return 0;
}
