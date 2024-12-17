#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int size3 = size1 + size2;
	for (int i = 0; i < size3; i++)
	{
		if (i < size1)
			list3[i] = list1[i];
		else
			list3[i] = list2[i - size1];
	}
	for (int i = 0; i < size3 - 1; i++)
	{
		for (int j = 0; j < size3 - i - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp;
				temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
	cout << "合并后排序的数组是:";
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << ' ';
	}
}
int main()
{
	int size1, size2;
	cout << "请输入list1的长度:";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "请输入list1的数值:";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入list2的长度:";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "请输入list2的数值:";
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	return 0;
}
