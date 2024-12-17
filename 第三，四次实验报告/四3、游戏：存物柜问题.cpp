#include<iostream>
using namespace std;
void change_state(bool* arr, int num1)
{
	for (int i = num1; i < 100; )
	{
		arr[i] = (!arr[i]);
		int j = i + 1;
		j += j + 1;
		i = j - 1;
	}
}
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;
	}
	for (int i = 1; i < 100; i++)
	{
		change_state(arr, i);
	}
	cout << "开着的门有:" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)
		{
			cout << (i + 1) << ' ';
		}
	}
	return 0;
}
