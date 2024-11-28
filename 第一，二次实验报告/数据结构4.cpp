#include<iostream>
using namespace std;
int main()
{
	cout << "请输入第一个值:" << endl;
	double num1;
	cin >> num1;
	cout << "请选择你要进行的运算" << endl;
	cout << "1.加法运算" << endl;
	cout << "2.减法运算" << endl;
	cout << "3.乘法运算" << endl;
	cout << "4.除法运算" << endl;
	cout << "5.取余运算" << endl;
	int select;
	cin >> select;
	cout << "请输入第二个值:" << endl;
	double num2;
	cin >> num2;
	switch (select)
	{
	case 1:
		cout << "两数之和为" << (num1 + num2) << endl;
		break;
	case 2:
		cout << "两数之差为" << (num1 - num2) << endl;
		break;
	case 3:
		cout << "两数之积为" << (num1 * num2) << endl;
		break;
	case 4:
		if (num2 == 0)
		{
			cout << "除数不能为0" << endl;
			break;
		}
		else
		{
			cout << "两数之商为" << (num1 / num2) << endl;
			break;
		}
	case 5:
		if (num2 == 0)
		{
			cout << "除数不能为0" << endl;
			break;
		}
		else
		{
			cout << "两数取余结果为" << (int(num1) % int(num2)) << endl;
			break;
		}
	default:
		cout << "请选择合法运算" << endl;
	}
	return 0;
}
