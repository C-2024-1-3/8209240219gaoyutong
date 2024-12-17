#include<iostream>
using namespace std;
int peach_number(int num1, int num2)
{
	if (num2 != 0)
	{
		int temp = (num1 + 1) * 2;
		num1 = temp;
		num2--;
		return peach_number(num1, num2);
	}
	else
	{
		return num1;
	}
}
int main()
{
	int n = 1;
	int number;
	number = peach_number(n, 10);
	cout << "第一天猴子共摘了" <<number<< "个桃子" << endl;
	return 0;
}
