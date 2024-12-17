#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int equal = 0;
	for (int i = 0; i < len_s2; i++)
	{
		equal = 0;
		if (s1[0] == s2[i] && len_s1 <= (len_s2 - i + 1))
		{
			equal++;
			for (int j = 1; j < len_s1; j++)
			{
				i++;
				if (s1[j] == s2[i])
				{
					equal++;
				}
				else
				{
					break;
				}
			}
			if (equal == len_s1)
			{
				return (i - len_s1 + 1);
			}
			else
			{
				continue;
			}
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "请输入string1(子串):";
	cin.getline(s1, 100);
	cout << "请输入string2(母串):";
	cin.getline(s2, 100);
	int indexof = indexOf(s1, s2);
	cout << "indexof(" << s1 << " , " << s2 << ")is" << indexof << endl;
	return 0;

}

