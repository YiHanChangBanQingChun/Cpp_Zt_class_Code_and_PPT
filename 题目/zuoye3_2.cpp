/*
2.编一个函数，其功能是交换两个变量的值，其参数采用指针传递方式。


#include <iostream>
using namespace std;

void Exchange_two_number_v2(int* a, int* b) {
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "交换前: x = " << x << ", y = " << y << endl;
    cout << "地址: x = " << &x << ", y = " << &y << endl;
    Exchange_two_number_v2(&x, &y);
    cout << "交换后: x = " << x << ", y = " << y << endl;
    cout << "地址: x = " << &x << ", y = " << &y << endl;
    //交换了变量的值，但是变量的地址并没有发生变换
    return 0;
}
*/