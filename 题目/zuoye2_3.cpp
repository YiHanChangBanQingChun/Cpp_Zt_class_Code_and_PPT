/*
3.�Ӽ�������һ��0��1000֮�������������
������������������ӣ����磺����12����
����Ϊ1��2��3��4��6��12��������whileѭ����

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
    cout << "������һ��0��1000֮�������: ";
    cin >> x;
    if (x >= 0 && x <= 1000) {
        cout << "����������������Ϊ: ";
        Output_factor(x);
        cout << endl;
    }
    else {
        cout << "�������: ����������0��1000֮��" << endl;
    }
    return 0;
}
*/