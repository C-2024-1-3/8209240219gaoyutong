#pragma once
#include<iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value()	//��ֵ��Ա����
	{
		cout << "set name is:";
		cin.getline(name, 20);//ʹ��getline����
		cout << "set sex is:(m/f) ";
		cin >> sex;
		cout << "set num is:";
		cin >> num;
	}
private:
	int num;
	char name[20];
	char sex;
};
