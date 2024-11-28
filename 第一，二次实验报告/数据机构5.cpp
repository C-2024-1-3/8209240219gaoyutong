#include<iostream>
using namespace std;
int main()
{
	char c;
	int letter = 0, space = 0, number = 0, other = 0;
	cout << "请输入一串字符串" << endl;
	while ((c = cin.get()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			letter++;
		else if (c == ' ')
			space++;
		else if (c >= '0' && c <= '9')
			number++;
		else
			other++;
	}
	cout << "字母字符数量为" << letter << "空格字符数量为" << space << "数字字符数量为" << number << "其他字符数量为" << other << endl;
	return 0;
}
