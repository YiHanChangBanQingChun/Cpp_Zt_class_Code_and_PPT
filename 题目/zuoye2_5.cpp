/*
5.�����С�ˮ�ɻ�������
��ν��ˮ�ɻ�������ָһ����λ����
���λ���������͵��ڸ�������
����153��ˮ�ɻ�������Ϊ��153=1^3+5^3+3^3��

#include <iostream>
#include <cmath>
using namespace std;

void Calculate_narcissistic_number_from_num() {
	int i = 999;
	int i100, i10, i1,j;
	cout << "ˮ�ɻ���Ϊ��";
	while (i>=100)
	{
		i100 = (i / 100) % 10;
		i10 = (i / 10) % 10;
		i1 = (i / 1) % 10;
		j = static_cast<int>(pow(i1, 3) + pow(i10, 3) + pow(i100, 3));
		if (i == j)
		{
			cout << i << ", ";
		}
		i--;
	}
}
int main()
{
	Calculate_narcissistic_number_from_num();
	return 0;
}
*/