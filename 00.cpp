// 00.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

#define cout std::cout 
#define endl std::endl
#define p(x) pow(10,x)
int main(void)
 {
	double b = 32*pow(10,-3),h= 14.2*pow(10,-3);
	double P = 100, L = 500 * p(-3),E=200*p(9);
	double X = 250*p(-3)*(1.0);
	double I =b*pow(h,3)/12;
	double y[4] = { 0 };
	double t[4] = {0};
	//cout << X << endl;
	for (size_t i = 0; i < 4; i++)
	{
		y[i] = (P * X * (3 * pow(L, 2) - 4 * pow(X, 2)) / (48 * E * I)) * (-1.0);
		t[i] = P * pow(L, 2) / (16 * E * I);
		P = P + 100;
		y[i] = y[i] * p(3);
		t[i] = t[i] * p(4);
		cout << std::setprecision(4) << "y("<<i<<")=" << y[i] << endl << "t(" << i << ") = " << t[i] << endl;
	}
	double tmp = 0.0,tmp2=0.0,d1=0.0,d2=0.0;
	for (size_t i = 0; i < 4; i++)
	{
		d1 = y[i] - tmp;
		d2 = t[i] - tmp2;
		cout << std::setprecision(4) << "d=" << d1 << endl << "d2=" << d2 << endl;
		tmp = y[i];
		tmp2 = t[i];
	}
	double Lac = 224 * p(-3);
	for (size_t i = 0; i < 4; i++)
	{
		double y3 = Lac * tan((t[i]/p(4)));
		y3 = y3 * p(3);
		cout << std::setprecision(4) << "y3=" << y3 << endl;
	}
	return 0;
	
 }


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
