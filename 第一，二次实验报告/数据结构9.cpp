#include<iostream>
using namespace std;
int main()
{
	double price = 0.8, total_p = 0;
	int number = 2, day = 0;
	double average_p;
	for (int i = 1; number <= 100; i++)
	{
		day++;
		total_p += price * number;
		number *= 2;
	}
	average_p = total_p / day;
	cout << "平均每天买" << average_p << "元" << endl;
	return 0;
}
