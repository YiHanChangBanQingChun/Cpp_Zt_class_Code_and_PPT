/*
��дһ�����򣬰����������ص�display������һ����������
Ҫ���һ���������doubleֵ��
ǰ�����ַ�����a double����������
�ڶ����������һ��intֵ��
ǰ�����ַ�����a int����������
�������������һ��char�ַ�ֵ��
ǰ�����ַ�����a char����������
���������зֱ���double��
int��char�ͱ�����Ϊʵ�ε���display������

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