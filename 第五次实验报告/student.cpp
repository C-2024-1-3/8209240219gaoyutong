﻿#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
	cout << "name:" << name << endl;
	cout << "num:" << num << endl;
	cout << "sex:" << sex << endl;
}
