#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr1[10];
	cout << "请输入数组的数值" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
	}
	int num = (sizeof(arr1) / sizeof(arr1[1]));
	bubbleSort(arr1, num);
	cout << "排序后的数组为" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr1[i] <<" ";
	}
	return 0;
}
