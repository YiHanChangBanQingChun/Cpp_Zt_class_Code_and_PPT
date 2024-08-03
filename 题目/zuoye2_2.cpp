/*
2.������������������Ӧ���������
��������������
������������ֻ��+��-��*��/��
��������������Ϊ������ʹ��switch���ʵ�֣���


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
                return static_cast<double>(x) / y; //�жϳ���
            }
            else {
                cout << "����: ��������Ϊ0" << endl;
                return 0;
            }
        default:
            cout << "����: ��Ч�������" << endl;
            return 0;
        }
    }

private:
    int x, y;
    string op; //�����
};

int main() {
    int x, y;
    string op;
    cout << "�������һ��������: ";
    cin >> x;
    cout << "�����������: ";
    cin >> op;
    cout << "������ڶ���������: ";
    cin >> y;

    Calculator calculator(x, y, op);
    double result = calculator.calculate();
    cout << "���: " << result << endl;

    return 0;
}
*/