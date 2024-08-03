/*
实验一、基本数据类型及运算
1.编写一个计算和估计地球重量的程序，并测试它。
地球的半径为6356.91Km，平均密度为5.52t/m3。
要求地球半径从键盘输入，地球密度定义成符号常量。

#include <iostream>
#define density 5.52 // 单位是t/m3
#define PI 3.14159265358979323846
using namespace std;
double calculate_earth_weight(double r)
{
	double v = 4.0/3.0*PI*r*r*r;
	return v*density;
}
int main()
{
	double r;
	cout<<"请输入地球的半径：(km)"<<endl;
	cin>>r;
	cout<<"地球的重量是："<<calculate_earth_weight(r*1000)<<"t"<<endl;
}
*/