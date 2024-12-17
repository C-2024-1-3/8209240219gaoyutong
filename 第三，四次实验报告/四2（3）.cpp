#include<iostream>
using namespace std;
void bubble_sort(int* arr, const int* size)
{
	for (int i = 0; i < *size - 1; i++)
	{
		for (int j = 0; j < *size - i - 1; j++)
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
	int size;
	cout << "请输入数组大小:";
	cin >> size;
	int* arr = new int[size];
	cout << "请输入数组数值:";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	bubble_sort(arr, &size);
	cout << "排序后的数组为:";
	for (int i = 0; i < size; i++)
	{
		cout << *&arr[i] << ' ';
	}
	delete[]arr;
	return 0;
}
