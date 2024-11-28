 #include<iostream>
using namespace std;
int main()
{
	const double π = 3.1415926;
	double r;
	double h;
	cout << "请输入圆锥底面半径:" << endl;
	cin >> r;
	cout << "请输入圆锥高:";
	cin >> h;
	double v = (r * r) * π * h * (1.0 / 3);
	cout << "圆锥的体积为" << v << endl;
	return 0;
}
