/*
3.�������ĺ���������n��Ԫ�ص�����a��
ʹ����Ԫ�ذ��������С�
void inverse(int *a, int n)��

#include <iostream>
using namespace std;

void Inverse(int* a, int n) { //��������
	for (int i = 0; i < n / 2; i++) {
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int n = sizeof(a) / sizeof(a[0]); //��������a��Ԫ�ظ���

	cout << "����ǰ: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;
	Inverse(a, n);
	cout << "�����: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;
	return 0;
}*/