/*
3.完成下面的函数，对有n个元素的数组a，
使数组元素按逆序排列。
void inverse(int *a, int n)。

#include <iostream>
using namespace std;

void Inverse(int* a, int n) { //逆序排列
	for (int i = 0; i < n / 2; i++) {
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int n = sizeof(a) / sizeof(a[0]); //计算数组a的元素个数

	cout << "逆序前: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;
	Inverse(a, n);
	cout << "逆序后: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;
	return 0;
}*/