#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int j = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			j++;
		}
	}
	if (j == 2)
	{
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	bool ss;
	int n = 1;
	for (int j = 0; ;)
	{
		n++;
		ss = is_prime(n);
		if (ss == true)
		{
			cout << n<<" ";
			j++;
			if (j % 10 == 0)
			{
				cout << endl;
			}
		}
		if (j == 200)
		{
			break;
		}
	}
	return 0;
}
