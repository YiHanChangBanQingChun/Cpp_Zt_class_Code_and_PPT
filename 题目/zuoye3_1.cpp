/*
实验三、函数的定义与调用
1.编一个函数，其功能是交换两个变量的值，其参数采用引用传递方式。


#include <iostream>
using namespace std;

void Exchange_two_number(int &a, int &b) {
	int temp = a;
	a = b;    //使用引用传递以达到修改外部变量的目的
	b = temp; //否则函数内部交换不会影响外部结果
}
int main() {
    int x = 5, y = 10;
    cout << "交换前: x = " << x << ", y = " << y << endl;
    Exchange_two_number(x, y); //实际上是自带函数swap()的部分功能
    cout << "交换后: x = " << x << ", y = " << y << endl;
    return 0;
}
*/