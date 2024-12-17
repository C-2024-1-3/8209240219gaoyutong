#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int s_len = strlen(hexString);
	int num = 0;
	for (int i = 0; i < s_len; i++)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			num = num + (((int(hexString[i])) - 48) * pow(16, s_len - i - 1));
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			num = num + (((int(hexString[i])) - 55) * pow(16, s_len - i - 1));
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
		{
			num = num + (((int(hexString[i])) - 87) * pow(16, s_len - i - 1));
		}
		else {
			cout << "数值不是16进制" << endl;
			return 0;
		}
	}
	return num;

}
int main()
{
	char s[50];
	cout << "请输入16进制数字:";
	cin.getline(s, 50);
	int dec = parseHex(s);
	cout << "十进制数字为:" << dec << endl;
}