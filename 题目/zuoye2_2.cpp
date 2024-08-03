/*
2.输入两个操作数和相应的运算符后，
计算其运算结果。
这里假设运算符只有+、-、*、/，
且两个运算数均为整数（使用switch语句实现）。


#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    Calculator(int x, int y, string op) : x(x), y(y), op(op) {}

    double calculate() {
        switch (op[0]) {  
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0) {
                return static_cast<double>(x) / y; //判断除零
            }
            else {
                cout << "错误: 除数不能为0" << endl;
                return 0;
            }
        default:
            cout << "错误: 无效的运算符" << endl;
            return 0;
        }
    }

private:
    int x, y;
    string op; //运算符
};

int main() {
    int x, y;
    string op;
    cout << "请输入第一个操作数: ";
    cin >> x;
    cout << "请输入运算符: ";
    cin >> op;
    cout << "请输入第二个操作数: ";
    cin >> y;

    Calculator calculator(x, y, op);
    double result = calculator.calculate();
    cout << "结果: " << result << endl;

    return 0;
}
*/