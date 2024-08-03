/*
5.求所有“水仙花数”。
所谓“水仙花数”是指一个三位数，
其各位数字立方和等于该数本身。
例：153是水仙花树，因为：153=1^3+5^3+3^3。

#include <iostream>
#include <cmath>
using namespace std;

void Calculate_narcissistic_number_from_num() {
	int i = 999;
	int i100, i10, i1,j;
	cout << "水仙花数为：";
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