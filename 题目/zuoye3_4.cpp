/*
编写一个程序，包含三个重载的display函数和一个主函数。
要求第一个函数输出double值，
前面用字符串“a double：”引导，
第二个函数输出一个int值，
前面用字符串“a int：”引导，
第三个函数输出一个char字符值，
前面用字符串“a char：”引导，
在主函数中分别用double、
int和char型变量作为实参调用display函数。

#include <iostream>
using namespace std;

double display(double d) {
	cout << "a double: " << d << endl;
	return d;
}
int display(int i) {
	cout << "a int: " << i << endl;
	return i;
}
char display(char c) {
	cout << "a char: " << c << endl;
	return c;
}
int main() {
	double d = 3.14;
	int i = 314;
	char c = 'P';
	display(d);
	display(i);
	display(c);
	return 0;
}*/