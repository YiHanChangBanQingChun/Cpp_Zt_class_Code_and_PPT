/*
3.从键盘输入一个0～1000之间的任意整数，
输出该整数的所有因子（例如：输入12，其
因子为1，2，3，4，6，12）。（用while循环）

#include <iostream>
using namespace std;

void Output_factor(int x) {
    int i = 1;
    while (i <= x) {
        if (x % i == 0) {
            cout << i << ", ";
        }
        i++;
    }
}

int main() {
    int x;
    cout << "请输入一个0～1000之间的整数: ";
    cin >> x;
    if (x >= 0 && x <= 1000) {
        cout << "该整数的所有因子为: ";
        Output_factor(x);
        cout << endl;
    }
    else {
        cout << "输入错误: 整数必须在0～1000之间" << endl;
    }
    return 0;
}
*/