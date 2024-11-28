#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, xn, xnp1;
	cout << "请输入a的值:";
	cin >> a;
	xn = a;
	if (a >= 0)
	{
		for (; 1;)
		{
			xnp1 = (1.0 / 2) * (xn + (a / xn));
			if (fabs(xnp1 - xn) < 0.00001)
			{
				cout << "a的平方根为" << xnp1;
				break;
			}
			xn = xnp1;
		}
	}
	else
	{
		cout << "开平方需要a>=0" << endl;
	}
	return 0;
}
