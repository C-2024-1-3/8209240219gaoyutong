#include"mytriangle.h"
int main()
{
	int side1, side2, side3;
	cout << "��ֱ��������߱߳�" << endl;
	cin >> side1 >> side2 >> side3;
	int val = is_valid(side1, side2, side3);
	if (val == true)
	{
		double square = area(side1, side2, side3);
		cout << "����������������Ϊ:" << square << endl;
	}
	else
	{
		cout << "����������߳����Ϸ�" << endl;
	}
	return 0;
}