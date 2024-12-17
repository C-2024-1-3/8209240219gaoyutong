#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int len_s = strlen(s);
	for (int i = 0; i < len_s; i++)
	{
		int m = int(s[i]) - 65;
		if (m >= 0 && m < 26)
		{
			counts[m]++;
		}
		if (m >= 32 && m < 58)
		{
			counts[m - 32]++;
		}
		else
		{
			continue;
		}
	}
}
int main()
{
	char s[100];
	cout << "请输入字符串:";
	cin.getline(s, 100);
	int counts[26];
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << char(i + 65) << ":" << counts[i] << endl;
		}
	}
	return 0;
}
