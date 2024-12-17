#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int temparr[10];
	int num = 0;
	int temp = 0;
	cout << "请输入数组中的10个数" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> temparr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		temp = 0;
		for (int j = 0; j < i; j++)
		{
			if (temparr[i] == temparr[j])
			{
				temp++;
			}
		}
		if (temp == 0)
		{
			arr[num] = temparr[i];
			num++;
		}
	}
	cout << "您输入的数字是(已删去重复值)" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
